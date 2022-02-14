
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;



char* FUNC_0(char* VAR_0) {
  int32_t VAR_1 = 0;
  int32_t VAR_2 = 0;

  while (VAR_0[VAR_1] != 0 && VAR_2 < 2) {
    if (VAR_0[VAR_1++] == ':') {
      VAR_2++;
    }
  }

  while (VAR_0[VAR_1] >= '0' && VAR_0[VAR_1] <= '9') {
    VAR_1++;
  }

  return &VAR_0[VAR_1];
}
