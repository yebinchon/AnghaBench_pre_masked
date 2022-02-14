
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char int32_t ;


 int FUNC_0 (char*) ;

int32_t FUNC_1(char *VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return 0;
  }

  int32_t VAR_1 = VAR_0[0];
  if (VAR_1 != '\'' && VAR_1 != '"') {
    return (int32_t)FUNC_0(VAR_0);
  }

  int32_t VAR_2 = 1, VAR_3 = 0;

  while (VAR_0[VAR_2] != 0) {
    if (VAR_0[VAR_2] == VAR_1) {
      if (VAR_0[VAR_2 + 1] == VAR_1) {
        VAR_0[VAR_3++] = (char)VAR_1;
        VAR_2++;
      } else {
        VAR_0[VAR_3++] = 0;
        return (VAR_3 - 1);
      }
    } else {
      VAR_0[VAR_3++] = VAR_0[VAR_2];
    }

    VAR_2++;
  }

  return VAR_3 + 1;
}
