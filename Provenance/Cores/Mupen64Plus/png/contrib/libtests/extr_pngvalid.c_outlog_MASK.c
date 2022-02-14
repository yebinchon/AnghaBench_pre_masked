
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log8; scalar_t__ log16; scalar_t__ calculations_use_input_precision; } ;
typedef TYPE_1__ png_modifier ;



__attribute__((used)) static double FUNC_0(const png_modifier *VAR_0, int VAR_1, int VAR_2)
{



   if (VAR_2 <= 8)
   {
      if (VAR_0->log8 == 0)
         return 256;

      if (VAR_2 < 8)
         return VAR_0->log8 / 255 * ((1<<VAR_2)-1);

      return VAR_0->log8;
   }

   if ((VAR_0->calculations_use_input_precision ? VAR_1 : VAR_2) == 16)
   {
      if (VAR_0->log16 == 0)
         return 65536;

      return VAR_0->log16;
   }




   if (VAR_0->log8 == 0)
      return 65536;

   return VAR_0->log8 * 257;
}
