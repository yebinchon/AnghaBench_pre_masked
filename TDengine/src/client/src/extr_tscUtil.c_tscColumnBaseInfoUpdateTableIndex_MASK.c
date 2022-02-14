
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_7__ {size_t numOfCols; TYPE_2__* pColList; } ;
struct TYPE_5__ {int tableIndex; } ;
struct TYPE_6__ {TYPE_1__ colIndex; } ;
typedef TYPE_3__ SColumnBaseInfo ;



void FUNC_0(SColumnBaseInfo* VAR_0, int16_t VAR_1) {
  for (int32_t VAR_2 = 0; VAR_2 < VAR_0->numOfCols; ++VAR_2) {
    VAR_0->pColList[VAR_2].colIndex.tableIndex = VAR_1;
  }
}
