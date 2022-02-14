
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int numOfConns; } ;
struct TYPE_17__ {int mutex; TYPE_5__* pConn; TYPE_1__ acctInfo; } ;
struct TYPE_16__ {int stime; int port; int ip; int user; } ;
struct TYPE_15__ {struct TYPE_15__* next; int stime; int port; int ip; TYPE_2__* pUser; TYPE_7__* pAcct; } ;
struct TYPE_14__ {scalar_t__ numOfConns; TYPE_6__* connInfo; scalar_t__ index; } ;
struct TYPE_13__ {TYPE_4__* pNode; } ;
struct TYPE_12__ {int user; } ;
typedef TYPE_3__ SShowObj ;
typedef TYPE_4__ SConnShow ;
typedef TYPE_5__ SConnObj ;
typedef TYPE_6__ SConnInfo ;
typedef TYPE_7__ SAcctObj ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(SShowObj *VAR_0, SConnObj *VAR_1) {
  SAcctObj * VAR_2 = VAR_1->pAcct;
  SConnShow *VAR_3;

  FUNC_1(&VAR_2->mutex);

  VAR_3 = FUNC_0(sizeof(SConnInfo) * VAR_2->acctInfo.numOfConns + sizeof(SConnShow));
  VAR_3->index = 0;
  VAR_3->numOfConns = 0;

  if (VAR_2->acctInfo.numOfConns > 0) {
    VAR_1 = VAR_2->pConn;
    SConnInfo *VAR_4 = VAR_3->connInfo;

    while (VAR_1) {
      FUNC_3(VAR_4->user, VAR_1->pUser->user);
      VAR_4->ip = VAR_1->ip;
      VAR_4->port = VAR_1->port;
      VAR_4->stime = VAR_1->stime;

      VAR_3->numOfConns++;
      VAR_4++;
      VAR_1 = VAR_1->next;
    }
  }

  FUNC_2(&VAR_2->mutex);



  VAR_0->pNode = VAR_3;

  return 0;
}
