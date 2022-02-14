
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_2, lua_Debug *VAR_3) {
  int VAR_4 = FUNC_4(VAR_2);
  FUNC_3(VAR_2, "f", VAR_3);
  FUNC_2(VAR_2, VAR_1, VAR_0);
  if (FUNC_0(VAR_2, VAR_4 + 1, 2)) {
    const char *VAR_5 = FUNC_9(VAR_2, -1);
    if (FUNC_10(VAR_5, "_G.", 3) == 0) {
      FUNC_6(VAR_2, VAR_5 + 3);
      FUNC_7(VAR_2, -2);
    }
    FUNC_1(VAR_2, -1, VAR_4 + 1);
    FUNC_5(VAR_2, 2);
    return 1;
  }
  else {
    FUNC_8(VAR_2, VAR_4);
    return 0;
  }
}
