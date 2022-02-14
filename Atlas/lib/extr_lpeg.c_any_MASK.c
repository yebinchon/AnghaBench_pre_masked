
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static Instruction *FUNC_2 (lua_State *VAR_2, int VAR_3, int VAR_4, int *VAR_5) {
  int VAR_6 = VAR_5 ? *VAR_5 : 0;
  Instruction *VAR_7 = FUNC_0(VAR_2, (VAR_3 - 1)/VAR_1 + VAR_4 + 1);
  Instruction *VAR_8 = VAR_7 + VAR_6;
  for (; VAR_3 > VAR_1; VAR_3 -= VAR_1)
    FUNC_1(VAR_8++, VAR_0, 0, VAR_1);
  FUNC_1(VAR_8++, VAR_0, 0, VAR_3);
  if (VAR_5) *VAR_5 = VAR_8 - VAR_7;
  return VAR_7;
}
