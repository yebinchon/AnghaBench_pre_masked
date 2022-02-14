
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_14__ {int* ptsList; scalar_t__ nStartQueryTimestamp; int aOutputBuf; int inputType; scalar_t__ hasNull; } ;
struct TYPE_13__ {TYPE_1__* interResultBuf; scalar_t__ superTableQ; void* hasResult; } ;
struct TYPE_12__ {scalar_t__ lastKey; int dOutput; int dLastValue; int iOutput; int iLastValue; void* hasResult; } ;
typedef int TSKEY ;
typedef TYPE_1__ STwaInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 void* VAR_0 ;
 void* FUNC_0 (TYPE_3__*,size_t) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_3__*,void*,int ,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_6(SQLFunctionCtx *VAR_4, int32_t VAR_5) {
  void *VAR_6 = FUNC_0(VAR_4, VAR_5);
  if (VAR_4->hasNull && FUNC_3(VAR_6, VAR_4->inputType)) {
    return 1;
  }

  FUNC_2(VAR_4, 1, 1);

  TSKEY *VAR_7 = VAR_4->ptsList;

  SResultInfo *VAR_8 = FUNC_1(VAR_4);
  STwaInfo * VAR_9 = VAR_8->interResultBuf;

  if (VAR_9->lastKey == VAR_1) {
    VAR_9->lastKey = VAR_4->nStartQueryTimestamp;
    FUNC_5(VAR_4, VAR_6, 0, VAR_9);

    VAR_9->hasResult = VAR_0;
  }

  if (VAR_4->inputType == VAR_3 || VAR_4->inputType == VAR_2) {
    VAR_9->dOutput += VAR_9->dLastValue * (VAR_7[VAR_5] - VAR_9->lastKey);
  } else {
    VAR_9->iOutput += VAR_9->iLastValue * (VAR_7[VAR_5] - VAR_9->lastKey);
  }


  VAR_9->lastKey = VAR_7[VAR_5];
  FUNC_5(VAR_4, VAR_6, 0, VAR_9);


  VAR_8->hasResult = VAR_0;

  if (VAR_8->superTableQ) {
    FUNC_4(VAR_4->aOutputBuf, VAR_8->interResultBuf, sizeof(STwaInfo));
  }

  return 1;
}
