
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_11__ {scalar_t__ columnIndex; scalar_t__ tableIndex; } ;
struct TYPE_13__ {TYPE_2__ colIndex; } ;
struct TYPE_12__ {size_t numOfCols; TYPE_4__* pColList; } ;
struct TYPE_10__ {int numOfCols; TYPE_3__ colList; } ;
typedef TYPE_1__ SSqlCmd ;
typedef TYPE_2__ SColumnIndex ;
typedef TYPE_3__ SColumnBaseInfo ;
typedef TYPE_4__ SColumnBase ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,size_t) ;

SColumnBase* FUNC_2(SSqlCmd* VAR_0, SColumnIndex* VAR_1) {
  SColumnBaseInfo* VAR_2 = &VAR_0->colList;


  if (VAR_1->columnIndex < 0) {
    return ((void*)0);
  }

  int16_t VAR_3 = VAR_1->columnIndex;

  int32_t VAR_4 = 0;
  while (VAR_4 < VAR_2->numOfCols) {
    if (VAR_2->pColList[VAR_4].colIndex.columnIndex < VAR_3) {
      VAR_4++;
    } else if (VAR_2->pColList[VAR_4].colIndex.tableIndex < VAR_1->tableIndex) {
      VAR_4++;
    } else {
      break;
    }
  }

  SColumnIndex* VAR_5 = &VAR_2->pColList[VAR_4].colIndex;
  if ((VAR_4 < VAR_2->numOfCols && (VAR_5->columnIndex > VAR_3 || VAR_5->tableIndex != VAR_1->tableIndex)) ||
      (VAR_4 >= VAR_2->numOfCols)) {
    FUNC_0(VAR_2, VAR_2->numOfCols + 1);
    FUNC_1(VAR_2, VAR_4);

    VAR_2->pColList[VAR_4].colIndex = *VAR_1;
    VAR_2->numOfCols++;
    VAR_0->numOfCols++;
  }

  return &VAR_2->pColList[VAR_4];
}
