
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int numOfOutputCols; int * pFields; } ;
typedef TYPE_1__ SFieldInfo ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(SFieldInfo* VAR_0, int32_t VAR_1) {
  if (VAR_1 < VAR_0->numOfOutputCols) {
    FUNC_0(&VAR_0->pFields[VAR_1 + 1], &VAR_0->pFields[VAR_1],
            sizeof(VAR_0->pFields[0]) * (VAR_0->numOfOutputCols - VAR_1));
  }
}
