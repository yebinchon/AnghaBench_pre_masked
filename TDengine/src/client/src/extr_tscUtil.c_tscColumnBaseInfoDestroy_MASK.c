
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_6__ {scalar_t__ numOfFilters; int filterOnBinary; struct TYPE_6__* filterInfo; struct TYPE_6__* pz; } ;
struct TYPE_5__ {scalar_t__ numOfCols; TYPE_2__* pColList; } ;
typedef TYPE_1__ SColumnBaseInfo ;
typedef TYPE_2__ SColumnBase ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(SColumnBaseInfo* VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }

  FUNC_0(VAR_1->numOfCols <= VAR_0);

  for (int32_t VAR_2 = 0; VAR_2 < VAR_1->numOfCols; ++VAR_2) {
    SColumnBase* VAR_3 = &(VAR_1->pColList[VAR_2]);

    if (VAR_3->numOfFilters > 0) {
      for (int32_t VAR_4 = 0; VAR_4 < VAR_3->numOfFilters; ++VAR_4) {
        FUNC_0(VAR_3->filterInfo[VAR_4].filterOnBinary == 0 || VAR_3->filterInfo[VAR_4].filterOnBinary == 1);

        if (VAR_3->filterInfo[VAR_4].filterOnBinary) {
          FUNC_1(VAR_3->filterInfo[VAR_4].pz);
        }
      }
    }

    FUNC_1(VAR_3->filterInfo);
  }

  FUNC_1(VAR_1->pColList);
}
