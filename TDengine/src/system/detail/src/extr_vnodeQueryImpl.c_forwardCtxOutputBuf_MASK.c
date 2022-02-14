
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int64_t ;
typedef size_t int32_t ;
struct TYPE_15__ {int nStatus; } ;
struct TYPE_9__ {int order; } ;
struct TYPE_14__ {size_t numOfOutputCols; TYPE_3__* pSelectExpr; TYPE_1__ order; } ;
struct TYPE_13__ {TYPE_4__* pCtx; TYPE_6__* pQuery; } ;
struct TYPE_12__ {size_t aOutputBuf; size_t outputBytes; size_t ptsOutputBuf; int resultInfo; } ;
struct TYPE_10__ {size_t functionId; } ;
struct TYPE_11__ {TYPE_2__ pBase; } ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_8__* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void FUNC_4(SQueryRuntimeEnv *VAR_5, int64_t VAR_6) {
  SQuery *VAR_7 = VAR_5->pQuery;
  int32_t VAR_8 = FUNC_0(VAR_7->order.order);


  for (int32_t VAR_9 = 0; VAR_9 < VAR_7->numOfOutputCols; ++VAR_9) {
    int32_t VAR_10 = VAR_7->pSelectExpr[VAR_9].pBase.functionId;
    FUNC_2(VAR_10 != VAR_1);


    if (FUNC_1(VAR_4[VAR_10].nStatus)) {
      VAR_5->pCtx[VAR_9].aOutputBuf += VAR_5->pCtx[VAR_9].outputBytes * VAR_6 * VAR_8;
    }

    if (VAR_10 == VAR_2 || VAR_10 == VAR_0) {







      VAR_5->pCtx[VAR_9].ptsOutputBuf += VAR_3 * VAR_6 * VAR_8;
    }

    FUNC_3(VAR_5->pCtx[VAR_9].resultInfo);
  }
}
