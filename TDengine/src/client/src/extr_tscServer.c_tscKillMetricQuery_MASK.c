
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ const int64_t ;
struct TYPE_8__ {scalar_t__ command; } ;
struct TYPE_6__ {int code; } ;
struct TYPE_7__ {int numOfSubs; TYPE_5__ cmd; int * thandle; struct TYPE_7__** pSubs; TYPE_1__ res; } ;
typedef TYPE_2__ SSqlObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (char*,TYPE_2__*) ;

void FUNC_5(SSqlObj *VAR_3) {
  if (!FUNC_3(&VAR_3->cmd)) {
    return;
  }

  for (int VAR_4 = 0; VAR_4 < VAR_3->numOfSubs; ++VAR_4) {
    SSqlObj *VAR_5 = VAR_3->pSubs[VAR_4];

    if (VAR_5 == ((void*)0) || VAR_5->thandle == ((void*)0)) {
      continue;
    }





    VAR_3->pSubs[VAR_4]->res.code = VAR_0;
    FUNC_2(VAR_3->pSubs[VAR_4]->thandle);
  }

  VAR_3->numOfSubs = 0;







  const int64_t VAR_6 = 10000;
  int64_t VAR_7 = FUNC_0();

  while (VAR_3->cmd.command != VAR_2 && VAR_3->cmd.command != VAR_1) {
    FUNC_1(100);
    if (FUNC_0() - VAR_7 > VAR_6) {
      break;
    }
  }

  FUNC_4("%p metric query is cancelled", VAR_3);
}
