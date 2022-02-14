
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t ir; size_t ig; size_t ib; int dr; int dg; int db; } ;
struct TYPE_6__ {int a; size_t r; size_t g; size_t b; } ;
typedef TYPE_1__ Pixel ;
typedef TYPE_2__ Background ;


 void* FUNC_0 (double) ;
 double* VAR_0 ;

__attribute__((used)) static void
FUNC_1(Pixel *VAR_1, const Pixel *VAR_2, const Background *VAR_3)
{
   if (VAR_2->a <= 0)
   {
      VAR_1->r = VAR_3->ir;
      VAR_1->g = VAR_3->ig;
      VAR_1->b = VAR_3->ib;
   }

   else if (VAR_2->a >= 255)
   {
      VAR_1->r = VAR_2->r;
      VAR_1->g = VAR_2->g;
      VAR_1->b = VAR_2->b;
   }

   else
   {
      double VAR_4 = VAR_2->a / 255.;

      VAR_1->r = FUNC_0(VAR_0[VAR_2->r] * VAR_4 + VAR_3->dr * (1-VAR_4));
      VAR_1->g = FUNC_0(VAR_0[VAR_2->g] * VAR_4 + VAR_3->dg * (1-VAR_4));
      VAR_1->b = FUNC_0(VAR_0[VAR_2->b] * VAR_4 + VAR_3->db * (1-VAR_4));
   }

   VAR_1->a = 255;
}
