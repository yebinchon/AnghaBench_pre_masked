
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int numOfCols; int * pColList; } ;
typedef TYPE_1__ SColumnBaseInfo ;
typedef int SColumnBase ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(SColumnBaseInfo* VAR_0, int32_t VAR_1) {
  if (VAR_1 < VAR_0->numOfCols) {
    FUNC_1(&VAR_0->pColList[VAR_1 + 1], &VAR_0->pColList[VAR_1],
            sizeof(SColumnBase) * (VAR_0->numOfCols - VAR_1));

    FUNC_0(&VAR_0->pColList[VAR_1]);
  }
}
