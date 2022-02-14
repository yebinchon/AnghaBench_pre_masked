
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int64_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static int32_t FUNC_1(const void* VAR_1, const void* VAR_2) {
  double VAR_3 = (*(double*)VAR_1) - (*(int64_t*)VAR_2);
  if (FUNC_0(VAR_3) < VAR_0) {
    return 0;
  } else {
    return VAR_3 > 0 ? 1 : -1;
  }
}
