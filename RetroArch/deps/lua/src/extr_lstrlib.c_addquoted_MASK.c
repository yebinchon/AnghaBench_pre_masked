
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;
typedef int buff ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int *,char const) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (char const) ;

__attribute__((used)) static void FUNC_6 (luaL_Buffer *VAR_0, const char *VAR_1, size_t VAR_2) {
  FUNC_3(VAR_0, '"');
  while (VAR_2--) {
    if (*VAR_1 == '"' || *VAR_1 == '\\' || *VAR_1 == '\n') {
      FUNC_3(VAR_0, '\\');
      FUNC_3(VAR_0, *VAR_1);
    }
    else if (FUNC_0(FUNC_5(*VAR_1))) {
      char VAR_3[10];
      if (!FUNC_1(FUNC_5(*(VAR_1+1))))
        FUNC_2(VAR_3, sizeof(VAR_3), "\\%d", (int)FUNC_5(*VAR_1));
      else
        FUNC_2(VAR_3, sizeof(VAR_3), "\\%03d", (int)FUNC_5(*VAR_1));
      FUNC_4(VAR_0, VAR_3);
    }
    else
      FUNC_3(VAR_0, *VAR_1);
    VAR_1++;
  }
  FUNC_3(VAR_0, '"');
}
