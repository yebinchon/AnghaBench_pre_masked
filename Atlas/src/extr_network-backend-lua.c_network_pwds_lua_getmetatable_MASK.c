
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luaL_reg {char* member_0; int * member_1; } ;
typedef int lua_State ;


 int FUNC_0 (int *,struct luaL_reg const*) ;



int FUNC_1(lua_State *VAR_0) {
 static const struct luaL_reg VAR_1[] = {
  { "__index", 129 },
  { "__len", 128 },
  { ((void*)0), ((void*)0) },
 };

 return FUNC_0(VAR_0, VAR_1);
}
