
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ aOutputBuf; } ;
struct TYPE_9__ {scalar_t__ hasResult; int numOfRes; scalar_t__ interResultBuf; } ;
struct TYPE_8__ {scalar_t__ EKey; scalar_t__ lastKey; scalar_t__ hasResult; scalar_t__ SKey; scalar_t__ type; int iOutput; int iLastValue; int dOutput; int dLastValue; } ;
typedef TYPE_1__ STwaInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int ,int) ;

void FUNC_4(SQLFunctionCtx *VAR_4) {
  SResultInfo *VAR_5 = FUNC_0(VAR_4);

  STwaInfo *VAR_6 = (STwaInfo *)VAR_5->interResultBuf;
  FUNC_1(VAR_6->EKey >= VAR_6->lastKey && VAR_6->hasResult == VAR_5->hasResult);

  if (VAR_6->hasResult != VAR_0) {
    FUNC_3(VAR_4->aOutputBuf, VAR_2, sizeof(double));
    return;
  }

  if (VAR_6->SKey == VAR_6->EKey) {
    *(double *)VAR_4->aOutputBuf = 0;
  } else if (VAR_6->type >= VAR_3 && VAR_6->type <= VAR_1) {
    VAR_6->iOutput += VAR_6->iLastValue * (VAR_6->EKey - VAR_6->lastKey);
    *(double *)VAR_4->aOutputBuf = VAR_6->iOutput / (double)(VAR_6->EKey - VAR_6->SKey);
  } else {
    VAR_6->dOutput += VAR_6->dLastValue * (VAR_6->EKey - VAR_6->lastKey);
    *(double *)VAR_4->aOutputBuf = VAR_6->dOutput / (VAR_6->EKey - VAR_6->SKey);
  }

  FUNC_0(VAR_4)->numOfRes = 1;
  FUNC_2(FUNC_0(VAR_4));
}
