
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ r; int a; scalar_t__ g; scalar_t__ b; } ;
typedef TYPE_1__ Pixel ;
typedef int Background ;


 void* FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(Pixel *VAR_0, const Pixel *VAR_1, const Background *VAR_2)
{
   (void)VAR_2;

   VAR_0->r = FUNC_0(VAR_1->r, VAR_1->a);

   if (VAR_1->g == VAR_1->r)
   {
      VAR_0->g = VAR_0->r;

      if (VAR_1->b == VAR_1->r)
         VAR_0->b = VAR_0->r;

      else
         VAR_0->b = FUNC_0(VAR_1->b, VAR_1->a);
   }

   else
   {
      VAR_0->g = FUNC_0(VAR_1->g, VAR_1->a);

      if (VAR_1->b == VAR_1->r)
         VAR_0->b = VAR_0->r;

      else if (VAR_1->b == VAR_1->g)
         VAR_0->b = VAR_0->g;

      else
         VAR_0->b = FUNC_0(VAR_1->b, VAR_1->a);
   }

   VAR_0->a = 65535;
}
