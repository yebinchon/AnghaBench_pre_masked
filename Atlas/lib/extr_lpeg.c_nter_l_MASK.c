
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
  Instruction *VAR_2;
  FUNC_0(VAR_1, !FUNC_1(VAR_1, 1), 1, "non-nil value expected");
  VAR_2 = FUNC_2(VAR_1, 1);
  FUNC_3(VAR_2, VAR_0, FUNC_4(VAR_1, 1));
  return 1;
}
