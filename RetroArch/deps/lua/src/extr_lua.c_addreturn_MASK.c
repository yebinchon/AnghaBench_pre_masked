
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ,char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1) {
  const char *VAR_2 = FUNC_5(VAR_1, -1);
  const char *VAR_3 = FUNC_2(VAR_1, "return %s;", VAR_2);
  int VAR_4 = FUNC_0(VAR_1, VAR_3, FUNC_6(VAR_3), "=stdin");
  if (VAR_4 == VAR_0) {
    FUNC_3(VAR_1, -2);
    if (VAR_2[0] != '\0')
      FUNC_4(VAR_1, VAR_2);
  }
  else
    FUNC_1(VAR_1, 2);
  return VAR_4;
}
