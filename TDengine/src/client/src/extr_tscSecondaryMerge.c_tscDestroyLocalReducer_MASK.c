
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
struct TYPE_12__ {TYPE_6__* pTags; TYPE_6__* prevValues; } ;
struct TYPE_18__ {size_t numOfBuffer; scalar_t__ numOfCompleted; TYPE_6__** pLocalDataSrc; int numOfVnode; int resColModel; int pDesc; int pExtMemBuffer; TYPE_6__* discardData; TYPE_6__* pFinalRes; TYPE_6__* pBufForInterpo; TYPE_6__* pLoserTree; TYPE_6__* pResInfo; TYPE_6__* pResultBuf; TYPE_6__* pTempBuffer; TYPE_6__* prevRowOfInput; TYPE_6__* pCtx; TYPE_1__ interpolationInfo; int status; } ;
struct TYPE_17__ {struct TYPE_17__* param; struct TYPE_17__* interResultBuf; int tag; } ;
struct TYPE_13__ {size_t numOfOutputCols; } ;
struct TYPE_16__ {TYPE_2__ fieldsInfo; } ;
struct TYPE_14__ {int * pLocalReducer; } ;
struct TYPE_15__ {TYPE_5__ cmd; TYPE_3__ res; } ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SQLFunctionCtx ;
typedef TYPE_7__ SLocalReducer ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int **,int *) ;
 size_t FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (char*,TYPE_4__*,...) ;

void FUNC_8(SSqlObj *VAR_3) {
  if (VAR_3 == ((void*)0)) {
    return;
  }

  FUNC_7("%p start to free local reducer", VAR_3);
  SSqlRes *VAR_4 = &(VAR_3->res);
  if (VAR_4->pLocalReducer == ((void*)0)) {
    FUNC_7("%p local reducer has been freed, abort", VAR_3);
    return;
  }

  SSqlCmd *VAR_5 = &VAR_3->cmd;


  SLocalReducer *VAR_6 = (SLocalReducer*)FUNC_0(&VAR_4->pLocalReducer, ((void*)0));
  if (VAR_6 != ((void*)0)) {
    int32_t VAR_7 = 0;
    while ((VAR_7 = FUNC_1(&VAR_6->status, VAR_1,
                                                    VAR_2)) == VAR_0) {
      FUNC_4(100);
      FUNC_7("%p waiting for delete procedure, status: %d", VAR_3, VAR_7);
    }

    FUNC_5(VAR_6->interpolationInfo.prevValues);
    FUNC_5(VAR_6->interpolationInfo.pTags);

    if (VAR_6->pCtx != ((void*)0)) {
      for(int32_t VAR_8 = 0; VAR_8 < VAR_5->fieldsInfo.numOfOutputCols; ++VAR_8) {
        SQLFunctionCtx *VAR_9 = &VAR_6->pCtx[VAR_8];
        FUNC_3(&VAR_9->tag);
      }

      FUNC_5(VAR_6->pCtx);
    }


    FUNC_5(VAR_6->prevRowOfInput);

    FUNC_5(VAR_6->pTempBuffer);
    FUNC_5(VAR_6->pResultBuf);

    if (VAR_6->pResInfo != ((void*)0)) {
      for (int32_t VAR_10 = 0; VAR_10 < VAR_5->fieldsInfo.numOfOutputCols; ++VAR_10) {
        FUNC_5(VAR_6->pResInfo[VAR_10].interResultBuf);
      }

      FUNC_5(VAR_6->pResInfo);
    }

    if (VAR_6->pLoserTree) {
      FUNC_5(VAR_6->pLoserTree->param);
      FUNC_5(VAR_6->pLoserTree);
    }

    FUNC_5(VAR_6->pBufForInterpo);

    FUNC_5(VAR_6->pFinalRes);
    FUNC_5(VAR_6->discardData);

    FUNC_6(VAR_6->pExtMemBuffer, VAR_6->pDesc, VAR_6->resColModel,
                              VAR_6->numOfVnode);
    for (int32_t VAR_11 = 0; VAR_11 < VAR_6->numOfBuffer; ++VAR_11) {
      FUNC_5(VAR_6->pLocalDataSrc[VAR_11]);
    }

    VAR_6->numOfBuffer = 0;
    VAR_6->numOfCompleted = 0;
    FUNC_2(VAR_6);
  } else {
    FUNC_7("%p already freed or another free function is invoked", VAR_3);
  }

  FUNC_7("%p free local reducer finished", VAR_3);
}
