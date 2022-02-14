
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_1) {
 const char *VAR_2 = FUNC_0 (VAR_1, 1);
 int VAR_3;

 VAR_3 = FUNC_4 (VAR_2);

 if (VAR_3) {
  FUNC_3 (VAR_1);
  FUNC_2 (VAR_1, "%s", FUNC_5(VAR_0));
  return 2;
 }
 FUNC_1 (VAR_1, 1);
 return 1;
}
