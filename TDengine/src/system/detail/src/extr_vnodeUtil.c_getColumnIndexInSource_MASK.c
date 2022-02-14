
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_10__ {size_t numOfCols; TYPE_2__* colList; } ;
struct TYPE_7__ {scalar_t__ colId; } ;
struct TYPE_9__ {TYPE_1__ colInfo; } ;
struct TYPE_8__ {scalar_t__ colId; } ;
typedef TYPE_3__ SSqlFuncExprMsg ;
typedef TYPE_4__ SQueryMeterMsg ;



__attribute__((used)) static int32_t FUNC_0(SQueryMeterMsg* VAR_0, SSqlFuncExprMsg* VAR_1) {
  int32_t VAR_2 = 0;

  while(VAR_2 < VAR_0->numOfCols) {
    if (VAR_1->colInfo.colId == VAR_0->colList[VAR_2].colId) {
      break;
    }

    VAR_2 += 1;
  }

  return VAR_2;
}
