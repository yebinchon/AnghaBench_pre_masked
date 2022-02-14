
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,int *,char*,long const,long,char*) ;
 int * FUNC_1 (int *,int,char*) ;
 int VAR_0 ;
 void* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1) {
 FILE *VAR_2 = FUNC_1 (VAR_1, 1, "unlock");
 const long VAR_3 = FUNC_2 (VAR_1, 2, 0);
 long VAR_4 = FUNC_2 (VAR_1, 3, 0);
 if (FUNC_0 (VAR_1, VAR_2, "u", VAR_3, VAR_4, "unlock")) {
  FUNC_3 (VAR_1, 1);
  return 1;
 } else {
  FUNC_5 (VAR_1);
  FUNC_4 (VAR_1, "%s", FUNC_6(VAR_0));
  return 2;
 }
}
