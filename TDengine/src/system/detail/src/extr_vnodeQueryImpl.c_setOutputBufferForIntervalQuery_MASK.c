
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ numOfElems; } ;
typedef TYPE_3__ tFilePage ;
typedef size_t int32_t ;
struct TYPE_21__ {int numOfPages; size_t* pageList; int * resultInfo; } ;
struct TYPE_19__ {scalar_t__ numOfRowsPerPage; TYPE_2__* pCtx; TYPE_1__* pQuery; } ;
struct TYPE_20__ {TYPE_4__ runtimeEnv; } ;
struct TYPE_17__ {int * resultInfo; int aOutputBuf; } ;
struct TYPE_16__ {size_t numOfOutputCols; } ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterQueryInfo ;


 TYPE_3__* FUNC_0 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_5__*,size_t) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,scalar_t__,size_t) ;

void FUNC_4(SMeterQuerySupportObj *VAR_0, SMeterQueryInfo *VAR_1) {
  SQueryRuntimeEnv *VAR_2 = &VAR_0->runtimeEnv;
  tFilePage * VAR_3 = ((void*)0);


  if (VAR_1->numOfPages == 0) {
    VAR_3 = FUNC_0(VAR_1, VAR_0);
  } else {
    int32_t VAR_4 = VAR_1->pageList[VAR_1->numOfPages - 1];
    VAR_3 = FUNC_2(VAR_0, VAR_4);

    if (VAR_3->numOfElems >= VAR_2->numOfRowsPerPage) {
      VAR_3 = FUNC_0(VAR_1, VAR_0);
      FUNC_1(VAR_3->numOfElems == 0);
    }
  }

  for (int32_t VAR_5 = 0; VAR_5 < VAR_2->pQuery->numOfOutputCols; ++VAR_5) {
    VAR_2->pCtx[VAR_5].aOutputBuf = FUNC_3(VAR_2, VAR_3, VAR_3->numOfElems, VAR_5);
    VAR_2->pCtx[VAR_5].resultInfo = &VAR_1->resultInfo[VAR_5];
  }
}
