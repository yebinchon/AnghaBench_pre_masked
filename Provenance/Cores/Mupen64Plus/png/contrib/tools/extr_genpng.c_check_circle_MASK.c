
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg {int width; } ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct arg const*,double,double,double) ;

__attribute__((used)) static int
FUNC_1(const struct arg *VAR_3, double VAR_4, double VAR_5)
{

   double VAR_6 = VAR_3->width/2;

   if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6+VAR_0) == 0)
   {
      VAR_6 -= VAR_0;

      if (VAR_6 > 0 && FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6) == 0)
         return VAR_1;


      return 0;
   }

   else
      return VAR_2;
}
