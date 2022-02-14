
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char const*) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int ** FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_2) {
  if (FUNC_6(VAR_2, 1)) {

    FUNC_7(VAR_2, VAR_1, VAR_0);
    return FUNC_1(VAR_2);
  }
  else {
    const char *VAR_3 = FUNC_4(VAR_2, 1);
    FILE **VAR_4 = FUNC_8(VAR_2);
    *VAR_4 = FUNC_3(VAR_3, "r");
    if (*VAR_4 == ((void*)0))
      FUNC_2(VAR_2, 1, VAR_3);
    FUNC_0(VAR_2, FUNC_5(VAR_2), 1);
    return 1;
  }
}
