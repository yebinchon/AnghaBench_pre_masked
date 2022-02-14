
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int id; int rumble_last_strength; int rumble_last_strength_weak; int rumble_last_strength_strong; } ;
typedef TYPE_2__ state_device_t ;
struct TYPE_7__ {scalar_t__ enable_device_vibration; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_10__ {TYPE_2__* pad_states; } ;
typedef TYPE_4__ android_input_t ;
struct TYPE_11__ {int doVibrate; } ;


 int FUNC_0 (int ,int *,int *,int *,int,int) ;
 TYPE_3__* FUNC_1 () ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(void *VAR_1, unsigned VAR_2,
      enum retro_rumble_effect VAR_3, uint16_t VAR_4)
{
   settings_t *VAR_5 = FUNC_1();

   if (!VAR_0 || !VAR_0->doVibrate)
      return 0;

   if (VAR_5->bools.enable_device_vibration)
   {
      static uint16_t VAR_6 = 0;
      static uint16_t VAR_7 = 0;
      static uint16_t VAR_8 = 0;

      if (VAR_2 != 0)
         return 0;

      FUNC_0(
            VAR_4,
            &VAR_6,
            &VAR_7,
            &VAR_8,
            -1,
            VAR_3);

      return 1;
   }
   else
   {
      android_input_t *VAR_9 = (android_input_t*)VAR_1;
      state_device_t *VAR_10 = VAR_9 ? &VAR_9->pad_states[VAR_2] : ((void*)0);

      if (VAR_10)
      {
         FUNC_0(
               VAR_4,
               &VAR_10->rumble_last_strength_strong,
               &VAR_10->rumble_last_strength_weak,
               &VAR_10->rumble_last_strength,
               VAR_10->id,
               VAR_3);
         return 1;
      }
   }

   return 0;
}
