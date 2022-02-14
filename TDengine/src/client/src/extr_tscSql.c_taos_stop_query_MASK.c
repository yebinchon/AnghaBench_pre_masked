
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ command; } ;
struct TYPE_5__ {int code; } ;
struct TYPE_6__ {int * thandle; TYPE_4__ cmd; TYPE_1__ res; struct TYPE_6__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_2__ SSqlObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int *) ;

void FUNC_4(TAOS_RES *VAR_2) {
  if (VAR_2 == ((void*)0)) return;

  SSqlObj *VAR_3 = (SSqlObj *)VAR_2;
  if (VAR_3->signature != VAR_3) return;
  FUNC_3("%p start to cancel query", VAR_2);

  VAR_3->res.code = VAR_0;

  if (FUNC_1(&VAR_3->cmd)) {
    FUNC_2(VAR_3);
    return;
  }

  if (VAR_3->cmd.command >= VAR_1) {
    return;
  }

  if (VAR_3->thandle == ((void*)0)) {
    FUNC_3("%p no connection, abort cancel", VAR_2);
    return;
  }

  FUNC_0(VAR_3->thandle);
  FUNC_3("%p query is cancelled", VAR_2);
}
