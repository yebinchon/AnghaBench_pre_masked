
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ numOfElems; } ;
struct TYPE_13__ {TYPE_5__* pHisto; } ;
struct TYPE_12__ {scalar_t__ currentStage; int outputBytes; int outputType; int aOutputBuf; TYPE_1__* param; } ;
struct TYPE_11__ {scalar_t__ hasResult; TYPE_4__* interResultBuf; } ;
struct TYPE_10__ {scalar_t__ nType; double i64Key; double dKey; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_4__ SAPercentileInfo ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (double*) ;
 int FUNC_3 (int ,double*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;
 double* FUNC_6 (TYPE_5__*,double*,int) ;

__attribute__((used)) static void FUNC_7(SQLFunctionCtx *VAR_3) {
  double VAR_4 = (VAR_3->param[0].nType == VAR_2) ? VAR_3->param[0].i64Key : VAR_3->param[0].dKey;

  SResultInfo * VAR_5 = FUNC_0(VAR_3);
  SAPercentileInfo *VAR_6 = VAR_5->interResultBuf;

  if (VAR_3->currentStage == VAR_1) {
    if (VAR_5->hasResult == VAR_0) {
      FUNC_1(VAR_6->pHisto->numOfElems > 0);

      double VAR_7[] = {VAR_4};
      double *VAR_8 = FUNC_6(VAR_6->pHisto, VAR_7, 1);

      FUNC_3(VAR_3->aOutputBuf, VAR_8, sizeof(double));
      FUNC_2(VAR_8);
    } else {
      FUNC_5(VAR_3->aOutputBuf, VAR_3->outputType, VAR_3->outputBytes);
      return;
    }
  } else {
    if (VAR_6->pHisto->numOfElems > 0) {
      double VAR_9[] = {VAR_4};

      double *VAR_10 = FUNC_6(VAR_6->pHisto, VAR_9, 1);
      FUNC_3(VAR_3->aOutputBuf, VAR_10, sizeof(double));
      FUNC_2(VAR_10);
    } else {
      FUNC_5(VAR_3->aOutputBuf, VAR_3->outputType, VAR_3->outputBytes);
      return;
    }
  }

  FUNC_4(VAR_5);
}
