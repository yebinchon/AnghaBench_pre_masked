
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int r; int g; int b; } ;
typedef TYPE_1__ Pixel ;
typedef int Background ;


 void* FUNC_0 (double) ;
 double FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(Pixel *VAR_0, const Pixel *VAR_1, const Background *VAR_2)
{
   (void)VAR_2;

   if (VAR_1->a <= 128)
   {
      VAR_0->r = VAR_0->g = VAR_0->b = 255;
      VAR_0->a = 0;
   }

   else
   {
      VAR_0->r = FUNC_0((double)VAR_1->r / VAR_1->a);
      VAR_0->g = FUNC_0((double)VAR_1->g / VAR_1->a);
      VAR_0->b = FUNC_0((double)VAR_1->b / VAR_1->a);
      VAR_0->a = FUNC_1(VAR_1->a / 257.);
   }
}
