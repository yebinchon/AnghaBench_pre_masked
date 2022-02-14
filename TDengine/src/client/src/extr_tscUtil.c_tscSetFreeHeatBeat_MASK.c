
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_7__ {TYPE_1__ cmd; struct TYPE_7__* signature; } ;
struct TYPE_6__ {TYPE_3__* pHb; struct TYPE_6__* signature; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlObj ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(STscObj* VAR_1) {
  if (VAR_1 == ((void*)0) || VAR_1->signature != VAR_1 || VAR_1->pHb == ((void*)0)) {
    return;
  }

  SSqlObj* VAR_2 = VAR_1->pHb;
  FUNC_0(VAR_2 == VAR_2->signature);


  VAR_2->cmd.type = VAR_0;
}
