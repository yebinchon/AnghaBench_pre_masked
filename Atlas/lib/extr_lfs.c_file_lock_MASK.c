
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,int *,char const*,long const,long,char*) ;
 int * FUNC_1 (int *,int,char*) ;
 int VAR_0 ;
 char* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_1) {
 FILE *VAR_2 = FUNC_1 (VAR_1, 1, "lock");
 const char *VAR_3 = FUNC_2 (VAR_1, 2);
 const long VAR_4 = FUNC_3 (VAR_1, 3, 0);
 long VAR_5 = FUNC_3 (VAR_1, 4, 0);
 if (FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, "lock")) {
  FUNC_4 (VAR_1, 1);
  return 1;
 } else {
  FUNC_6 (VAR_1);
  FUNC_5 (VAR_1, "%s", FUNC_7(VAR_0));
  return 2;
 }
}
