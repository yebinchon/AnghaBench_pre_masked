
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int buffer ;


 scalar_t__ FUNC_0 (char*,int,int ) ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_1) {
  for (;;) {
    char VAR_2[250];
    FUNC_5("%s", "lua_debug> ");
    if (FUNC_0(VAR_2, sizeof(VAR_2), VAR_0) == 0 ||
        FUNC_6(VAR_2, "cont\n") == 0)
      return 0;
    if (FUNC_1(VAR_1, VAR_2, FUNC_7(VAR_2), "=(debug command)") ||
        FUNC_2(VAR_1, 0, 0, 0))
      FUNC_5("%s\n", FUNC_4(VAR_1, -1));
    FUNC_3(VAR_1, 0);
  }
}
