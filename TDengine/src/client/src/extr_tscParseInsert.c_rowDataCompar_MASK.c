
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef scalar_t__ TSKEY ;



__attribute__((used)) static int32_t FUNC_0(const void *VAR_0, const void *VAR_1) {
  TSKEY VAR_2 = *(TSKEY *)VAR_0;
  TSKEY VAR_3 = *(TSKEY *)VAR_1;

  if (VAR_2 == VAR_3) {
    return 0;
  } else {
    return VAR_2 > VAR_3 ? 1 : -1;
  }
}
