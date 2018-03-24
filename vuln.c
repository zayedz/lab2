#include <stdio.h>

void secretFuction(){

printf("This is a ristrected area !!!");

}

void echo(){

char buffer[20];
printf ("Enter a text :\n");
scanf("%s" , buffer);
printf("You have entered : %s\n ", buffer);

}

void main(){

echo();


}
