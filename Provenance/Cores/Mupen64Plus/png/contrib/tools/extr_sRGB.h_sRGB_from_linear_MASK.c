
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,int) ;

__attribute__((used)) static double
FUNC_1(double VAR_0)
{
   if (VAR_0 <= 0.0031308)
      VAR_0 *= 12.92;

   else
      VAR_0 = 1.055 * FUNC_0(VAR_0, 1/2.4) - 0.055;

   return VAR_0;
}
