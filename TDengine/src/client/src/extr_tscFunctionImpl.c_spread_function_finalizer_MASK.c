
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ currentStage; scalar_t__ inputType; scalar_t__ aOutputBuf; int outputBytes; int outputType; TYPE_1__* param; } ;
struct TYPE_11__ {scalar_t__ hasResult; TYPE_2__* interResultBuf; } ;
struct TYPE_10__ {scalar_t__ hasResult; double max; double min; } ;
struct TYPE_9__ {double dKey; } ;
typedef TYPE_2__ SSpreadInfo ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

void FUNC_4(SQLFunctionCtx *VAR_6) {




  SResultInfo *VAR_7 = FUNC_0(VAR_6);

  if (VAR_6->currentStage == VAR_1) {
    FUNC_1(VAR_6->inputType == VAR_2);

    if (VAR_7->hasResult != VAR_0) {
      FUNC_3(VAR_6->aOutputBuf, VAR_6->outputType, VAR_6->outputBytes);
      return;
    }

    *(double *)VAR_6->aOutputBuf = VAR_6->param[3].dKey - VAR_6->param[0].dKey;
  } else {
    FUNC_1((VAR_6->inputType >= VAR_5 && VAR_6->inputType <= VAR_3) ||
           (VAR_6->inputType == VAR_4));

    SSpreadInfo *VAR_8 = FUNC_0(VAR_6)->interResultBuf;
    if (VAR_8->hasResult != VAR_0) {
      FUNC_3(VAR_6->aOutputBuf, VAR_6->outputType, VAR_6->outputBytes);
      return;
    }

    *(double *)VAR_6->aOutputBuf = VAR_8->max - VAR_8->min;
  }


  FUNC_2(FUNC_0(VAR_6));
}
