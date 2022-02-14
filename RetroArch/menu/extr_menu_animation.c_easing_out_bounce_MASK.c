
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
   VAR_0 = VAR_0 / VAR_3;
   if (VAR_0 < 1 / 2.75)
      return VAR_2 * (7.5625 * VAR_0 * VAR_0) + VAR_1;
   if (VAR_0 < 2 / 2.75)
   {
      VAR_0 = VAR_0 - (1.5 / 2.75);
      return VAR_2 * (7.5625 * VAR_0 * VAR_0 + 0.75) + VAR_1;
   }
   else if (VAR_0 < 2.5 / 2.75)
   {
      VAR_0 = VAR_0 - (2.25 / 2.75);
      return VAR_2 * (7.5625 * VAR_0 * VAR_0 + 0.9375) + VAR_1;
   }
   VAR_0 = VAR_0 - (2.625 / 2.75);
   return VAR_2 * (7.5625 * VAR_0 * VAR_0 + 0.984375) + VAR_1;
}
