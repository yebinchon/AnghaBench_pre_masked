
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Instruction ;


 int * FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (int *,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_0) {
  Instruction *VAR_1 = FUNC_0(VAR_0, 1, ((void*)0));
  int VAR_2, VAR_3;
  FUNC_1(VAR_0, 1);
  VAR_2 = FUNC_3(VAR_0, -1);
  FUNC_9("[");
  for (VAR_3 = 1; VAR_3 <= VAR_2; VAR_3++) {
    FUNC_9("%d = ", VAR_3);
    FUNC_5(VAR_0, -1, VAR_3);
    if (FUNC_2(VAR_0, -1))
      FUNC_9("%s  ", FUNC_6(VAR_0, -1));
    else
      FUNC_9("%s  ", FUNC_8(VAR_0, FUNC_7(VAR_0, -1)));
    FUNC_4(VAR_0, 1);
  }
  FUNC_9("]\n");
  FUNC_10(VAR_1);
  return 0;
}
