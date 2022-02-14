
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_20__ {int * resultInfo; TYPE_1__** result; } ;
struct TYPE_19__ {int outputBytes; int * resultInfo; scalar_t__ aOutputBuf; scalar_t__ ptsOutputBuf; } ;
struct TYPE_18__ {size_t numOfOutputCols; int pGroupbyExpr; TYPE_3__* pSelectExpr; } ;
struct TYPE_17__ {TYPE_7__* pCtx; TYPE_6__* pQuery; } ;
struct TYPE_16__ {int superTableQ; } ;
struct TYPE_14__ {size_t functionId; } ;
struct TYPE_15__ {TYPE_2__ pBase; } ;
struct TYPE_13__ {int numOfElems; scalar_t__ data; } ;
typedef TYPE_4__ SResultInfo ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SQLFunctionCtx ;
typedef TYPE_8__ SOutputRes ;


 TYPE_4__* FUNC_0 (TYPE_7__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(SQueryRuntimeEnv *VAR_3, SOutputRes *VAR_4) {
  SQuery *VAR_5 = VAR_3->pQuery;


  for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfOutputCols; ++VAR_6) {
    FUNC_1(VAR_4->result[VAR_6]->numOfElems == 0 || VAR_4->result[VAR_6]->numOfElems == 1);

    SQLFunctionCtx *VAR_7 = &VAR_3->pCtx[VAR_6];
    VAR_7->aOutputBuf = VAR_4->result[VAR_6]->data + VAR_7->outputBytes * VAR_4->result[VAR_6]->numOfElems;

    int32_t VAR_8 = VAR_5->pSelectExpr[VAR_6].pBase.functionId;
    if (VAR_8 == VAR_2 || VAR_8 == VAR_0 || VAR_8 == VAR_1) {
      VAR_7->ptsOutputBuf = VAR_3->pCtx[0].aOutputBuf;
    }





    VAR_7->resultInfo = &VAR_4->resultInfo[VAR_6];


    SResultInfo *VAR_9 = FUNC_0(VAR_7);
    if (!FUNC_2(VAR_5->pGroupbyExpr)) {
      VAR_9->superTableQ = 1;
    }
  }
}
