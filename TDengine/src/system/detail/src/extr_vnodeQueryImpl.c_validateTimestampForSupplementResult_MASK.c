
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_11__ {scalar_t__ nStartQueryTimestamp; scalar_t__ aOutputBuf; } ;
struct TYPE_10__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_9__ {scalar_t__ scanFlag; TYPE_5__* pCtx; TYPE_4__* pQuery; } ;
struct TYPE_7__ {size_t functionId; } ;
struct TYPE_8__ {TYPE_1__ pBase; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(SQueryRuntimeEnv *VAR_2, int64_t VAR_3) {
  SQuery * VAR_4 = VAR_2->pQuery;
  SQLFunctionCtx *VAR_5 = VAR_2->pCtx;

  if (VAR_2->scanFlag == VAR_0 && VAR_3 > 0) {
    for (int32_t VAR_6 = 0; VAR_6 < VAR_4->numOfOutputCols; ++VAR_6) {
      int32_t VAR_7 = VAR_4->pSelectExpr[VAR_6].pBase.functionId;
      if (VAR_7 == VAR_1) {
        FUNC_0(*(TSKEY *)VAR_5[VAR_6].aOutputBuf == VAR_5[VAR_6].nStartQueryTimestamp);
      }
    }
  }
}
