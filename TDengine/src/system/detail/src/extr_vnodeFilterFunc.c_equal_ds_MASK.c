
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float lowerBndd; } ;
struct TYPE_5__ {TYPE_1__ filterInfo; } ;
typedef TYPE_2__ SColumnFilterElem ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (float) ;

bool FUNC_2(SColumnFilterElem *VAR_1, char *VAR_2, char *VAR_3) {
  if (*(float *)VAR_2 == *(float *)VAR_3) {
    return (FUNC_1(*(float *)VAR_2 - VAR_1->filterInfo.lowerBndd) <= VAR_0);
  } else {
    FUNC_0(*(float *)VAR_2 < *(float *)VAR_3);
    return *(float *)VAR_2 <= VAR_1->filterInfo.lowerBndd && *(float *)VAR_3 >= VAR_1->filterInfo.lowerBndd;
  }
}
