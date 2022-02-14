
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
 const char *VAR_2 = FUNC_1(VAR_1, 1);
 if (FUNC_0(VAR_2)) {
  FUNC_4 (VAR_1);
  FUNC_3 (VAR_1,"Unable to change working directory to '%s'\n%s\n",
    VAR_2, VAR_0);
  return 2;
 } else {
  FUNC_2 (VAR_1, 1);
  return 1;
 }
}
