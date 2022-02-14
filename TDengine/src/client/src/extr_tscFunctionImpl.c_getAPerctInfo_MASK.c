
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ currentStage; int * aOutputBuf; } ;
struct TYPE_6__ {int * interResultBuf; scalar_t__ superTableQ; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef int SAPercentileInfo ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static SAPercentileInfo *FUNC_1(SQLFunctionCtx *VAR_1) {
  SResultInfo *VAR_2 = FUNC_0(VAR_1);

  if (VAR_2->superTableQ && VAR_1->currentStage != VAR_0) {
    return VAR_1->aOutputBuf;
  } else {
    return VAR_2->interResultBuf;
  }
}
