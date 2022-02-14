
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0)
{
  float VAR_1 = 0;
  while(VAR_0 > 32) { VAR_1 += 4; VAR_0 /= 16; }
  while(VAR_0 > 2) { VAR_1++; VAR_0 /= 2; }
  return VAR_1 + 1.442695f * (VAR_0 * VAR_0 * VAR_0 / 3 - 3 * VAR_0 * VAR_0 / 2 + 3 * VAR_0 - 1.83333f);
}
