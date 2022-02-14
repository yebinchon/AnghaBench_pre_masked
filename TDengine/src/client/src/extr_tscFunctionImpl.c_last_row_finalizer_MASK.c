
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ currentStage; int outputBytes; int outputType; int aOutputBuf; } ;
struct TYPE_7__ {scalar_t__ hasResult; int numOfRes; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(SQLFunctionCtx *VAR_2) {

  if (VAR_2->currentStage == VAR_1) {
    SResultInfo *VAR_3 = FUNC_0(VAR_2);
    if (VAR_3->hasResult != VAR_0) {
      FUNC_2(VAR_2->aOutputBuf, VAR_2->outputType, VAR_2->outputBytes);
      return;
    }
  } else {

  }

  FUNC_0(VAR_2)->numOfRes = 1;
  FUNC_1(FUNC_0(VAR_2));
}
