
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0, float VAR_1, float VAR_2)
{
   if (VAR_2 < 0)
      VAR_2 += 1;

   if (VAR_2 > 1)
      VAR_2 -= 1;

   if ((6 * VAR_2) < 1)
      return (VAR_0 + (VAR_1 - VAR_0) * 6 * VAR_2);

   if ((2 * VAR_2) < 1)
      return VAR_1;

   if ((3 * VAR_2) < 2)
      return (VAR_0 + (VAR_1 - VAR_0) * ((2.0f / 3) - VAR_2) * 6);

   return VAR_0;
}
