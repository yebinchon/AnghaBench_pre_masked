
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg {int x1; int x2; int y1; int y2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (double,double,double,double,double,double) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(const struct arg *VAR_2, double VAR_3, double VAR_4, double VAR_5)




{
   double VAR_6 = (VAR_2->x1+VAR_2->x2)/2;
   double VAR_7 = FUNC_1(VAR_2->x1-VAR_2->x2)/2;
   double VAR_8 = (VAR_2->y1+VAR_2->y2)/2;
   double VAR_9 = FUNC_1(VAR_2->y1-VAR_2->y2)/2;

   if (FUNC_0(VAR_3, VAR_4, VAR_6-VAR_7-VAR_5, VAR_8-VAR_9-VAR_5, VAR_6+VAR_7+VAR_5, VAR_8+VAR_9+VAR_5))
   {



      VAR_7 -= VAR_5;
      VAR_9 -= VAR_5;
      if (VAR_7 > 0 && VAR_9 > 0 && FUNC_0(VAR_3, VAR_4, VAR_6-VAR_7, VAR_8-VAR_9, VAR_6+VAR_7, VAR_8+VAR_9))
         return VAR_0;

      return 0;
   }

   return VAR_1;
}
