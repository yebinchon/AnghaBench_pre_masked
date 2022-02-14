
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t ig; int dg; } ;
struct TYPE_6__ {int a; size_t r; size_t g; size_t b; } ;
typedef TYPE_1__ Pixel ;
typedef TYPE_2__ Background ;


 double FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (double) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_2(Pixel *VAR_1, const Pixel *VAR_2, const Background *VAR_3)
{
   if (VAR_2->a <= 0)
      VAR_1->r = VAR_1->g = VAR_1->b = VAR_3->ig;

   else if (VAR_2->a >= 255)
   {
      if (VAR_2->r == VAR_2->g && VAR_2->g == VAR_2->b)
         VAR_1->r = VAR_1->g = VAR_1->b = VAR_2->g;

      else
         VAR_1->r = VAR_1->g = VAR_1->b = FUNC_1(FUNC_0(
            VAR_0[VAR_2->r], VAR_0[VAR_2->g], VAR_0[VAR_2->b]));
   }

   else
   {
      double VAR_4 = VAR_2->a/255.;

      VAR_1->r = VAR_1->g = VAR_1->b = FUNC_1(VAR_4 * FUNC_0(VAR_0[VAR_2->r],
         VAR_0[VAR_2->g], VAR_0[VAR_2->b]) + VAR_3->dg * (1-VAR_4));
   }

   VAR_1->a = 255;
}
