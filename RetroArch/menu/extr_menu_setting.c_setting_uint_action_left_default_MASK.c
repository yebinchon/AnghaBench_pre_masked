
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ menu_navigation_wraparound_enable; } ;
struct TYPE_12__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_10__ {float* unsigned_integer; } ;
struct TYPE_11__ {TYPE_2__ target; } ;
struct TYPE_13__ {double min; double max; TYPE_3__ value; scalar_t__ enforce_minrange; } ;
typedef TYPE_5__ rarch_setting_t ;


 TYPE_4__* FUNC_0 () ;
 float FUNC_1 (TYPE_5__*) ;

int FUNC_2(
      rarch_setting_t *VAR_0, bool VAR_1)
{
   double VAR_2 = 0.0f;
   bool VAR_3 = 0;
   float VAR_4 = 0.0f;

   if (!VAR_0)
      return -1;

   VAR_2 = VAR_0->min;

   (void)VAR_1;

   VAR_4 = FUNC_1(VAR_0);
   VAR_3 = VAR_4 > *VAR_0->value.target.unsigned_integer;

   if (!VAR_3)
      *VAR_0->value.target.unsigned_integer =
         *VAR_0->value.target.unsigned_integer - VAR_4;

   if (VAR_0->enforce_minrange)
   {
      if (VAR_3 || *VAR_0->value.target.unsigned_integer < VAR_2)
      {
         settings_t *VAR_5 = FUNC_0();

      double VAR_6 = VAR_0->max;

         if (VAR_5 && VAR_5->bools.menu_navigation_wraparound_enable)
            *VAR_0->value.target.unsigned_integer = VAR_6;
         else
            *VAR_0->value.target.unsigned_integer = VAR_2;
      }
   }

   return 0;
}
