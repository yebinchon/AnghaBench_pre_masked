
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;


 scalar_t__* VAR_0 ;

void FUNC_0(char *VAR_1, char *VAR_2) {
  int32_t VAR_3 = 0;
  do {
    VAR_1[VAR_3] = VAR_2[VAR_3];
    VAR_3++;
  } while (VAR_0[VAR_2[VAR_3]] == 0);

  VAR_2[VAR_3 - 1] = ' ';
}
