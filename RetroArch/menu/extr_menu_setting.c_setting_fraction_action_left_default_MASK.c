
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ menu_navigation_wraparound_enable; } ;
struct TYPE_11__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_9__ {double* fraction; } ;
struct TYPE_10__ {TYPE_2__ target; } ;
struct TYPE_12__ {double min; double step; double max; TYPE_3__ value; scalar_t__ enforce_minrange; } ;
typedef TYPE_5__ rarch_setting_t ;


 TYPE_4__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(
      rarch_setting_t *VAR_0, bool VAR_1)
{
   double VAR_2 = 0.0f;

   if (!VAR_0)
      return -1;

   VAR_2 = VAR_0->min;

   (void)VAR_1;

   *VAR_0->value.target.fraction = *VAR_0->value.target.fraction - VAR_0->step;

   if (VAR_0->enforce_minrange)
   {
      if (*VAR_0->value.target.fraction < VAR_2)
      {
         settings_t *VAR_3 = FUNC_0();
         double VAR_4 = VAR_0->max;

         if (VAR_3 && VAR_3->bools.menu_navigation_wraparound_enable)
            *VAR_0->value.target.fraction = VAR_4;
         else
            *VAR_0->value.target.fraction = VAR_2;
      }
   }

   return 0;
}
