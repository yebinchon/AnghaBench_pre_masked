
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_1, int VAR_2) {
  if (FUNC_1(VAR_1, VAR_2))
    FUNC_0(VAR_1, VAR_2, "number has no integer representation");
  else
    FUNC_2(VAR_1, VAR_2, VAR_0);
}
