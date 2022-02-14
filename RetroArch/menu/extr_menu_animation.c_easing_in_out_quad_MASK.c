
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,int) ;

__attribute__((used)) static float FUNC_1(float VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
   VAR_0 = VAR_0 / VAR_3 * 2;
   if (VAR_0 < 1)
      return VAR_2 / 2 * FUNC_0(VAR_0, 2) + VAR_1;
   return -VAR_2 / 2 * ((VAR_0 - 1) * (VAR_0 - 3) - 1) + VAR_1;
}
