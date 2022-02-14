
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int32_t ;



char *FUNC_0(char *VAR_0, char VAR_1, int32_t VAR_2, bool VAR_3) {
  for (int32_t VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {


    if (VAR_3 && (VAR_0[VAR_4] == '\'' || VAR_0[VAR_4] == '"')) {
      char VAR_5 = VAR_0[VAR_4++];
      while(VAR_4 < VAR_2 && VAR_0[VAR_4++] != VAR_5);
      if (VAR_4 >= VAR_2) {
        return ((void*)0);
      }
    }

    if (VAR_0[VAR_4] == VAR_1) {
      return &VAR_0[VAR_4];
    }
  }

  return ((void*)0);
}
