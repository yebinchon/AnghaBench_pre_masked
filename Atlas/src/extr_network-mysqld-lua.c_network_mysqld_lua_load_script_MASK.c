
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int L; } ;
typedef TYPE_1__ lua_scope ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char const*,int ) ;
 int FUNC_2 (char*,int ,char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(lua_scope *VAR_1, const char *VAR_2) {
 int VAR_3 = FUNC_3(VAR_1->L);

 if (!VAR_2) return -1;






 FUNC_7(VAR_1, VAR_2);

 if (FUNC_5(VAR_1->L, -1)) {
  FUNC_1("%s: lua_load_file(%s) failed: %s",
    VAR_0,
    VAR_2, FUNC_8(VAR_1->L, -1));

  FUNC_6(VAR_1->L, 1);

  return -1;
 } else if (!FUNC_4(VAR_1->L, -1)) {
  FUNC_2("%s: luaL_loadfile(%s): returned a %s",
    VAR_0,
    VAR_2, FUNC_10(VAR_1->L, FUNC_9(VAR_1->L, -1)));
 }

 FUNC_0(FUNC_3(VAR_1->L) - VAR_3 == 1);

 return 0;
}
