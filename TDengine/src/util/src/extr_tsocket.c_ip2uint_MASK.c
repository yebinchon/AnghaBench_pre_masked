
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char const* const) ;

unsigned int FUNC_2(const char *const VAR_0) {
  char VAR_1[20];
  char VAR_2[5];

  FUNC_1(VAR_1, VAR_0);

  char *VAR_3, *VAR_4;
  VAR_3 = VAR_1;
  VAR_4 = VAR_1;

  int VAR_5;

  for (VAR_5 = 0; *VAR_3 != '\0'; VAR_3 = VAR_4) {
    for (VAR_4 = VAR_3; *VAR_4 != '.' && *VAR_4 != '\0'; VAR_4++) {
    }
    if (*VAR_4 == '.') {
      *VAR_4 = '\0';
      VAR_4++;
    }
    VAR_2[VAR_5++] = (char)FUNC_0(VAR_3);
  }

  VAR_2[VAR_5] = '\0';

  return *((unsigned int *)VAR_2);
}
