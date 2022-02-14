
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int numOfQueries; } ;
struct TYPE_9__ {int numOfQueries; int numOfStreams; } ;
struct TYPE_12__ {int mutex; TYPE_1__ acctInfo; } ;
struct TYPE_11__ {TYPE_2__* pSList; TYPE_5__* pQList; TYPE_4__* pAcct; } ;
struct TYPE_10__ {scalar_t__ numOfStreams; } ;
typedef TYPE_2__ SSList ;
typedef int SQList ;
typedef int SQDesc ;
typedef TYPE_3__ SConnObj ;
typedef TYPE_4__ SAcctObj ;


 int FUNC_0 (TYPE_5__*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (TYPE_5__*,int) ;

int FUNC_4(char *VAR_0, int VAR_1, SConnObj *VAR_2) {
  SAcctObj *VAR_3 = VAR_2->pAcct;

  if (VAR_1 <= 0 || VAR_3 == ((void*)0)) {
    return 0;
  }

  FUNC_1(&VAR_3->mutex);

  if (VAR_2->pQList) {
    VAR_3->acctInfo.numOfQueries -= VAR_2->pQList->numOfQueries;
    VAR_3->acctInfo.numOfStreams -= VAR_2->pSList->numOfStreams;
  }

  VAR_2->pQList = FUNC_3(VAR_2->pQList, VAR_1);
  FUNC_0(VAR_2->pQList, VAR_0, VAR_1);

  VAR_2->pSList = (SSList *)(((char *)VAR_2->pQList) + VAR_2->pQList->numOfQueries * sizeof(SQDesc) + sizeof(SQList));

  VAR_3->acctInfo.numOfQueries += VAR_2->pQList->numOfQueries;
  VAR_3->acctInfo.numOfStreams += VAR_2->pSList->numOfStreams;

  FUNC_2(&VAR_3->mutex);

  return 0;
}
