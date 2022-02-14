
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static Instruction *FUNC_4 (lua_State *VAR_1, int VAR_2, int VAR_3) {

  int VAR_4;
  Instruction *VAR_5 = FUNC_2(VAR_1, (VAR_3 + 1)*VAR_2 + 1);
  Instruction *VAR_6 = VAR_5;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    VAR_5 += FUNC_0(VAR_1, VAR_5, 1);
  }
  VAR_5 += FUNC_0(VAR_1, VAR_5, 1);
  FUNC_1(VAR_5 - VAR_2, VAR_2 + 1);
  FUNC_3(VAR_5, VAR_0, -VAR_2);
  return VAR_6;
}
