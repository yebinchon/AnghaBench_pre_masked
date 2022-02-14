
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(char **VAR_0, const char *VAR_1) {
  char *VAR_2;
  const char *VAR_3;
  int VAR_4, VAR_5;
  char *VAR_6;
  if ((VAR_2 = *VAR_0) == ((void*)0))
    return (((void*)0));
  for (VAR_6 = VAR_2;;) {
    VAR_4 = *VAR_2++;
    VAR_3 = VAR_1;
    do {
      if ((VAR_5 = *VAR_3++) == VAR_4) {
        if (VAR_4 == 0)
          VAR_2 = ((void*)0);
        else
          VAR_2[-1] = 0;
        *VAR_0 = VAR_2;
        return (VAR_6);
      }
    } while (VAR_5 != 0);
  }

}
