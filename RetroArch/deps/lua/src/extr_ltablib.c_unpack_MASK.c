
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lua_Unsigned ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_2) {
  lua_Unsigned VAR_3;
  lua_Integer VAR_4 = FUNC_3(VAR_2, 2, 1);
  lua_Integer VAR_5 = FUNC_2(VAR_2, VAR_1, 3, FUNC_1(VAR_2, 1));
  if (VAR_4 > VAR_5) return 0;
  VAR_3 = (lua_Unsigned)VAR_5 - VAR_4;
  if (VAR_3 >= (unsigned int)VAR_0 || !FUNC_4(VAR_2, (int)(++VAR_3)))
    return FUNC_0(VAR_2, "too many results to unpack");
  for (; VAR_4 < VAR_5; VAR_4++) {
    FUNC_5(VAR_2, 1, VAR_4);
  }
  FUNC_5(VAR_2, 1, VAR_5);
  return (int)VAR_3;
}
