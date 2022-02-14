
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct retro_keybind {int key; scalar_t__ joykey; scalar_t__ joyaxis; scalar_t__ valid; } ;
struct TYPE_11__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_3__ rarch_joypad_info_t ;
struct TYPE_12__ {TYPE_2__* joypad; } ;
typedef TYPE_4__ qnx_input_t ;
struct TYPE_13__ {int keyboard_mapping_blocked; } ;
struct TYPE_10__ {int (* axis ) (int ,scalar_t__ const) ;scalar_t__ (* button ) (int ,scalar_t__) ;} ;
struct TYPE_9__ {scalar_t__ joykey; scalar_t__ joyaxis; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_8__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__ const) ;

__attribute__((used)) static bool FUNC_4(qnx_input_t *VAR_5,
      rarch_joypad_info_t VAR_6,
      const struct retro_keybind *VAR_7,
      unsigned VAR_8, unsigned VAR_9)
{
   const struct retro_keybind *VAR_10 = &VAR_7[VAR_9];
   int VAR_11 = VAR_10->key;

   if (VAR_9 >= VAR_2)
      return 0;

   if (FUNC_1(VAR_5, VAR_11))
      if ((VAR_9 == VAR_3) || !VAR_4.keyboard_mapping_blocked)
         return 1;

   if (VAR_7 && VAR_7[VAR_9].valid)
   {

      const uint64_t VAR_12 = (VAR_7[VAR_9].joykey != VAR_1)
         ? VAR_7[VAR_9].joykey : VAR_6.auto_binds[VAR_9].joykey;
      const uint32_t VAR_13 = (VAR_7[VAR_9].joyaxis != VAR_0)
         ? VAR_7[VAR_9].joyaxis : VAR_6.auto_binds[VAR_9].joyaxis;

      if ((uint16_t)VAR_12 != VAR_1 && VAR_5->joypad->button(VAR_6.joy_idx, (uint16_t)VAR_12))
         return 1;
      if (((float)FUNC_0(VAR_5->joypad->axis(VAR_6.joy_idx, VAR_13)) / 0x8000) > VAR_6.axis_threshold)
         return 1;
   }

   return 0;
}
