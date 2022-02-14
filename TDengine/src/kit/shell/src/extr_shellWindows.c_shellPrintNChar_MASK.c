
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(char *VAR_1, int VAR_2, bool VAR_3) {
  int VAR_4 = VAR_2;
  wchar_t VAR_5;
  while (VAR_4 > 0) {
    if (*VAR_1 == '\0') break;
    char *VAR_6 = VAR_1;
    int VAR_7 = FUNC_0(&VAR_5, VAR_6, VAR_0);
    int VAR_8 = VAR_7;
    if (VAR_4 < VAR_8) break;
    FUNC_1("%lc", VAR_5);
    VAR_1 += VAR_7;
    VAR_4 -= VAR_8;
  }

  while (VAR_4 > 0) {
    FUNC_1(" ");
    VAR_4--;
  }

  if (!VAR_3) {
    FUNC_1("|");
  } else {
    FUNC_1("\n");
  }
}
