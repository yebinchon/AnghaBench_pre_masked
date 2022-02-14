
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_15__ {scalar_t__ numOfQueries; int meterId; int sid; int vnode; } ;
struct TYPE_14__ {int numOfMeters; TYPE_3__* pSidSet; int pMeterObj; } ;
struct TYPE_13__ {TYPE_1__* pObj; TYPE_5__* pMeterQuerySupporter; } ;
struct TYPE_12__ {TYPE_2__** pSids; } ;
struct TYPE_11__ {int sid; } ;
struct TYPE_10__ {scalar_t__ numOfQueries; int meterId; int sid; int vnode; } ;
typedef TYPE_4__ SQInfo ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterObj ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (char*,TYPE_4__*,size_t,size_t,...) ;
 TYPE_6__* FUNC_2 (int ,int ) ;

void FUNC_3(SQInfo *VAR_0) {
  SMeterQuerySupportObj *VAR_1 = VAR_0->pMeterQuerySupporter;

  if (VAR_1 == ((void*)0) || VAR_1->numOfMeters == 1) {
    FUNC_0(&VAR_0->pObj->numOfQueries, 1);
    FUNC_1("QInfo:%p vid:%d sid:%d meterId:%s, query is over, numOfQueries:%d", VAR_0, VAR_0->pObj->vnode,
           VAR_0->pObj->sid, VAR_0->pObj->meterId, VAR_0->pObj->numOfQueries);
  } else {
    int32_t VAR_2 = 0;
    for (int32_t VAR_3 = 0; VAR_3 < VAR_1->numOfMeters; ++VAR_3) {
      SMeterObj *VAR_4 = FUNC_2(VAR_1->pMeterObj, VAR_1->pSidSet->pSids[VAR_3]->sid);
      FUNC_0(&(VAR_4->numOfQueries), 1);

      if (VAR_4->numOfQueries > 0) {
        FUNC_1("QInfo:%p vid:%d sid:%d meterId:%s, query is over, numOfQueries:%d", VAR_0, VAR_4->vnode, VAR_4->sid,
               VAR_4->meterId, VAR_4->numOfQueries);
        VAR_2++;
      }
    }





    VAR_2 = VAR_1->numOfMeters - VAR_2;
    FUNC_1("QInfo:%p metric query is over, dec query ref for %d meters, numOfQueries on %d meters are 0", VAR_0,
           VAR_1->numOfMeters, VAR_2);
  }
}
