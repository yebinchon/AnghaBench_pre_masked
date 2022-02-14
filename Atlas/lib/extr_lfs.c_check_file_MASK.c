
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static FILE *FUNC_2 (lua_State *VAR_0, int VAR_1, const char *VAR_2) {
 FILE **VAR_3 = (FILE **)FUNC_0 (VAR_0, VAR_1, "FILE*");
 if (VAR_3 == ((void*)0)) {
  FUNC_1 (VAR_0, "%s: not a file", VAR_2);
  return 0;
 } else if (*VAR_3 == ((void*)0)) {
  FUNC_1 (VAR_0, "%s: closed file", VAR_2);
  return 0;
 } else
  return *VAR_3;
}
