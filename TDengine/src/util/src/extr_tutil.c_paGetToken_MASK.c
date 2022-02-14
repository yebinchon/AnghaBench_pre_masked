
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;



char *FUNC_0(char *VAR_0, char **VAR_1, int32_t *VAR_2) {
  char VAR_3 = 0;

  while (*VAR_0 != 0) {
    if (*VAR_0 == ' ' || *VAR_0 == '\t') {
      ++VAR_0;
    } else {
      break;
    }
  }

  if (*VAR_0 == '@') {
    VAR_3 = 1;
    VAR_0++;
  }

  *VAR_1 = VAR_0;

  while (*VAR_0 != 0) {
    if (*VAR_0 == '@' && VAR_3) {

      ++VAR_0;
      break;
    }

    if (*VAR_0 == '#' || *VAR_0 == '\n' || *VAR_0 == '\r') {
      *VAR_0 = 0;
      break;
    }

    if ((*VAR_0 == ' ' || *VAR_0 == '\t') && !VAR_3) {
      break;
    } else {
      ++VAR_0;
    }
  }

  *VAR_2 = (int32_t)(VAR_0 - *VAR_1);
  if (VAR_3) {
    *VAR_2 = *VAR_2 - 1;
  }

  return VAR_0;
}
