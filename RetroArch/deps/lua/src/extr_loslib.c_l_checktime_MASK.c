
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 int FUNC_0 (int *,int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static time_t FUNC_2 (lua_State *VAR_0, int VAR_1) {
  lua_Integer VAR_2 = FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_0, (time_t)VAR_2 == VAR_2, VAR_1, "time out-of-bounds");
  return (time_t)VAR_2;
}
