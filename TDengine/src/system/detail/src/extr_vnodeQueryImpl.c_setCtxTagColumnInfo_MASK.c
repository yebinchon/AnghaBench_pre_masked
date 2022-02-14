
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_14__ {size_t numOfTagCols; int tagsLen; TYPE_6__** pTagCtxList; } ;
struct TYPE_18__ {TYPE_2__ tagInfo; scalar_t__ outputBytes; } ;
struct TYPE_17__ {size_t numOfOutputCols; TYPE_1__* pSelectExpr; } ;
struct TYPE_16__ {TYPE_6__* pCtx; } ;
struct TYPE_15__ {size_t functionId; } ;
struct TYPE_13__ {TYPE_3__ pBase; } ;
struct TYPE_12__ {int nStatus; } ;
typedef TYPE_3__ SSqlFuncExprMsg ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SQLFunctionCtx ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_11__* VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_6__** FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(SQuery* VAR_7, SQueryRuntimeEnv* VAR_8) {
  if (FUNC_2(VAR_7)) {
    int32_t VAR_9 = 0;
    SQLFunctionCtx *VAR_10 = ((void*)0);
    int16_t VAR_11 = 0;

    SQLFunctionCtx ** VAR_12 = FUNC_1(VAR_7->numOfOutputCols, VAR_0);
    for (int32_t VAR_13 = 0; VAR_13 < VAR_7->numOfOutputCols; ++VAR_13) {
      SSqlFuncExprMsg *VAR_14 = &VAR_7->pSelectExpr[VAR_13].pBase;
      if (VAR_14->functionId == VAR_3 || VAR_14->functionId == VAR_5) {
        VAR_11 += VAR_8->pCtx[VAR_13].outputBytes;
        VAR_12[VAR_9++] = &VAR_8->pCtx[VAR_13];
      } else if ((VAR_6[VAR_14->functionId].nStatus & VAR_1) != 0) {
        VAR_10 = &VAR_8->pCtx[VAR_13];
      } else if (VAR_14->functionId == VAR_4 || VAR_14->functionId == VAR_2) {


        continue;
      } else {
        FUNC_0(0);
      }
    }

    VAR_10->tagInfo.pTagCtxList = VAR_12;
    VAR_10->tagInfo.numOfTagCols = VAR_9;
    VAR_10->tagInfo.tagsLen = VAR_11;
  }
}
