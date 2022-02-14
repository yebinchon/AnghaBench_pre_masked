
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 size_t FUNC_1 (char const*,int,size_t,int *) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int *) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2, FILE *VAR_3, int VAR_4) {
  int VAR_5 = FUNC_3(VAR_2) - 1;
  int VAR_6 = 1;
  for (; VAR_5--; VAR_4++) {
    if (FUNC_5(VAR_2, VAR_4) == VAR_1) {

      VAR_6 = VAR_6 &&
          FUNC_0(VAR_3, VAR_0, FUNC_4(VAR_2, VAR_4)) > 0;
    }
    else {
      size_t VAR_7;
      const char *VAR_8 = FUNC_2(VAR_2, VAR_4, &VAR_7);
      VAR_6 = VAR_6 && (FUNC_1(VAR_8, sizeof(char), VAR_7, VAR_3) == VAR_7);
    }
  }
  return FUNC_6(VAR_2, VAR_6, ((void*)0));
}
