
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  size_t VAR_1;
  size_t VAR_2;
  luaL_Buffer VAR_3;
  const char *VAR_4 = FUNC_2(VAR_0, 1, &VAR_1);
  FUNC_1(VAR_0, &VAR_3);
  for (VAR_2=0; VAR_2<VAR_1; VAR_2++)
    FUNC_0(&VAR_3, FUNC_4(FUNC_5(VAR_4[VAR_2])));
  FUNC_3(&VAR_3);
  return 1;
}
