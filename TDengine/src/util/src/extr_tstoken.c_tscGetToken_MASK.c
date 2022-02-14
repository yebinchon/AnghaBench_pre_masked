
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (char*,char*) ;

char *FUNC_1(char *VAR_2, char **VAR_3, int *VAR_4) {
  char VAR_5 = 0;

  while (*VAR_2 != 0) {
    if (VAR_0[*VAR_2]) {
      ++VAR_2;
    } else {
      break;
    }
  }

  char VAR_6 = 0;
  if (*VAR_2 == '\'' || *VAR_2 == '\"') {
    VAR_5 = 1;
    VAR_6 = *VAR_2;
    VAR_2++;
  }

  *VAR_3 = VAR_2;

  if (*VAR_2 > 0 && VAR_1[*VAR_2] && VAR_5 == 0) {
    VAR_2++;


    if (VAR_1[*VAR_2] &&(*VAR_2 != '(' && *VAR_2 != ')' && *VAR_2 != '-' && *VAR_2 != '+'))
      *VAR_4 = 2;
    else
      *VAR_4 = 1;
    return *VAR_3 + *VAR_4;
  }

  while (*VAR_2 != 0) {
    if (VAR_5) {

      if (*VAR_2 == VAR_6) {
        if (*(VAR_2 - 1) != '\\') {
          break;
        } else {
          FUNC_0(VAR_2 - 1, VAR_2);
        }
      } else {
        ++VAR_2;
      }
    } else {
      if (VAR_0[*VAR_2]) break;

      if (VAR_1[*VAR_2]) break;

      ++VAR_2;
    }
  }

  *VAR_4 = (int)(VAR_2 - *VAR_3);

  if (VAR_6 != 0 && *VAR_2 != 0 && *(VAR_2 + 1) != 0) {
    return VAR_2 + 1;
  } else {
    return VAR_2;
  }
}
