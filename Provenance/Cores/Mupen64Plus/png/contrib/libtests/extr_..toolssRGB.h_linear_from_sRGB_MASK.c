
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,double) ;

__attribute__((used)) static double
FUNC_1(double VAR_0)
{
   if (VAR_0 <= 0.04045)
      return VAR_0 / 12.92;

   else
      return FUNC_0((VAR_0+0.055)/1.055, 2.4);
}
