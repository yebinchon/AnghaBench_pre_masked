
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (lua_State *VAR_0, lua_State *VAR_1, int VAR_2) {
  if (VAR_0 != VAR_1 && !FUNC_1(VAR_1, VAR_2))
    FUNC_0(VAR_0, "stack overflow");
}
