
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double,double,double,double,double,double) ;

__attribute__((used)) static int
FUNC_1(double VAR_0, double VAR_1, double VAR_2, double VAR_3, double VAR_4, double VAR_5)
{
   if (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
   {

      const double VAR_6 = (VAR_2 + VAR_4)/2;
      const double VAR_7 = (VAR_3 + VAR_5)/2;
      const double VAR_8 = VAR_2 - VAR_4;
      const double VAR_9 = VAR_3 - VAR_5;

      VAR_0 = (VAR_0 - VAR_6)/VAR_8;
      VAR_1 = (VAR_1 - VAR_7)/VAR_9;




      return VAR_0*VAR_0+VAR_1*VAR_1 < .25;
   }

   return 0;
}
