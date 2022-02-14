
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ red; scalar_t__ green; scalar_t__ blue; } ;
struct TYPE_8__ {int alpha_sBIT; TYPE_1__ transparent; } ;
typedef TYPE_2__ standard_display ;
struct TYPE_9__ {scalar_t__ colour_type; int bit_depth; int sample_depth; scalar_t__ red; int alphaf; scalar_t__ green; scalar_t__ blue; int alpha_sBIT; scalar_t__ alphae; scalar_t__ have_tRNS; } ;
typedef TYPE_3__ image_pixel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(image_pixel *VAR_6, const standard_display *VAR_7,
   int VAR_8)
{
   if (VAR_6->colour_type == VAR_3)
      FUNC_0(VAR_6);

   if ((VAR_6->colour_type & VAR_0) == 0)
   {
      if (VAR_6->colour_type == VAR_1)
      {

            if (!VAR_8 && VAR_6->bit_depth < 8)
               VAR_6->bit_depth = VAR_6->sample_depth = 8;


         if (VAR_6->have_tRNS)
         {
            VAR_6->have_tRNS = 0;




            if (VAR_6->red == VAR_7->transparent.red)
               VAR_6->alphaf = 0;
            else
               VAR_6->alphaf = 1;
         }
         else
            VAR_6->alphaf = 1;

         VAR_6->colour_type = VAR_2;
      }

      else if (VAR_6->colour_type == VAR_4)
      {
         if (VAR_6->have_tRNS)
         {
            VAR_6->have_tRNS = 0;




            if (VAR_6->red == VAR_7->transparent.red &&
               VAR_6->green == VAR_7->transparent.green &&
               VAR_6->blue == VAR_7->transparent.blue)
               VAR_6->alphaf = 0;
            else
               VAR_6->alphaf = 1;
         }
         else
            VAR_6->alphaf = 1;

         VAR_6->colour_type = VAR_5;
      }




      VAR_6->alphae = 0;
      VAR_6->alpha_sBIT = VAR_7->alpha_sBIT;
   }
}
