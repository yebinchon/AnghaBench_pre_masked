
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_param {int stream; } ;
typedef int lua_State ;


 int FUNC_0 (struct cb_param*) ;
 struct cb_param* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0){

  struct cb_param *VAR_1 = FUNC_1(VAR_0,1);
  FUNC_2(VAR_1->stream);
  FUNC_0(VAR_1);
  return 0;
}
