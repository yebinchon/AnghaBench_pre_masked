
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uptr ;


 int VAR_0 ;
 int volatile VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

void FUNC_0(int VAR_10, int VAR_11)
{



  volatile

  uptr VAR_12;
  int VAR_13 = VAR_0;
  int VAR_14;

  VAR_12 = (uptr)VAR_5;
  for (VAR_14 = VAR_10 >> VAR_13; VAR_14 <= VAR_11 >> VAR_13; VAR_14++)
    VAR_3[VAR_14] = (VAR_12 >> 1) | VAR_1;

  VAR_12 = (uptr)VAR_4;
  for (VAR_14 = VAR_10 >> VAR_13; VAR_14 <= VAR_11 >> VAR_13; VAR_14++)
    VAR_2[VAR_14] = (VAR_12 >> 1) | VAR_1;

  VAR_12 = (uptr)VAR_7;
  for (VAR_14 = VAR_10 >> VAR_13; VAR_14 <= VAR_11 >> VAR_13; VAR_14++)
    VAR_9[VAR_14] = (VAR_12 >> 1) | VAR_1;

  VAR_12 = (uptr)VAR_6;
  for (VAR_14 = VAR_10 >> VAR_13; VAR_14 <= VAR_11 >> VAR_13; VAR_14++)
    VAR_8[VAR_14] = (VAR_12 >> 1) | VAR_1;
}
