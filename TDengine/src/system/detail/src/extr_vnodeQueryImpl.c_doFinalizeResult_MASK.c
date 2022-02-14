
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t int32_t ;
struct TYPE_16__ {int numOfRows; } ;
struct TYPE_15__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; int pGroupbyExpr; } ;
struct TYPE_14__ {size_t usedIndex; int * pCtx; TYPE_5__* pResult; TYPE_4__* pQuery; } ;
struct TYPE_12__ {size_t functionId; } ;
struct TYPE_13__ {TYPE_1__ pBase; } ;
struct TYPE_11__ {int (* xFinalize ) (int *) ;} ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SOutputRes ;


 TYPE_10__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(SQueryRuntimeEnv *VAR_1) {
  SQuery *VAR_2 = VAR_1->pQuery;

  if (FUNC_1(VAR_2->pGroupbyExpr)) {

    for (int32_t VAR_3 = 0; VAR_3 < VAR_1->usedIndex; ++VAR_3) {
      SOutputRes *VAR_4 = &VAR_1->pResult[VAR_3];
      FUNC_2(VAR_1, VAR_4);

      for (int32_t VAR_5 = 0; VAR_5 < VAR_2->numOfOutputCols; ++VAR_5) {
        VAR_0[VAR_2->pSelectExpr[VAR_5].pBase.functionId].xFinalize(&VAR_1->pCtx[VAR_5]);
      }





      VAR_4->numOfRows = FUNC_0(VAR_1);
    }

  } else {
    for (int32_t VAR_6 = 0; VAR_6 < VAR_2->numOfOutputCols; ++VAR_6) {
      VAR_0[VAR_2->pSelectExpr[VAR_6].pBase.functionId].xFinalize(&VAR_1->pCtx[VAR_6]);
    }
  }
}
