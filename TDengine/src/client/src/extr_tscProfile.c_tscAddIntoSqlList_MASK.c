
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int listed; int stime; scalar_t__ queryId; struct TYPE_6__* prev; struct TYPE_6__* next; TYPE_1__* pTscObj; } ;
struct TYPE_5__ {int mutex; TYPE_2__* sqlList; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlObj ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,TYPE_2__*) ;

void FUNC_5(SSqlObj *VAR_0) {
  static uint32_t VAR_1 = 1;

  STscObj *VAR_2 = VAR_0->pTscObj;
  if (VAR_0->listed) return;

  FUNC_1(&VAR_2->mutex);

  FUNC_0(VAR_0 != VAR_2->sqlList);
  VAR_0->next = VAR_2->sqlList;
  if (VAR_2->sqlList) VAR_2->sqlList->prev = VAR_0;
  VAR_2->sqlList = VAR_0;
  VAR_0->queryId = VAR_1++;

  FUNC_2(&VAR_2->mutex);

  VAR_0->stime = FUNC_3();
  VAR_0->listed = 1;

  FUNC_4("%p added into sqlList", VAR_0);
}
