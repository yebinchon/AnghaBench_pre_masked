
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_18__ ;


struct TYPE_30__ {scalar_t__ numOfElems; } ;
typedef TYPE_2__ tFilePage ;
typedef int tColModel ;
typedef size_t int32_t ;
struct TYPE_36__ {int meterId; int sid; int vnode; } ;
struct TYPE_35__ {scalar_t__ reverseIndex; scalar_t__ numOfRes; int lastResRows; int reverseFillRes; size_t* pageList; int numOfPages; int * resultInfo; } ;
struct TYPE_32__ {scalar_t__ numOfRowsPerPage; TYPE_8__* pMeterObj; TYPE_1__* pCtx; TYPE_5__* pQuery; } ;
struct TYPE_34__ {TYPE_4__ runtimeEnv; } ;
struct TYPE_33__ {size_t numOfOutputCols; } ;
struct TYPE_31__ {int bytes; void* type; } ;
struct TYPE_29__ {scalar_t__ nStartQueryTimestamp; scalar_t__ aOutputBuf; } ;
struct TYPE_28__ {int numOfElems; int data; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_3__ SSchema ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SMeterQuerySupportObj ;
typedef TYPE_7__ SMeterQueryInfo ;
typedef TYPE_8__ SMeterObj ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_6__*,size_t) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_2__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_18__* VAR_2 ;
 int FUNC_8 (char*,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_7__*) ;
 int * FUNC_12 (TYPE_3__*,size_t,scalar_t__) ;
 int FUNC_13 (int *,int ,int ,scalar_t__) ;
 int FUNC_14 (TYPE_6__*,TYPE_7__*) ;

void FUNC_15(SMeterQuerySupportObj *VAR_3, SMeterQueryInfo *VAR_4, int32_t VAR_5) {
  SQueryRuntimeEnv *VAR_6 = &VAR_3->runtimeEnv;
  SQuery * VAR_7 = VAR_6->pQuery;


  if (VAR_5 <= 0) {
    if (FUNC_1(VAR_6)) {
      return;
    } else {
      TSKEY VAR_8 = *(TSKEY *)VAR_6->pCtx[0].aOutputBuf;
      if (VAR_8 == VAR_6->pCtx[0].nStartQueryTimestamp && VAR_4->reverseIndex > 0) {
        FUNC_4(VAR_4->numOfRes >= 0 && VAR_4->reverseIndex > 0 &&
               VAR_4->reverseIndex <= VAR_4->numOfRes);


        VAR_4->reverseIndex -= 1;
        FUNC_10(VAR_3, VAR_4);
      }

      return;
    }
  }

  FUNC_4(VAR_4->lastResRows == 1);
  VAR_5 = 1;
  VAR_4->lastResRows = 0;

  if (FUNC_2(VAR_6) && VAR_4->reverseFillRes == 1) {
    FUNC_4(VAR_4->numOfRes > 0 && VAR_4->reverseIndex > 0 &&
           VAR_4->reverseIndex <= VAR_4->numOfRes);

    VAR_4->reverseIndex -= 1;
    FUNC_10(VAR_3, VAR_4);
  } else {
    int32_t VAR_9 = VAR_4->pageList[VAR_4->numOfPages - 1];
    tFilePage *VAR_10 = FUNC_5(VAR_3, VAR_9);


    TSKEY VAR_11 = *(TSKEY *)FUNC_6(VAR_6, VAR_10, VAR_10->numOfElems, 0);

    SMeterObj *VAR_12 = VAR_6->pMeterObj;
    FUNC_8("QInfo:%p vid:%d sid:%d id:%s, save results, ts:%lld, total:%d", FUNC_0(VAR_7), VAR_12->vnode,
           VAR_12->sid, VAR_12->meterId, VAR_11, VAR_4->numOfRes + 1);

    VAR_10->numOfElems += VAR_5;
    VAR_4->numOfRes += VAR_5;
    FUNC_4(VAR_10->numOfElems <= VAR_6->numOfRowsPerPage);

    FUNC_11(VAR_3, VAR_4);

    for (int32_t VAR_13 = 0; VAR_13 < VAR_7->numOfOutputCols; ++VAR_13) {
      FUNC_9(&VAR_4->resultInfo[VAR_13]);
    }

    FUNC_14(VAR_3, VAR_4);
    FUNC_7(VAR_6);
  }
}
