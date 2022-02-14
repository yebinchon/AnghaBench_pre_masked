
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double lowerBndd; double lowerBndi; } ;
struct TYPE_5__ {TYPE_1__ filterInfo; } ;
typedef TYPE_2__ SColumnFilterElem ;


 int FUNC_0 (int) ;

bool FUNC_1(SColumnFilterElem *VAR_0, char *VAR_1, char *VAR_2) {
  if (*(double *)VAR_1 == *(double *)VAR_2) {
    return (*(double *)VAR_1 == VAR_0->filterInfo.lowerBndd);
  } else {
    FUNC_0(*(double *)VAR_1 < *(double *)VAR_2);

    return *(double *)VAR_1 <= VAR_0->filterInfo.lowerBndi && *(double *)VAR_2 >= VAR_0->filterInfo.lowerBndi;
  }
}
