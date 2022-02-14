
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int numOfQueries; int numOfConns; } ;
struct TYPE_19__ {int mutex; TYPE_6__* pConn; TYPE_1__ acctInfo; } ;
struct TYPE_18__ {int user; int port; int ip; } ;
struct TYPE_17__ {struct TYPE_17__* next; TYPE_3__* pQList; TYPE_2__* pUser; int port; int ip; TYPE_8__* pAcct; } ;
struct TYPE_16__ {scalar_t__ numOfQueries; TYPE_7__** cdesc; TYPE_7__* connInfo; int * qdesc; scalar_t__ index; } ;
struct TYPE_15__ {TYPE_5__* pNode; } ;
struct TYPE_14__ {int numOfQueries; int qdesc; } ;
struct TYPE_13__ {int user; } ;
typedef TYPE_4__ SShowObj ;
typedef TYPE_5__ SQueryShow ;
typedef int SQDesc ;
typedef TYPE_6__ SConnObj ;
typedef TYPE_7__ SCDesc ;
typedef TYPE_8__ SAcctObj ;


 TYPE_5__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(SShowObj *VAR_0, SConnObj *VAR_1) {
  SAcctObj * VAR_2 = VAR_1->pAcct;
  SQueryShow *VAR_3;

  FUNC_2(&VAR_2->mutex);

  VAR_3 = FUNC_0(sizeof(SQDesc) * VAR_2->acctInfo.numOfQueries + sizeof(SQueryShow));
  VAR_3->numOfQueries = 0;
  VAR_3->index = 0;
  VAR_3->connInfo = ((void*)0);
  VAR_3->cdesc = ((void*)0);

  if (VAR_2->acctInfo.numOfQueries > 0) {
    VAR_3->connInfo = (SCDesc *)FUNC_0(VAR_2->acctInfo.numOfConns * sizeof(SCDesc));
    VAR_3->cdesc = (SCDesc **)FUNC_0(VAR_2->acctInfo.numOfQueries * sizeof(SCDesc *));

    VAR_1 = VAR_2->pConn;
    SQDesc * VAR_4 = VAR_3->qdesc;
    SCDesc * VAR_5 = VAR_3->connInfo;
    SCDesc **VAR_6 = VAR_3->cdesc;

    while (VAR_1) {
      if (VAR_1->pQList && VAR_1->pQList->numOfQueries > 0) {
        VAR_5->ip = VAR_1->ip;
        VAR_5->port = VAR_1->port;
        FUNC_4(VAR_5->user, VAR_1->pUser->user);

        FUNC_1(VAR_4, VAR_1->pQList->qdesc, sizeof(SQDesc) * VAR_1->pQList->numOfQueries);
        VAR_4 += VAR_1->pQList->numOfQueries;
        VAR_3->numOfQueries += VAR_1->pQList->numOfQueries;
        for (int VAR_7 = 0; VAR_7 < VAR_1->pQList->numOfQueries; ++VAR_7, ++VAR_6) *VAR_6 = VAR_5;

        VAR_5++;
      }
      VAR_1 = VAR_1->next;
    }
  }

  FUNC_3(&VAR_2->mutex);



  VAR_0->pNode = VAR_3;

  return 0;
}
