
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int* gamepads; } ;
typedef TYPE_2__ xdk_input_t ;
typedef void* uint16_t ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;
struct TYPE_6__ {void* wRightMotorSpeed; void* wLeftMotorSpeed; } ;
struct TYPE_8__ {TYPE_1__ Rumble; void* wRightMotorSpeed; void* wLeftMotorSpeed; } ;
typedef TYPE_3__ XINPUT_VIBRATION ;
typedef TYPE_3__ XINPUT_FEEDBACK ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_3, unsigned VAR_4,
      enum retro_rumble_effect VAR_5, uint16_t VAR_6)
{





   xdk_input_t *VAR_7 = (xdk_input_t*)VAR_3;
   bool VAR_8 = 0;

   (void)VAR_7;
   return VAR_8;
}
