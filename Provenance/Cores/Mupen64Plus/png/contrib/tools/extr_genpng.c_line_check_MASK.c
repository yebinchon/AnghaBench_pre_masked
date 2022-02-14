
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(double VAR_0, double VAR_1, double VAR_2, double VAR_3, double VAR_4, double VAR_5,
   double VAR_6, double VAR_7)
{

   double VAR_8 = VAR_4 - VAR_2;
   double VAR_9 = VAR_5 - VAR_3;
   double VAR_10 = VAR_8*VAR_8 + VAR_9*VAR_9;
   double VAR_11, VAR_12;

   VAR_0 -= VAR_2;
   VAR_1 -= VAR_3;






   VAR_11 = VAR_0 * VAR_9 - VAR_1 * VAR_8;







   if (VAR_11*VAR_11 >= (VAR_6+VAR_7)*(VAR_6+VAR_7)*VAR_10)
      return 0;






   VAR_12 = VAR_8 * VAR_0 + VAR_9 * VAR_1;
   return VAR_12 > -VAR_7 && VAR_12 < VAR_10+VAR_7;
}
