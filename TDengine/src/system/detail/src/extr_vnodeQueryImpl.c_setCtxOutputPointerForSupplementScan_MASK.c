
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_19__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_28__ {size_t numOfElems; } ;
typedef TYPE_3__ tFilePage ;
typedef size_t int32_t ;
struct TYPE_34__ {size_t reverseIndex; size_t numOfPages; scalar_t__ lastResRows; int * pageList; } ;
struct TYPE_30__ {TYPE_10__* pMeterObj; TYPE_7__* pCtx; TYPE_6__* pQuery; } ;
struct TYPE_33__ {TYPE_5__ runtimeEnv; } ;
struct TYPE_32__ {scalar_t__ aOutputBuf; scalar_t__ currentStage; } ;
struct TYPE_31__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_29__ {scalar_t__ complete; } ;
struct TYPE_26__ {size_t functionId; } ;
struct TYPE_27__ {TYPE_1__ pBase; } ;
struct TYPE_25__ {int (* init ) (TYPE_7__*) ;} ;
struct TYPE_24__ {int meterId; int sid; int vnode; } ;
typedef int TSKEY ;
typedef TYPE_4__ SResultInfo ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SQLFunctionCtx ;
typedef TYPE_8__ SMeterQuerySupportObj ;
typedef TYPE_9__ SMeterQueryInfo ;
typedef TYPE_10__ SMeterObj ;


 int FUNC_0 (TYPE_6__*) ;
 TYPE_4__* FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_19__* VAR_2 ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_3__*,size_t,size_t) ;
 int FUNC_6 (char*,int ,int ,int ,int ,int ,size_t) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_7__*) ;

void FUNC_9(SMeterQuerySupportObj *VAR_3, SMeterQueryInfo *VAR_4) {
  SQueryRuntimeEnv *VAR_5 = &VAR_3->runtimeEnv;
  SQuery * VAR_6 = VAR_5->pQuery;

  int32_t VAR_7 = VAR_4->reverseIndex;
  tFilePage *VAR_8 = ((void*)0);
  int32_t VAR_9 = 0;


  for (; VAR_9 < VAR_4->numOfPages; ++VAR_9) {
    VAR_8 = FUNC_4(VAR_3, VAR_4->pageList[VAR_9]);
    if (VAR_7 <= VAR_8->numOfElems) {
      break;
    }
    VAR_7 -= VAR_8->numOfElems;
  }

  FUNC_3(VAR_7 >= 0);





  if (VAR_7 == 0) {
    return;
  }

  for (int32_t VAR_10 = 0; VAR_10 < VAR_6->numOfOutputCols; ++VAR_10) {
    SQLFunctionCtx *VAR_11 = &VAR_5->pCtx[VAR_10];

    VAR_11->aOutputBuf = FUNC_5(VAR_5, VAR_8, VAR_7 - 1, VAR_10);
    SResultInfo *VAR_12 = FUNC_1(VAR_11);
    if (VAR_12->complete) {
      continue;
    }

    int32_t VAR_13 = VAR_6->pSelectExpr[VAR_10].pBase.functionId;


    if ((FUNC_2(VAR_6) && VAR_13 == VAR_0) ||
        (!FUNC_2(VAR_6) && VAR_13 == VAR_1)) {
      if (VAR_4->lastResRows == 0) {
        VAR_11->currentStage = 0;

        FUNC_7(VAR_12);
        VAR_2[VAR_13].init(VAR_11);
      }
    }
  }


  TSKEY VAR_14 = *(TSKEY *)VAR_5->pCtx[0].aOutputBuf;
  SMeterObj *VAR_15 = VAR_5->pMeterObj;
  FUNC_6("QInfo:%p vid:%d sid:%d id:%s, set output result pointer, ts:%lld, index:%d", FUNC_0(VAR_6),
         VAR_15->vnode, VAR_15->sid, VAR_15->meterId, VAR_14, VAR_4->reverseIndex);
}
