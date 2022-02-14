
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_13__ {int (* init ) (TYPE_5__*) ;} ;
struct TYPE_12__ {scalar_t__ currentStage; } ;
struct TYPE_11__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_10__ {TYPE_5__* pCtx; TYPE_4__* pQuery; } ;
struct TYPE_8__ {size_t functionId; } ;
struct TYPE_9__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;

void FUNC_1(SQueryRuntimeEnv *VAR_1) {
  SQuery *VAR_2 = VAR_1->pQuery;

  for (int32_t VAR_3 = 0; VAR_3 < VAR_2->numOfOutputCols; ++VAR_3) {
    int32_t VAR_4 = VAR_2->pSelectExpr[VAR_3].pBase.functionId;
    VAR_1->pCtx[VAR_3].currentStage = 0;
    VAR_0[VAR_4].init(&VAR_1->pCtx[VAR_3]);
  }
}
