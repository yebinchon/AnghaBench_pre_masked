
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int int32_t ;



__attribute__((used)) static int32_t FUNC_0(const void* VAR_0, const void* VAR_1) {
  int64_t VAR_2 = (int64_t)VAR_0 - (int64_t)VAR_1;
  if (VAR_2 == 0) {
    return 0;
  } else {
    return VAR_2 > 0 ? 1 : -1;
  }
}
