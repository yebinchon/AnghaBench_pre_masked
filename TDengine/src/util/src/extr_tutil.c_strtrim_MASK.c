
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;



void FUNC_0(char *VAR_0) {
  int32_t VAR_1 = 0;
  int32_t VAR_2 = 0;

  int32_t VAR_3 = 0;
  while (VAR_0[VAR_2] == ' ') {
    ++VAR_2;
  }

  if (VAR_0[VAR_2] == 0) {
    VAR_0[0] = 0;
    return;
  }

  VAR_3 = VAR_2;

  int32_t VAR_4 = 0;
  while (VAR_0[VAR_2] != 0) {
    if (VAR_0[VAR_2] == ' ' && VAR_4 == 0) {
      VAR_4 = VAR_2;
    } else if (VAR_0[VAR_2] != ' ' && VAR_4 != 0) {
      VAR_4 = 0;
    }

    VAR_0[VAR_1++] = VAR_0[VAR_2++];
  }

  if (VAR_4 > 0) {
    VAR_0[VAR_4 - VAR_3] = 0;
  } else if (VAR_2 != VAR_1) {
    VAR_0[VAR_1] = 0;
  }
}
