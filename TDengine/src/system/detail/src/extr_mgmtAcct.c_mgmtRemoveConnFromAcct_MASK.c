
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int numOfStreams; int numOfQueries; int numOfConns; } ;
struct TYPE_15__ {int mutex; TYPE_2__ acctInfo; TYPE_4__* pConn; } ;
struct TYPE_14__ {TYPE_5__* prev; TYPE_4__* next; TYPE_3__* pSList; TYPE_1__* pQList; TYPE_7__* pAcct; } ;
struct TYPE_13__ {TYPE_4__* next; } ;
struct TYPE_12__ {TYPE_5__* prev; } ;
struct TYPE_11__ {scalar_t__ numOfStreams; } ;
struct TYPE_9__ {scalar_t__ numOfQueries; } ;
typedef TYPE_6__ SConnObj ;
typedef TYPE_7__ SAcctObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(SConnObj *VAR_0) {
  SAcctObj *VAR_1 = VAR_0->pAcct;
  if (VAR_1 == ((void*)0)) return 0;

  FUNC_0(&VAR_1->mutex);

  if (VAR_0->prev) VAR_0->prev->next = VAR_0->next;

  if (VAR_0->next) VAR_0->next->prev = VAR_0->prev;

  if (VAR_0->prev == ((void*)0)) VAR_1->pConn = VAR_0->next;

  VAR_1->acctInfo.numOfConns--;


  if (VAR_0->pQList) {
    VAR_1->acctInfo.numOfQueries -= VAR_0->pQList->numOfQueries;
    VAR_1->acctInfo.numOfStreams -= VAR_0->pSList->numOfStreams;
  }

  FUNC_1(&VAR_1->mutex);

  VAR_0->next = ((void*)0);
  VAR_0->prev = ((void*)0);

  return 0;
}
