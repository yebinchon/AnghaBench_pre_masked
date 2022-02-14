
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int64_t ;
typedef size_t int32_t ;
struct TYPE_13__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_12__ {TYPE_4__* pCtx; TYPE_6__* pQuery; } ;
struct TYPE_11__ {TYPE_3__* param; } ;
struct TYPE_10__ {void* nType; void* dKey; } ;
struct TYPE_8__ {size_t functionId; } ;
struct TYPE_9__ {TYPE_1__ pBase; } ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;


 void* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(SQueryRuntimeEnv *VAR_2, int64_t VAR_3, int64_t VAR_4) {
  SQuery *VAR_5 = VAR_2->pQuery;

  for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfOutputCols; ++VAR_6) {
    int32_t VAR_7 = VAR_5->pSelectExpr[VAR_6].pBase.functionId;

    if (VAR_7 == VAR_1) {
      VAR_2->pCtx[VAR_6].param[1].dKey = VAR_3;
      VAR_2->pCtx[VAR_6].param[2].dKey = VAR_4;

      VAR_2->pCtx[VAR_6].param[1].nType = VAR_0;
      VAR_2->pCtx[VAR_6].param[2].nType = VAR_0;
    }
  }
}
