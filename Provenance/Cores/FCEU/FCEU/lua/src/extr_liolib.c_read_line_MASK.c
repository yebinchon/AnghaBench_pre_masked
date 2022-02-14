
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*,int ,int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1, FILE *VAR_2) {
  luaL_Buffer VAR_3;
  FUNC_2(VAR_1, &VAR_3);
  for (;;) {
    size_t VAR_4;
    char *VAR_5 = FUNC_3(&VAR_3);
    if (FUNC_0(VAR_5, VAR_0, VAR_2) == ((void*)0)) {
      FUNC_4(&VAR_3);
      return (FUNC_5(VAR_1, -1) > 0);
    }
    VAR_4 = FUNC_6(VAR_5);
    if (VAR_4 == 0 || VAR_5[VAR_4-1] != '\n')
      FUNC_1(&VAR_3, VAR_4);
    else {
      FUNC_1(&VAR_3, VAR_4 - 1);
      FUNC_4(&VAR_3);
      return 1;
    }
  }
}
