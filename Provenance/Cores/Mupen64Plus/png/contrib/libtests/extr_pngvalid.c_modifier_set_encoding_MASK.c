
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int current_gamma; int encoding_counter; int ngammas; int* gammas; unsigned int nencodings; TYPE_1__* encodings; TYPE_1__* current_encoding; scalar_t__ encoding_ignored; } ;
typedef TYPE_2__ png_modifier ;
struct TYPE_4__ {int gamma; } ;



__attribute__((used)) static void
FUNC_0(png_modifier *VAR_0)
{




   VAR_0->current_gamma = 0;
   VAR_0->current_encoding = 0;
   VAR_0->encoding_ignored = 0;


   if (VAR_0->encoding_counter > 0)
   {



      if (VAR_0->encoding_counter <= VAR_0->ngammas)
         VAR_0->current_gamma = 1/VAR_0->gammas[VAR_0->encoding_counter-1];

      else
      {
         unsigned int VAR_1 = VAR_0->encoding_counter - VAR_0->ngammas;

         if (VAR_1 >= VAR_0->nencodings)
         {
            VAR_1 %= VAR_0->nencodings;
            VAR_0->current_gamma = 1;
         }

         else
            VAR_0->current_gamma = VAR_0->encodings[VAR_1].gamma;

         VAR_0->current_encoding = VAR_0->encodings + VAR_1;
      }
   }
}
