
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_0, int VAR_1, int VAR_2) {
  Instruction *VAR_3 = FUNC_2(VAR_0, VAR_2 * VAR_1);
  Instruction *VAR_4 = VAR_3;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    VAR_4 += FUNC_0(VAR_0, VAR_4, 1);
    FUNC_1(VAR_4 - VAR_1, (VAR_2 - VAR_5)*VAR_1);
  }
}
