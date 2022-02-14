
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_13__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_12__ {int * pCtx; TYPE_5__* pQuery; } ;
struct TYPE_11__ {scalar_t__ numOfRes; } ;
struct TYPE_9__ {size_t functionId; } ;
struct TYPE_10__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;


 TYPE_3__* FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;

int64_t FUNC_2(SQueryRuntimeEnv *VAR_3) {
  SQuery *VAR_4 = VAR_3->pQuery;
  bool VAR_5 = FUNC_1(VAR_4);

  int64_t VAR_6 = 0;
  for (int32_t VAR_7 = 0; VAR_7 < VAR_4->numOfOutputCols; ++VAR_7) {
    int32_t VAR_8 = VAR_4->pSelectExpr[VAR_7].pBase.functionId;





    if (VAR_5 &&
        (VAR_8 == VAR_2 || VAR_8 == VAR_0 || VAR_8 == VAR_1)) {
      continue;
    }

    SResultInfo *VAR_9 = FUNC_0(&VAR_3->pCtx[VAR_7]);
    if (VAR_9 != ((void*)0) && VAR_6 < VAR_9->numOfRes) {
      VAR_6 = VAR_9->numOfRes;
    }
  }

  return VAR_6;
}
