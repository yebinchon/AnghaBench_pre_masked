
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ nuse; } ;
struct TYPE_6__ {TYPE_1__ strt; int * fixedgc; int * allgc; int * finobj; int gckind; int currentwhite; int * tobefnz; } ;
typedef TYPE_2__ global_State ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int **) ;

void FUNC_5 (lua_State *VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_2);
  FUNC_3(VAR_3, 1);
  FUNC_2(VAR_3->finobj == ((void*)0));
  FUNC_1(VAR_2);
  FUNC_2(VAR_3->tobefnz == ((void*)0));
  VAR_3->currentwhite = VAR_1;
  VAR_3->gckind = VAR_0;
  FUNC_4(VAR_2, &VAR_3->finobj);
  FUNC_4(VAR_2, &VAR_3->allgc);
  FUNC_4(VAR_2, &VAR_3->fixedgc);
  FUNC_2(VAR_3->strt.nuse == 0);
}
