
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int,int*) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int,int,int) ;
 int FUNC_6 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_4, int VAR_5, int VAR_6) {
  int VAR_7, VAR_8;
  Instruction *VAR_9 = FUNC_2(VAR_4, 1, &VAR_7);
  int VAR_10 = FUNC_6(VAR_9, 0, &VAR_8);
  if (VAR_10 == VAR_7) {

    Instruction *VAR_11 = FUNC_3(VAR_4, VAR_7 + 1);
    int VAR_12 = FUNC_1(VAR_4, VAR_6);
    VAR_11 += FUNC_0(VAR_4, VAR_11, 1);
    FUNC_5(VAR_11, VAR_2, VAR_12, VAR_5, VAR_8);
  }
  else {
    Instruction *VAR_13 = FUNC_3(VAR_4, 1 + VAR_7 + 1);
    Instruction *VAR_14 = VAR_13;
    FUNC_5(VAR_14++, VAR_3, FUNC_1(VAR_4, VAR_6), VAR_5, 0);
    VAR_14 += FUNC_0(VAR_4, VAR_14, 1);
    FUNC_5(VAR_14, VAR_1, 0, VAR_0, 0);
    FUNC_4(VAR_13);
  }
  return 1;
}
