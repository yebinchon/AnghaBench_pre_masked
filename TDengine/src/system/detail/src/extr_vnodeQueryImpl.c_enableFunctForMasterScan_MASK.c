
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {int order; } ;
struct TYPE_9__ {size_t numOfOutputCols; TYPE_1__ order; } ;
struct TYPE_8__ {TYPE_2__* pCtx; TYPE_4__* pQuery; } ;
struct TYPE_7__ {int order; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;



void FUNC_0(SQueryRuntimeEnv *VAR_0, int32_t VAR_1) {
  SQuery *VAR_2 = VAR_0->pQuery;

  for (int32_t VAR_3 = 0; VAR_3 < VAR_2->numOfOutputCols; ++VAR_3) {
    VAR_0->pCtx[VAR_3].order = (VAR_0->pCtx[VAR_3].order) ^ 1;
  }

  VAR_2->order.order = (VAR_2->order.order ^ 1);
}
