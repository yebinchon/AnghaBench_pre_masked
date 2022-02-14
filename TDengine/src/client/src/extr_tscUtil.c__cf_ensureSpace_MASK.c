
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ numOfAlloc; int * pColList; } ;
typedef TYPE_1__ SColumnBaseInfo ;
typedef int SColumnBase ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(SColumnBaseInfo* VAR_1, int32_t VAR_2) {
  if (VAR_1->numOfAlloc < VAR_2) {
    int32_t VAR_3 = VAR_1->numOfAlloc;

    int32_t VAR_4 = (VAR_3 <= 0) ? 8 : (VAR_3 << 1);
    while (VAR_4 < VAR_2) {
      VAR_4 = (VAR_4 << 1);
    }

    if (VAR_4 > VAR_0) {
      VAR_4 = VAR_0;
    }

    int32_t VAR_5 = VAR_4 - VAR_3;

    VAR_1->pColList = FUNC_1(VAR_1->pColList, VAR_4 * sizeof(SColumnBase));
    FUNC_0(&VAR_1->pColList[VAR_3], 0, VAR_5 * sizeof(SColumnBase));

    VAR_1->numOfAlloc = VAR_4;
  }
}
