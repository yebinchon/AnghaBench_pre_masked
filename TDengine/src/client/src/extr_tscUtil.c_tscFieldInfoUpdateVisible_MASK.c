
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t numOfOutputCols; int* pVisibleCols; scalar_t__ numOfHiddenCols; } ;
typedef TYPE_1__ SFieldInfo ;



void FUNC_0(SFieldInfo* VAR_0, int32_t VAR_1, bool VAR_2) {
  if (VAR_1 < 0 || VAR_1 > VAR_0->numOfOutputCols) {
    return;
  }

  bool VAR_3 = VAR_0->pVisibleCols[VAR_1];
  VAR_0->pVisibleCols[VAR_1] = VAR_2;

  if (VAR_3 != VAR_2) {
    if (!VAR_2) {
      VAR_0->numOfHiddenCols += 1;
    } else {
      if (VAR_0->numOfHiddenCols > 0) {
        VAR_0->numOfHiddenCols -= 1;
      }
    }
  }
}
