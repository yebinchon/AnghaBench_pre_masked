
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;


typedef scalar_t__ int64_t ;
struct TYPE_25__ {scalar_t__ subgroupIdx; int numOfMeters; scalar_t__ numOfGroupResultPages; int pResult; TYPE_1__* pSidSet; int rawEKey; int rawSKey; int * pMeterDataInfo; } ;
struct TYPE_22__ {int order; } ;
struct TYPE_23__ {scalar_t__ nAggTimeInterval; scalar_t__ pointsRead; TYPE_13__** sdata; TYPE_2__ order; } ;
struct TYPE_24__ {int pointsReturned; int pointsRead; TYPE_3__ query; TYPE_5__* pMeterQuerySupporter; } ;
struct TYPE_21__ {int numOfSubSet; } ;
struct TYPE_20__ {int len; } ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SQInfo ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef int SMeterDataInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_4__*,int ) ;
 int FUNC_5 (char*,TYPE_4__*,...) ;
 int FUNC_6 (TYPE_13__**,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_15(SQInfo *VAR_1) {
  SMeterQuerySupportObj *VAR_2 = VAR_1->pMeterQuerySupporter;
  SQuery * VAR_3 = &VAR_1->query;

  if (VAR_2->subgroupIdx > 0) {




    if (VAR_3->nAggTimeInterval > 0) {
      FUNC_3(VAR_2, VAR_3);




    } else {
      FUNC_2(VAR_1, VAR_2->pResult);
    }

    VAR_1->pointsRead += VAR_3->pointsRead;

    if (VAR_3->pointsRead == 0) {
      FUNC_14(VAR_2);
    }

    FUNC_5("QInfo:%p points returned:%d, totalRead:%d totalReturn:%d", VAR_1, VAR_3->pointsRead, VAR_1->pointsRead,
           VAR_1->pointsReturned);
    return;
  }

  VAR_2->pMeterDataInfo = (SMeterDataInfo *)FUNC_1(1, sizeof(SMeterDataInfo) * VAR_2->numOfMeters);
  if (VAR_2->pMeterDataInfo == ((void*)0)) {
    FUNC_4("QInfo:%p failed to allocate memory, %s", VAR_1, FUNC_12(VAR_0));
    return;
  }

  FUNC_5("QInfo:%p query start, qrange:%lld-%lld, order:%d, group:%d", VAR_1, VAR_2->rawSKey, VAR_2->rawEKey,
         VAR_3->order.order, VAR_2->pSidSet->numOfSubSet);

  FUNC_5("QInfo:%p main query scan start", VAR_1);
  int64_t VAR_4 = FUNC_13();
  FUNC_9(VAR_1);
  int64_t VAR_5 = FUNC_13();
  FUNC_5("QInfo:%p main scan completed, elapsed time: %lldms, supplementary scan start, order:%d", VAR_1, VAR_5 - VAR_4,
         VAR_3->order.order ^ 1);

  FUNC_7(VAR_2);
  FUNC_8(VAR_1);

  if (FUNC_10(VAR_3)) {
    FUNC_5("QInfo:%p query killed, abort", VAR_1);
    return;
  }

  if (VAR_3->nAggTimeInterval > 0) {
    FUNC_0(VAR_2->subgroupIdx == 0 && VAR_2->numOfGroupResultPages == 0);

    FUNC_11(VAR_2);
    FUNC_3(VAR_2, VAR_3);




  } else {
    FUNC_2(VAR_1, VAR_2->pResult);
  }


  VAR_1->pointsRead += VAR_3->pointsRead;
  FUNC_5("QInfo:%p points returned:%d, totalRead:%d totalReturn:%d", VAR_1, VAR_3->pointsRead, VAR_1->pointsRead,
         VAR_1->pointsReturned);
}
