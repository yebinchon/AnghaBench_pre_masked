
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int tsOrder; } ;
struct TYPE_11__ {int order; } ;
struct TYPE_10__ {TYPE_1__* interResultBuf; } ;
struct TYPE_9__ {TYPE_5__* pTSBuf; } ;
typedef TYPE_1__ STSCompInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_5__* FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(SQLFunctionCtx *VAR_0) {
  if (!FUNC_1(VAR_0)) {
    return 0;
  }

  SResultInfo *VAR_1 = FUNC_0(VAR_0);
  STSCompInfo *VAR_2 = VAR_1->interResultBuf;

  VAR_2->pTSBuf = FUNC_2(0);
  VAR_2->pTSBuf->tsOrder = VAR_0->order;
  return 1;
}
