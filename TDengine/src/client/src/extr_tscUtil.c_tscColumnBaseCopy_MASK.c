
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {int numOfFilters; int * filterInfo; } ;
typedef int SColumnFilterInfo ;
typedef TYPE_1__ SColumnBase ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(SColumnBase* VAR_0, const SColumnBase* VAR_1) {
  FUNC_0 (VAR_1 != ((void*)0) && VAR_0 != ((void*)0));

  *VAR_0 = *VAR_1;

  if (VAR_1->numOfFilters > 0) {
    VAR_0->filterInfo = FUNC_1(1, VAR_1->numOfFilters * sizeof(SColumnFilterInfo));

    for (int32_t VAR_2 = 0; VAR_2 < VAR_1->numOfFilters; ++VAR_2) {
      FUNC_2(&VAR_0->filterInfo[VAR_2], &VAR_1->filterInfo[VAR_2]);
    }
  } else {
    FUNC_0(VAR_1->filterInfo == ((void*)0));
  }
}
