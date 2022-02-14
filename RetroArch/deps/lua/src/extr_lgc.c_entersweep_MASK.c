
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int allgc; int * sweepgc; int gcstate; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3 (lua_State *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_1);
  VAR_2->gcstate = VAR_0;
  FUNC_1(VAR_2->sweepgc == ((void*)0));
  VAR_2->sweepgc = FUNC_2(VAR_1, &VAR_2->allgc, 1);
}
