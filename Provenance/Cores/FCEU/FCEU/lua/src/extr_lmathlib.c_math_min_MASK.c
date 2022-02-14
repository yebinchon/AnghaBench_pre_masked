
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_Number ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_0) {
  int VAR_1 = FUNC_1(VAR_0);
  lua_Number VAR_2 = FUNC_0(VAR_0, 1);
  int VAR_3;
  for (VAR_3=2; VAR_3<=VAR_1; VAR_3++) {
    lua_Number VAR_4 = FUNC_0(VAR_0, VAR_3);
    if (VAR_4 < VAR_2)
      VAR_2 = VAR_4;
  }
  FUNC_2(VAR_0, VAR_2);
  return 1;
}
