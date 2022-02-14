
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static Instruction *FUNC_5 (lua_State *VAR_2, Instruction *VAR_3, int VAR_4, int VAR_5) {

  int VAR_6;
  Instruction *VAR_7 = FUNC_2(VAR_2, (VAR_5 + 1)*VAR_4 + 2);
  Instruction *VAR_8 = VAR_7;
  if (!FUNC_4(VAR_2, VAR_3, VAR_3, VAR_3 + VAR_4, 0, 0))
    FUNC_1(VAR_2, "loop body may accept empty string");
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    VAR_8 += FUNC_0(VAR_2, VAR_8, 1);
  }
  FUNC_3(VAR_8++, VAR_0, 1 + VAR_4 + 1);
  VAR_8 += FUNC_0(VAR_2, VAR_8, 1);
  FUNC_3(VAR_8, VAR_1, -VAR_4);
  return VAR_7;
}
