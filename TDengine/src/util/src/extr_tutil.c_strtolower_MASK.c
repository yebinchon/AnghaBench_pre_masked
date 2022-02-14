
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

char* FUNC_1(char *VAR_0, const char *VAR_1) {
  int VAR_2 = 0;
  char VAR_3 = 0, *VAR_4 = VAR_0, VAR_5;

  FUNC_0(VAR_0 != ((void*)0));

  for (VAR_5 = *VAR_1++; VAR_5; VAR_5 = *VAR_1++) {
    if (VAR_2) {
      VAR_2 = 0;
    } else if (VAR_3) {
      if (VAR_5 == '\\') {
        VAR_2 = 1;
      } else if (VAR_5 == VAR_3) {
        VAR_3 = 0;
      }
    } else if (VAR_5 >= 'A' && VAR_5 <= 'Z') {
      VAR_5 -= 'A' - 'a';
    } else if (VAR_5 == '\'' || VAR_5 == '"') {
      VAR_3 = VAR_5;
    }
    *VAR_4++ = VAR_5;
  }

  *VAR_4 = 0;
  return VAR_0;
}
