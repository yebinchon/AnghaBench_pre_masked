
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uptr ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;

void FUNC_0(int VAR_9, int VAR_10, void *VAR_11, int VAR_12)
{
  uptr *VAR_13, *VAR_14, *VAR_15, *VAR_16;
  uptr VAR_17 = (uptr)VAR_11;
  int VAR_18 = VAR_0;
  int VAR_19;

  if (!VAR_12) {
    VAR_13 = VAR_2;
    VAR_14 = VAR_1;
    VAR_15 = VAR_4;
    VAR_16 = VAR_3;
  } else {
    VAR_13 = VAR_6;
    VAR_14 = VAR_5;
    VAR_15 = VAR_8;
    VAR_16 = VAR_7;
  }

  VAR_17 -= VAR_9;
  VAR_17 >>= 1;
  for (VAR_19 = VAR_9 >> VAR_18; VAR_19 <= VAR_10 >> VAR_18; VAR_19++)
    VAR_13[VAR_19] = VAR_14[VAR_19] = VAR_15[VAR_19] = VAR_16[VAR_19] = VAR_17;
}
