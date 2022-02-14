
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int namewhat; int name; int nups; int currentline; int what; int lastlinedefined; int linedefined; int short_src; int source; } ;
typedef TYPE_1__ lua_Debug ;


 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int,char*) ;
 char* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,char const*,TYPE_1__*) ;
 int FUNC_5 (int *,int,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 char* FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,char*,int ) ;
 int FUNC_15 (int *,char*,int ) ;
 scalar_t__ FUNC_16 (char const*,float) ;
 int FUNC_17 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_18 (lua_State *VAR_0) {
  lua_Debug VAR_1;
  int VAR_2;
  lua_State *VAR_3 = FUNC_0(VAR_0, &VAR_2);
  const char *VAR_4 = FUNC_2(VAR_0, VAR_2+2, "flnSu");
  if (FUNC_7(VAR_0, VAR_2+1)) {
    if (!FUNC_5(VAR_3, (int)FUNC_11(VAR_0, VAR_2+1), &VAR_1)) {
      FUNC_9(VAR_0);
      return 1;
    }
  }
  else if (FUNC_6(VAR_0, VAR_2+1)) {
    FUNC_8(VAR_0, ">%s", VAR_4);
    VAR_4 = FUNC_12(VAR_0, -1);
    FUNC_10(VAR_0, VAR_2+1);
    FUNC_13(VAR_0, VAR_3, 1);
  }
  else
    return FUNC_1(VAR_0, VAR_2+1, "function or level expected");
  if (!FUNC_4(VAR_3, VAR_4, &VAR_1))
    return FUNC_1(VAR_0, VAR_2+2, "invalid option");
  FUNC_3(VAR_0, 0, 2);
  if (FUNC_16(VAR_4, 'S')) {
    FUNC_15(VAR_0, "source", VAR_1.source);
    FUNC_15(VAR_0, "short_src", VAR_1.short_src);
    FUNC_14(VAR_0, "linedefined", VAR_1.linedefined);
    FUNC_14(VAR_0, "lastlinedefined", VAR_1.lastlinedefined);
    FUNC_15(VAR_0, "what", VAR_1.what);
  }
  if (FUNC_16(VAR_4, 'l'))
    FUNC_14(VAR_0, "currentline", VAR_1.currentline);
  if (FUNC_16(VAR_4, 'u'))
    FUNC_14(VAR_0, "nups", VAR_1.nups);
  if (FUNC_16(VAR_4, 'n')) {
    FUNC_15(VAR_0, "name", VAR_1.name);
    FUNC_15(VAR_0, "namewhat", VAR_1.namewhat);
  }
  if (FUNC_16(VAR_4, 'L'))
    FUNC_17(VAR_0, VAR_3, "activelines");
  if (FUNC_16(VAR_4, 'f'))
    FUNC_17(VAR_0, VAR_3, "func");
  return 1;
}
