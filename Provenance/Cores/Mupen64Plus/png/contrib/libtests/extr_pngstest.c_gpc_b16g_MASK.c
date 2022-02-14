
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double ig; double dg; } ;
struct TYPE_6__ {int a; double r; double g; double b; } ;
typedef TYPE_1__ Pixel ;
typedef TYPE_2__ Background ;


 double FUNC_0 (double) ;

__attribute__((used)) static void
FUNC_1(Pixel *VAR_0, const Pixel *VAR_1, const Background *VAR_2)
{
   if (VAR_1->a <= 0)
      VAR_0->r = VAR_0->g = VAR_0->b = VAR_2->ig;

   else
   {
      double VAR_3 = VAR_1->a/65535.;
      double VAR_4 = 1-VAR_3;

      VAR_3 /= 65535;
      VAR_0->r = VAR_0->g = VAR_0->b = FUNC_0(VAR_1->g * VAR_3 + VAR_2->dg * VAR_4);
   }

   VAR_0->a = 255;
}
