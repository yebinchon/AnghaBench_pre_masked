
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;
typedef int boolean ;


 int* VAR_0 ;
 int* VAR_1 ;

int
FUNC_0
( int VAR_2,
  int VAR_3,
  int VAR_4 )
{
    boolean VAR_5;
    byte* VAR_6;
    byte* VAR_7;
    int VAR_8;

    VAR_5 = 0;
    VAR_6 = VAR_0;
    VAR_7 = VAR_1;

    while (VAR_6!=VAR_0+VAR_2*VAR_3)
    {
 if (*VAR_6 != *VAR_7)
 {
     if (*VAR_6 > *VAR_7)
     {
  VAR_8 = *VAR_6 - VAR_4;
  if (VAR_8 < *VAR_7)
      *VAR_6 = *VAR_7;
  else
      *VAR_6 = VAR_8;
  VAR_5 = 1;
     }
     else if (*VAR_6 < *VAR_7)
     {
  VAR_8 = *VAR_6 + VAR_4;
  if (VAR_8 > *VAR_7)
      *VAR_6 = *VAR_7;
  else
      *VAR_6 = VAR_8;
  VAR_5 = 1;
     }
 }
 VAR_6++;
 VAR_7++;
    }

    return !VAR_5;

}
