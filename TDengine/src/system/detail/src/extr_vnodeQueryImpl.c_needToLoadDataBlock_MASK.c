
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_19__ {scalar_t__ (* fp ) (TYPE_8__*,char*,char*) ;} ;
struct TYPE_18__ {scalar_t__ colId; int max; int min; } ;
struct TYPE_17__ {size_t numOfFilterCols; size_t numOfOutputCols; TYPE_4__* pSelectExpr; TYPE_5__* pFilterInfo; } ;
struct TYPE_12__ {scalar_t__ colId; scalar_t__ type; } ;
struct TYPE_13__ {size_t colIdx; TYPE_1__ data; } ;
struct TYPE_16__ {size_t numOfFilters; TYPE_8__* pFilters; TYPE_2__ info; } ;
struct TYPE_14__ {size_t functionId; } ;
struct TYPE_15__ {TYPE_3__ pBase; } ;
typedef TYPE_5__ SSingleColumnFilterInfo ;
typedef TYPE_6__ SQuery ;
typedef int SQLFunctionCtx ;
typedef TYPE_7__ SField ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_8__*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_8__*,char*,char*) ;
 int FUNC_2 (int *,size_t,char*,char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(SQuery *VAR_3, SField *VAR_4, SQLFunctionCtx *VAR_5) {
  if (VAR_4 == ((void*)0)) {
    return 0;
  }

  for (int32_t VAR_6 = 0; VAR_6 < VAR_3->numOfFilterCols; ++VAR_6) {
    SSingleColumnFilterInfo *VAR_7 = &VAR_3->pFilterInfo[VAR_6];
    int32_t VAR_8 = VAR_7->info.colIdx;


    if (VAR_8 < 0 || VAR_4[VAR_8].colId != VAR_7->info.data.colId) {
      continue;
    }


    if (!FUNC_3(VAR_7->info.data.type)) {
      continue;
    }

    if (VAR_7->info.data.type == VAR_0) {
      float VAR_9 = *(double *)(&VAR_4[VAR_8].min);
      float VAR_10 = *(double *)(&VAR_4[VAR_8].max);

      for (int32_t VAR_11 = 0; VAR_11 < VAR_7->numOfFilters; ++VAR_11) {
        if (VAR_7->pFilters[VAR_11].fp(&VAR_7->pFilters[VAR_11], (char *)&VAR_9, (char *)&VAR_10)) {
          return 1;
        }
      }
    } else {
      for (int32_t VAR_12 = 0; VAR_12 < VAR_7->numOfFilters; ++VAR_12) {
        if (VAR_7->pFilters[VAR_12].fp(&VAR_7->pFilters[VAR_12], (char *)&VAR_4[VAR_8].min,
                                        (char *)&VAR_4[VAR_8].max)) {
          return 1;
        }
      }
    }
  }

  for (int32_t VAR_13 = 0; VAR_13 < VAR_3->numOfOutputCols; ++VAR_13) {
    int32_t VAR_14 = VAR_3->pSelectExpr[VAR_13].pBase.functionId;
    if (VAR_14 == VAR_2 || VAR_14 == VAR_1) {
      return FUNC_2(&VAR_5[VAR_13], VAR_14, (char *)&VAR_4[VAR_13].min, (char *)&VAR_4[VAR_13].max);
    }
  }

  return 1;
}
