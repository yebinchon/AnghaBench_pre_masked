
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static Instruction *FUNC_5 (lua_State *VAR_3, size_t VAR_4) {
  Instruction *VAR_5;
  if (VAR_4 >= VAR_1 - 1)
    FUNC_0(VAR_3, "pattern too big");
  VAR_5 = (Instruction *)FUNC_2(VAR_3, (VAR_4 + 1) * sizeof(Instruction));
  FUNC_1(VAR_3, VAR_2);
  FUNC_3(VAR_3, -2);
  FUNC_4(VAR_5 + VAR_4, VAR_0, 0);
  return VAR_5;
}
