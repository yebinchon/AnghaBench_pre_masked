
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double i64Key; double dKey; } ;
typedef TYPE_1__ tSkipListKey ;
typedef double int64_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (double) ;

int32_t FUNC_1(const void *VAR_1, const void *VAR_2) {
  int64_t VAR_3 = ((tSkipListKey *)VAR_1)->i64Key;
  double VAR_4 = ((tSkipListKey *)VAR_2)->dKey;
  if (FUNC_0(VAR_3 - VAR_4) < VAR_0) {
    return 0;
  } else {
    return (VAR_3 > VAR_4) ? 1 : -1;
  }
}
