
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static Instruction *FUNC_2 (lua_State *VAR_0, Instruction **VAR_1, int *VAR_2,
                                         int VAR_3) {
  *VAR_1 = FUNC_1(VAR_0, *VAR_2 + VAR_3);
  FUNC_0(VAR_0, 1);
  *VAR_2 += VAR_3;
  return *VAR_1 + *VAR_2 - VAR_3;
}
