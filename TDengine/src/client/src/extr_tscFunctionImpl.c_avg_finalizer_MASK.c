
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double int64_t ;
struct TYPE_9__ {double num; double sum; } ;
struct TYPE_8__ {scalar_t__ currentStage; scalar_t__ inputType; scalar_t__ aOutputBuf; int outputBytes; int outputType; } ;
struct TYPE_7__ {int numOfRes; scalar_t__ interResultBuf; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SAvgInfo ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_4) {
  SResultInfo *VAR_5 = FUNC_1(VAR_4);

  if (VAR_4->currentStage == VAR_0) {
    FUNC_2(VAR_4->inputType == VAR_1);

    if (FUNC_0(VAR_5->interResultBuf) <= 0) {
      FUNC_3(VAR_4->aOutputBuf, VAR_4->outputType, VAR_4->outputBytes);
      return;
    }

    *(double *)VAR_4->aOutputBuf = (*(double *)VAR_4->aOutputBuf) / *(int64_t *)VAR_5->interResultBuf;
  } else {
    FUNC_2(VAR_4->inputType >= VAR_3 && VAR_4->inputType <= VAR_2);

    SAvgInfo *VAR_6 = (SAvgInfo *)VAR_5->interResultBuf;

    if (VAR_6->num == 0) {
      FUNC_3(VAR_4->aOutputBuf, VAR_4->outputType, VAR_4->outputBytes);
      return;
    }

    *(double *)VAR_4->aOutputBuf = VAR_6->sum / VAR_6->num;
  }


  FUNC_1(VAR_4)->numOfRes = 1;
}
