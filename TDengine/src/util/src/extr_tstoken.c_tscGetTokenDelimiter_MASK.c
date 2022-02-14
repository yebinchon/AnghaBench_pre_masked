
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char,char*) ;

char *FUNC_1(char *VAR_0, char **VAR_1, int *VAR_2, char *VAR_3) {
  while (*VAR_0 != 0) {
    if (FUNC_0(*VAR_0, VAR_3)) {
      ++VAR_0;
    } else {
      break;
    }
  }

  *VAR_1 = VAR_0;

  char *VAR_4 = VAR_0;
  *VAR_2 = 0;
  while (*VAR_4 != 0) {
    if (!FUNC_0(*VAR_4, VAR_3)) {
      *VAR_2 = *VAR_2 + 1;
      VAR_4++;
    } else {
      break;
    }
  }

  return VAR_0;
}
