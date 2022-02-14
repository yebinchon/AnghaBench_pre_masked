
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct retro_keybind {scalar_t__ joykey; scalar_t__ joyaxis; scalar_t__ key; } ;
struct TYPE_9__ {TYPE_2__* joypad; } ;
typedef TYPE_3__ sdl_input_t ;
struct TYPE_10__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_4__ rarch_joypad_info_t ;
typedef int int16_t ;
typedef enum input_device_type { ____Placeholder_input_device_type } input_device_type ;
struct TYPE_8__ {int (* axis ) (int ,scalar_t__ const) ;scalar_t__ (* button ) (int ,scalar_t__) ;} ;
struct TYPE_7__ {scalar_t__ joykey; scalar_t__ joyaxis; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__ const) ;

__attribute__((used)) static int16_t FUNC_4(sdl_input_t *VAR_5,
      rarch_joypad_info_t VAR_6,
      const struct retro_keybind *VAR_7,
      unsigned VAR_8, unsigned VAR_9, enum input_device_type *VAR_10)
{

   const uint64_t VAR_11 = (VAR_7[VAR_9].joykey != VAR_3)
      ? VAR_7[VAR_9].joykey : VAR_6.auto_binds[VAR_9].joykey;
   const uint32_t VAR_12 = (VAR_7[VAR_9].joyaxis != VAR_0)
      ? VAR_7[VAR_9].joyaxis : VAR_6.auto_binds[VAR_9].joyaxis;

   if ((VAR_7[VAR_9].key < VAR_4) && FUNC_1(VAR_7[VAR_9].key))
   {
      *VAR_10 = VAR_2;
      return 1;
   }

   if ((uint16_t)VAR_11 != VAR_3 && VAR_5->joypad->button(VAR_6.joy_idx, (uint16_t)VAR_11))
   {
      *VAR_10 = VAR_1;
      return 1;
   }

   if (((float)FUNC_0(VAR_5->joypad->axis(VAR_6.joy_idx, VAR_12)) / 0x8000) > VAR_6.axis_threshold)
   {
      *VAR_10 = VAR_1;
      return 1;
   }

   return 0;
}
