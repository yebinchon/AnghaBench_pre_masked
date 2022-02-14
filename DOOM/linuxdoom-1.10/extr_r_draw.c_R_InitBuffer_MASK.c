
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;

void
FUNC_0
( int VAR_8,
  int VAR_9 )
{
    int VAR_10;




    VAR_5 = (VAR_2-VAR_8) >> 1;


    for (VAR_10=0 ; VAR_10<VAR_8 ; VAR_10++)
 VAR_3[VAR_10] = VAR_5 + VAR_10;


    if (VAR_8 == VAR_2)
 VAR_6 = 0;
    else
 VAR_6 = (VAR_1-VAR_0-VAR_9) >> 1;


    for (VAR_10=0 ; VAR_10<VAR_9 ; VAR_10++)
 VAR_7[VAR_10] = VAR_4[0] + (VAR_10+VAR_6)*VAR_2;
}
