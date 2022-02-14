
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nCcalls; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_5__ {int fs; TYPE_1__* L; } ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1 (LexState *VAR_1) {
  lua_State *VAR_2 = VAR_1->L;
  ++VAR_2->nCcalls;
  FUNC_0(VAR_1->fs, VAR_2->nCcalls, VAR_0, "C levels");
}
