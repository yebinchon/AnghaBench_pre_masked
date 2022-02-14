
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_8__ {int numOfAlloc; size_t numOfCols; TYPE_2__* pColList; } ;
struct TYPE_6__ {scalar_t__ tableIndex; } ;
struct TYPE_7__ {int numOfFilters; int * filterInfo; TYPE_1__ colIndex; } ;
typedef int SColumnFilterInfo ;
typedef TYPE_3__ SColumnBaseInfo ;
typedef int SColumnBase ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(SColumnBaseInfo* VAR_0, const SColumnBaseInfo* VAR_1, int16_t VAR_2) {
  if (VAR_1 == ((void*)0)) {
    return;
  }

  *VAR_0 = *VAR_1;
  VAR_0->pColList = FUNC_0(1, sizeof(SColumnBase) * VAR_0->numOfAlloc);

  int16_t VAR_3 = 0;
  for (int32_t VAR_4 = 0; VAR_4 < VAR_1->numOfCols; ++VAR_4) {
    if (VAR_1->pColList[VAR_4].colIndex.tableIndex == VAR_2 || VAR_2 < 0) {
      VAR_0->pColList[VAR_3] = VAR_1->pColList[VAR_4];

      if (VAR_0->pColList[VAR_3].numOfFilters > 0) {
        VAR_0->pColList[VAR_3].filterInfo = FUNC_0(1, VAR_0->pColList[VAR_3].numOfFilters * sizeof(SColumnFilterInfo));

        for (int32_t VAR_5 = 0; VAR_5 < VAR_0->pColList[VAR_3].numOfFilters; ++VAR_5) {
          FUNC_1(&VAR_0->pColList[VAR_3].filterInfo[VAR_5], &VAR_1->pColList[VAR_4].filterInfo[VAR_5]);
        }
      }

      VAR_3 += 1;
    }
  }

  VAR_0->numOfCols = VAR_3;
}
