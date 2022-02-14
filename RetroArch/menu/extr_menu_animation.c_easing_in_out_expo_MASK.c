
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static float FUNC_1(float VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
   if (VAR_0 == 0)
      return VAR_1;
   if (VAR_0 == VAR_3)
      return VAR_1 + VAR_2;
   VAR_0 = VAR_0 / VAR_3 * 2;
   if (VAR_0 < 1)
      return VAR_2 / 2 * FUNC_0(2, 10 * (VAR_0 - 1)) + VAR_1 - VAR_2 * 0.0005;
   return VAR_2 / 2 * 1.0005 * (-FUNC_0(2, -10 * (VAR_0 - 1)) + 2) + VAR_1;
}
