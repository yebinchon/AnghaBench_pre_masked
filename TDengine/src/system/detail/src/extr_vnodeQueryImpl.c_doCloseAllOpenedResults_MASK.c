
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_18__ {scalar_t__ lastResRows; } ;
struct TYPE_17__ {size_t meterOrderIdx; TYPE_8__* pMeterQInfo; int pMeterObj; } ;
struct TYPE_14__ {int pMeterObj; TYPE_4__* pQuery; } ;
struct TYPE_16__ {size_t numOfMeters; TYPE_2__* pSidSet; int pMeterObj; TYPE_6__* pMeterDataInfo; TYPE_3__ runtimeEnv; } ;
struct TYPE_15__ {scalar_t__ nAggTimeInterval; } ;
struct TYPE_13__ {TYPE_1__** pSids; } ;
struct TYPE_12__ {int sid; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterDataInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_8__*,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,size_t,TYPE_8__*) ;

void FUNC_4(SMeterQuerySupportObj *VAR_0) {
  SQueryRuntimeEnv *VAR_1 = &VAR_0->runtimeEnv;
  SQuery * VAR_2 = VAR_1->pQuery;


  if (VAR_2->nAggTimeInterval > 0) {
    SMeterDataInfo *VAR_3 = VAR_0->pMeterDataInfo;
    for (int32_t VAR_4 = 0; VAR_4 < VAR_0->numOfMeters; ++VAR_4) {
      if (VAR_3[VAR_4].pMeterQInfo != ((void*)0) && VAR_3[VAR_4].pMeterQInfo->lastResRows > 0) {
        int32_t VAR_5 = VAR_3[VAR_4].meterOrderIdx;

        VAR_1->pMeterObj = FUNC_1(VAR_0->pMeterObj, VAR_0->pSidSet->pSids[VAR_5]->sid);
        FUNC_0(VAR_1->pMeterObj == VAR_3[VAR_4].pMeterObj);

        FUNC_3(VAR_0, VAR_4, VAR_3[VAR_4].pMeterQInfo);
        FUNC_2(VAR_0, VAR_3[VAR_4].pMeterQInfo, VAR_3[VAR_4].pMeterQInfo->lastResRows);
      }
    }
  }
}
