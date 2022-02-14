
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_18__ {size_t outputBytes; scalar_t__ aOutputBuf; scalar_t__ ptsOutputBuf; int * resultInfo; } ;
struct TYPE_17__ {size_t numOfOutputCols; TYPE_4__* pSelectExpr; TYPE_3__** sdata; } ;
struct TYPE_16__ {TYPE_7__* pCtx; int * resultInfo; TYPE_1__* pMeterObj; TYPE_6__* pQuery; } ;
struct TYPE_13__ {size_t functionId; } ;
struct TYPE_15__ {scalar_t__ resBytes; TYPE_2__ pBase; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_12__ {size_t pointsPerFileBlock; } ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SQLFunctionCtx ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (scalar_t__,int ,size_t) ;
 int FUNC_4 (int *) ;

void FUNC_5(SQueryRuntimeEnv *VAR_3) {
  SQuery *VAR_4 = VAR_3->pQuery;
  int32_t VAR_5 = VAR_3->pMeterObj->pointsPerFileBlock;

  for (int32_t VAR_6 = 0; VAR_6 < VAR_4->numOfOutputCols; ++VAR_6) {
    SQLFunctionCtx *VAR_7 = &VAR_3->pCtx[VAR_6];


    if (FUNC_0(VAR_4) || FUNC_2(VAR_4)) {
      VAR_7->aOutputBuf = VAR_4->sdata[VAR_6]->data;
    } else {
      VAR_7->aOutputBuf = VAR_4->sdata[VAR_6]->data + (VAR_5 - 1) * VAR_7->outputBytes;
    }





    FUNC_4(&VAR_3->resultInfo[VAR_6]);
    VAR_7->resultInfo = &VAR_3->resultInfo[VAR_6];


    int32_t VAR_8 = VAR_4->pSelectExpr[VAR_6].pBase.functionId;
    if (VAR_8 == VAR_2 || VAR_8 == VAR_0 || VAR_8 == VAR_1) {
      VAR_7->ptsOutputBuf = VAR_3->pCtx[0].aOutputBuf;
    }

    FUNC_3(VAR_4->sdata[VAR_6]->data, 0, (size_t)VAR_4->pSelectExpr[VAR_6].resBytes * VAR_5);
  }

  FUNC_1(VAR_3);
}
