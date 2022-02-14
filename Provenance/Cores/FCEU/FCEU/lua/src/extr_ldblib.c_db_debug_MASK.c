
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int buffer ;


 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_2) {
  for (;;) {
    char VAR_3[250];
    FUNC_1("lua_debug> ", VAR_0);
    if (FUNC_0(VAR_3, sizeof(VAR_3), VAR_1) == 0 ||
        FUNC_6(VAR_3, "cont\n") == 0)
      return 0;
    if (FUNC_2(VAR_2, VAR_3, FUNC_7(VAR_3), "=(debug command)") ||
        FUNC_3(VAR_2, 0, 0, 0)) {
      FUNC_1(FUNC_5(VAR_2, -1), VAR_0);
      FUNC_1("\n", VAR_0);
    }
    FUNC_4(VAR_2, 0);
  }
}
