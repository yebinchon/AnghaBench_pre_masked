
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void FUNC_0(char *VAR_1) {
  for (int VAR_2 = 0; VAR_1[VAR_2] != 0; VAR_2++) {
    if (VAR_1[VAR_2] == ' ' || VAR_1[VAR_2] == ':' || VAR_1[VAR_2] == '.' || VAR_1[VAR_2] == '-' || VAR_1[VAR_2] == '/' || VAR_1[VAR_2] == '\'')
      VAR_1[VAR_2] = '_';
    if (VAR_2 == VAR_0 + 1) {
      VAR_1[VAR_2] = 0;
      break;
    }
  }
}
