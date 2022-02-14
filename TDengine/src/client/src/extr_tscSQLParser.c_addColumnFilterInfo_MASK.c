
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int numOfFilters; int * filterInfo; } ;
typedef int SColumnFilterInfo ;
typedef TYPE_1__ SColumnBase ;


 int FUNC_0 (int *,int ,int) ;
 char* FUNC_1 (int *,int) ;

__attribute__((used)) static SColumnFilterInfo* FUNC_2(SColumnBase* VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return ((void*)0);
  }

  int32_t VAR_1 = VAR_0->numOfFilters + 1;
  char* VAR_2 = FUNC_1(VAR_0->filterInfo, sizeof(SColumnFilterInfo) * (VAR_1));
  if (VAR_2 != ((void*)0)) {
    VAR_0->filterInfo = (SColumnFilterInfo*)VAR_2;
  }

  VAR_0->numOfFilters++;

  SColumnFilterInfo* VAR_3 = &VAR_0->filterInfo[VAR_0->numOfFilters - 1];
  FUNC_0(VAR_3, 0, sizeof(SColumnFilterInfo));

  return VAR_3;
}
