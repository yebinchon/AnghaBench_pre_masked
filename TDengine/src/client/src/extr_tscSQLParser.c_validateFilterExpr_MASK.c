
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_9__ {size_t numOfFilters; TYPE_3__* filterInfo; } ;
struct TYPE_8__ {size_t lowerRelOptr; size_t upperRelOptr; } ;
struct TYPE_6__ {size_t numOfCols; TYPE_4__* pColList; } ;
struct TYPE_7__ {TYPE_1__ colList; } ;
typedef TYPE_2__ SSqlCmd ;
typedef TYPE_3__ SColumnFilterInfo ;
typedef TYPE_4__ SColumnBase ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static bool FUNC_0(SSqlCmd* VAR_5) {
  for (int32_t VAR_6 = 0; VAR_6 < VAR_5->colList.numOfCols; ++VAR_6) {
    SColumnBase* VAR_7 = &VAR_5->colList.pColList[VAR_6];

    for (int32_t VAR_8 = 0; VAR_8 < VAR_7->numOfFilters; ++VAR_8) {
      SColumnFilterInfo* VAR_9 = &VAR_7->filterInfo[VAR_8];
      int32_t VAR_10 = VAR_9->lowerRelOptr;
      int32_t VAR_11 = VAR_9->upperRelOptr;

      if ((VAR_10 == VAR_2 || VAR_10 == VAR_1) &&
          (VAR_11 == VAR_4 || VAR_11 == VAR_3)) {
        continue;
      }


      if (VAR_10 * VAR_11 != VAR_0) {
        return 0;
      }
    }
  }

  return 1;
}
