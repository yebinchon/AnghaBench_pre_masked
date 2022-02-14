
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;



__attribute__((used)) static uint64_t FUNC_0(const uint64_t *VAR_0, uint32_t VAR_1)
{
  uint64_t VAR_2 = 0;
  uint32_t VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    VAR_2 += VAR_0[VAR_3];
  return VAR_2;
}
