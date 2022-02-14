
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {size_t numOfSubSet; } ;
struct TYPE_11__ {size_t numOfMeters; struct TYPE_11__* pResult; struct TYPE_11__* pMeterDataInfo; int pBlock; int pMeterQInfo; TYPE_6__* pSidSet; int extBufFile; int meterOutputFd; int bufSize; int * meterOutputMMapBuf; int * pMeterObj; struct TYPE_11__* pMeterSidExtInfo; int runtimeEnv; } ;
struct TYPE_9__ {int numOfOutputCols; int pGroupbyExpr; } ;
struct TYPE_10__ {TYPE_3__* pMeterQuerySupporter; TYPE_1__ query; } ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SQInfo ;
typedef TYPE_3__ SMeterQuerySupportObj ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_6__**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ) ;

void FUNC_14(SQInfo *VAR_0) {
  if (VAR_0 == ((void*)0) || VAR_0->pMeterQuerySupporter == ((void*)0)) {
    return;
  }

  SQuery * VAR_1 = &VAR_0->query;
  SMeterQuerySupportObj *VAR_2 = VAR_0->pMeterQuerySupporter;

  FUNC_11(&VAR_2->runtimeEnv);
  FUNC_12(VAR_2->pMeterSidExtInfo);

  if (VAR_2->pMeterObj != ((void*)0)) {
    FUNC_9(VAR_2->pMeterObj);
    VAR_2->pMeterObj = ((void*)0);
  }

  if (VAR_2->pSidSet != ((void*)0) || FUNC_6(VAR_0->query.pGroupbyExpr)) {
    int32_t VAR_3 = 0;
    if (FUNC_6(VAR_0->query.pGroupbyExpr)) {
      VAR_3 = 10000;
    } else if (VAR_2->pSidSet != ((void*)0)) {
      VAR_3 = VAR_2->pSidSet->numOfSubSet;
    }

    for (int32_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
      FUNC_3(&VAR_2->pResult[VAR_4], VAR_0->query.numOfOutputCols);
    }
  }

  if (FUNC_0(VAR_2->meterOutputFd)) {
    FUNC_1(VAR_2->meterOutputMMapBuf != ((void*)0));
    FUNC_2("QInfo:%p disk-based output buffer during query:%lld bytes", VAR_0, VAR_2->bufSize);
    FUNC_7(VAR_2->meterOutputMMapBuf, VAR_2->bufSize);
    FUNC_10(VAR_2->meterOutputFd);

    FUNC_13(VAR_2->extBufFile);
  }

  FUNC_8(&VAR_2->pSidSet);

  if (VAR_2->pMeterDataInfo != ((void*)0)) {
    for (int32_t VAR_5 = 0; VAR_5 < VAR_2->numOfMeters; ++VAR_5) {
      FUNC_4(VAR_2->pMeterDataInfo[VAR_5].pMeterQInfo, VAR_1->numOfOutputCols);
      FUNC_5(VAR_2->pMeterDataInfo[VAR_5].pBlock);
    }
  }

  FUNC_12(VAR_2->pMeterDataInfo);

  FUNC_12(VAR_2->pResult);
  FUNC_12(VAR_0->pMeterQuerySupporter);
}
