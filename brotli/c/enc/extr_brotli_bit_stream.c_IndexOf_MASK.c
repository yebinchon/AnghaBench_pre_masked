
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;



__attribute__((used)) static size_t FUNC_0(const uint8_t* VAR_0, size_t VAR_1, uint8_t VAR_2) {
  size_t VAR_3 = 0;
  for (; VAR_3 < VAR_1; ++VAR_3) {
    if (VAR_0[VAR_3] == VAR_2) return VAR_3;
  }
  return VAR_3;
}
