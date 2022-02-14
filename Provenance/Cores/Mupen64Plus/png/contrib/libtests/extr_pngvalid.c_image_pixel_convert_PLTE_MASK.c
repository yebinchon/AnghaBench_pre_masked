
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ colour_type; int bit_depth; scalar_t__ have_tRNS; } ;
typedef TYPE_1__ image_pixel ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_0(image_pixel *VAR_3)
{
   if (VAR_3->colour_type == VAR_0)
   {
      if (VAR_3->have_tRNS)
      {
         VAR_3->colour_type = VAR_2;
         VAR_3->have_tRNS = 0;
      }
      else
         VAR_3->colour_type = VAR_1;




      VAR_3->bit_depth = 8;
   }
}
