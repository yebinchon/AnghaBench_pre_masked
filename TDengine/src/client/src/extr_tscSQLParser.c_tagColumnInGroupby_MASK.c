
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {size_t numOfGroupCols; TYPE_1__* columnInfo; } ;
struct TYPE_4__ {scalar_t__ colId; scalar_t__ flag; } ;
typedef TYPE_2__ SSqlGroupbyExpr ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(SSqlGroupbyExpr* VAR_1, int16_t VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_1->numOfGroupCols; ++VAR_3) {
    if (VAR_2 == VAR_1->columnInfo[VAR_3].colId && VAR_1->columnInfo[VAR_3].flag == VAR_0) {
      return 1;
    }
  }

  return 0;
}
