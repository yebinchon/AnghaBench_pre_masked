
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float menu_scale_factor; } ;
struct TYPE_7__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {float* value; int type; } ;
typedef TYPE_3__ gfx_ctx_metrics_t ;


 float VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

float FUNC_3(unsigned VAR_3, unsigned VAR_4)
{
   static unsigned VAR_5 = 0;
   static unsigned VAR_6 = 0;
   static float VAR_7 = 0.0f;
   static bool VAR_8 = 0;
   settings_t *VAR_9 = FUNC_0();





   if (!VAR_8 ||
       (VAR_3 != VAR_5) ||
       (VAR_4 != VAR_6))
   {
      float VAR_10;
      float VAR_11;
      float VAR_12;
      gfx_ctx_metrics_t VAR_13;



      VAR_10 = (float)FUNC_1(
            (double)((VAR_3 * VAR_3) + (VAR_4 * VAR_4)));
      VAR_11 = VAR_10 / VAR_0;


      VAR_13.type = VAR_1;
      VAR_13.value = &VAR_12;

      if (FUNC_2(&VAR_13) && (VAR_12 > 0.0f))
      {
         float VAR_14;
         float VAR_15;
         VAR_14 = VAR_10 / VAR_12;
         VAR_15 = VAR_12 / VAR_2;
         if (VAR_14 > 24.0f)
         {
            float VAR_16 = (VAR_14 > 32.0f) ? 32.0f : VAR_14;
            VAR_16 = VAR_16 - 24.0f;
            VAR_16 = VAR_16 / (32.0f - 24.0f);

            VAR_7 = ((1.0f - VAR_16) * VAR_15) + (VAR_16 * VAR_11);
         }
         else if (VAR_14 < 12.0f)
         {
            float VAR_17 = VAR_14 / 12.0f;

            VAR_7 = ((1.0f - VAR_17) * VAR_11) + (VAR_17 * VAR_15);
         }
         else
            VAR_7 = VAR_15;
      }


      else
         VAR_7 = VAR_11;

      VAR_8 = 1;
      VAR_5 = VAR_3;
      VAR_6 = VAR_4;
   }


   if (VAR_9)
      return VAR_7 * ((VAR_9->floats.menu_scale_factor > 0.0001f) ?
            VAR_9->floats.menu_scale_factor : 1.0f);

   return VAR_7;
}
