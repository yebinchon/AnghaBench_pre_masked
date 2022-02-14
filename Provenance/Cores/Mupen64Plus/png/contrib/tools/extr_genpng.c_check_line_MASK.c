
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg {int width; int y2; int x2; int y1; int x1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (double,double,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(const struct arg *VAR_3, double VAR_4, double VAR_5)
{



   if (FUNC_0(VAR_4, VAR_5, VAR_3->x1, VAR_3->y1, VAR_3->x2, VAR_3->y2, VAR_3->width/2,
       VAR_0))
   {



      if (VAR_3->width > 2*VAR_0 &&
          FUNC_0(VAR_4, VAR_5, VAR_3->x1, VAR_3->y1, VAR_3->x2, VAR_3->y2, VAR_3->width/2,
             -VAR_0))
         return VAR_1;

      return 0;
   }

   return VAR_2;
}
