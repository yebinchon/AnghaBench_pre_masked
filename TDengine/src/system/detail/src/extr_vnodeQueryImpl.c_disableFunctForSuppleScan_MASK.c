
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t int32_t ;
struct TYPE_20__ {TYPE_1__* resultInfo; } ;
struct TYPE_16__ {int order; } ;
struct TYPE_19__ {size_t numOfOutputCols; TYPE_4__ order; TYPE_3__* pSelectExpr; int pGroupbyExpr; } ;
struct TYPE_18__ {size_t usedIndex; TYPE_11__* pCtx; TYPE_8__* pResult; TYPE_7__* pQuery; } ;
struct TYPE_17__ {int complete; } ;
struct TYPE_14__ {size_t functionId; } ;
struct TYPE_15__ {TYPE_2__ pBase; } ;
struct TYPE_13__ {int complete; } ;
struct TYPE_12__ {int order; } ;
typedef TYPE_5__ SResultInfo ;
typedef TYPE_6__ SQueryRuntimeEnv ;
typedef TYPE_7__ SQuery ;
typedef TYPE_8__ SOutputRes ;


 TYPE_5__* FUNC_0 (TYPE_11__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(SQueryRuntimeEnv *VAR_8, int32_t VAR_9) {
  SQuery *VAR_10 = VAR_8->pQuery;

  if (FUNC_1(VAR_10->pGroupbyExpr)) {
    for (int32_t VAR_11 = 0; VAR_11 < VAR_10->numOfOutputCols; ++VAR_11) {
      VAR_8->pCtx[VAR_11].order = (VAR_8->pCtx[VAR_11].order) ^ 1;
    }

    for (int32_t VAR_12 = 0; VAR_12 < VAR_8->usedIndex; ++VAR_12) {
      SOutputRes *VAR_13 = &VAR_8->pResult[VAR_12];


      for (int32_t VAR_14 = 0; VAR_14 < VAR_10->numOfOutputCols; ++VAR_14) {
        int32_t VAR_15 = VAR_10->pSelectExpr[VAR_14].pBase.functionId;

        if (((VAR_15 == VAR_0 || VAR_15 == VAR_1) && VAR_9 == VAR_7) ||
            ((VAR_15 == VAR_2 || VAR_15 == VAR_3) && VAR_9 == VAR_6)) {
          VAR_13->resultInfo[VAR_14].complete = 0;
        } else if (VAR_15 != VAR_5 && VAR_15 != VAR_4) {
          VAR_13->resultInfo[VAR_14].complete = 1;
        }
      }
    }
  } else {
    for (int32_t VAR_16 = 0; VAR_16 < VAR_10->numOfOutputCols; ++VAR_16) {
      VAR_8->pCtx[VAR_16].order = (VAR_8->pCtx[VAR_16].order) ^ 1;
      int32_t VAR_17 = VAR_10->pSelectExpr[VAR_16].pBase.functionId;

      SResultInfo *VAR_18 = FUNC_0(&VAR_8->pCtx[VAR_16]);
      if (((VAR_17 == VAR_0 || VAR_17 == VAR_1) && VAR_9 == VAR_7) ||
          ((VAR_17 == VAR_2 || VAR_17 == VAR_3) && VAR_9 == VAR_6)) {
        VAR_18->complete = 0;

      } else if (VAR_17 != VAR_5 && VAR_17 != VAR_4) {
        VAR_18->complete = 1;
      }
    }
  }

  VAR_10->order.order = VAR_10->order.order ^ 1;
}
