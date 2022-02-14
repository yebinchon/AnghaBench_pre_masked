
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float menu_scale_factor; } ;
struct TYPE_5__ {TYPE_1__ floats; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (double) ;

float FUNC_2(unsigned VAR_1, unsigned VAR_2)
{
   static unsigned VAR_3 = 0;
   static unsigned VAR_4 = 0;
   static float VAR_5 = 0.0f;
   static bool VAR_6 = 0;
   settings_t *VAR_7 = FUNC_0();







   if (!VAR_6 ||
       (VAR_1 != VAR_3) ||
       (VAR_2 != VAR_4))
   {

      VAR_5 = (float)(
            FUNC_1((double)((VAR_1 * VAR_1) + (VAR_2 * VAR_2))) /
            VAR_0);

      VAR_6 = 1;
      VAR_3 = VAR_1;
      VAR_4 = VAR_2;
   }


   if (VAR_7)
      return VAR_5 * ((VAR_7->floats.menu_scale_factor > 0.0001f) ?
            VAR_7->floats.menu_scale_factor : 1.0f);

   return VAR_5;
}
