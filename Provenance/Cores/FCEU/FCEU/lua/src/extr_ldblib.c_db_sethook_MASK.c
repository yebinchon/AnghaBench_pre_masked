
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int * lua_Hook ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int*) ;
 int * VAR_1 ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (char const*,int) ;

__attribute__((used)) static int FUNC_13 (lua_State *VAR_2) {
  int VAR_3, VAR_4, VAR_5;
  lua_Hook VAR_6;
  lua_State *VAR_7 = FUNC_1(VAR_2, &VAR_3);
  if (FUNC_5(VAR_2, VAR_3+1)) {
    FUNC_11(VAR_2, VAR_3+1);
    VAR_6 = ((void*)0); VAR_4 = 0; VAR_5 = 0;
  }
  else {
    const char *VAR_8 = FUNC_2(VAR_2, VAR_3+2);
    FUNC_3(VAR_2, VAR_3+1, VAR_0);
    VAR_5 = FUNC_4(VAR_2, VAR_3+3, 0);
    VAR_6 = VAR_1; VAR_4 = FUNC_12(VAR_8, VAR_5);
  }
  FUNC_0(VAR_2);
  FUNC_7(VAR_2, VAR_7);
  FUNC_8(VAR_2, VAR_3+1);
  FUNC_9(VAR_2, -3);
  FUNC_6(VAR_2, 1);
  FUNC_10(VAR_7, VAR_6, VAR_4, VAR_5);
  return 0;
}
