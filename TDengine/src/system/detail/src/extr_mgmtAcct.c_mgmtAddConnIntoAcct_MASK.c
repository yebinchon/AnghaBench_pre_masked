
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numOfConns; } ;
struct TYPE_7__ {int mutex; TYPE_1__ acctInfo; TYPE_2__* pConn; } ;
struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; TYPE_3__* pAcct; } ;
typedef TYPE_2__ SConnObj ;
typedef TYPE_3__ SAcctObj ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(SConnObj *VAR_0) {
  SAcctObj *VAR_1 = VAR_0->pAcct;
  if (VAR_1 == ((void*)0)) return 0;

  FUNC_1(&VAR_1->mutex);

  FUNC_0(VAR_0 != VAR_1->pConn);

  VAR_0->next = VAR_1->pConn;
  VAR_0->prev = ((void*)0);

  if (VAR_1->pConn) VAR_1->pConn->prev = VAR_0;

  VAR_1->pConn = VAR_0;
  VAR_1->acctInfo.numOfConns++;

  FUNC_2(&VAR_1->mutex);

  return 0;
}
