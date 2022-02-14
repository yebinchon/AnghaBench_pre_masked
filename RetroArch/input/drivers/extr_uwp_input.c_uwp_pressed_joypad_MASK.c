
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* joypad; } ;
typedef TYPE_3__ uwp_input_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct retro_keybind {scalar_t__ key; scalar_t__ joykey; scalar_t__ joyaxis; int mbutton; scalar_t__ valid; } ;
struct TYPE_11__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_4__ rarch_joypad_info_t ;
struct TYPE_12__ {int keyboard_mapping_blocked; } ;
struct TYPE_9__ {int (* axis ) (int ,scalar_t__ const) ;scalar_t__ (* button ) (int ,scalar_t__) ;} ;
struct TYPE_8__ {scalar_t__ joykey; scalar_t__ joyaxis; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_7__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__ const) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned int,int ,int) ;

__attribute__((used)) static bool FUNC_5(uwp_input_t *VAR_5,
   rarch_joypad_info_t VAR_6,
   const struct retro_keybind *VAR_7,
   unsigned VAR_8, unsigned VAR_9)
{
   const struct retro_keybind *VAR_10 = &VAR_7[VAR_9];


   if ((VAR_10->key < VAR_3) && FUNC_3(VAR_10->key))
      if ((VAR_9 == VAR_2) || !VAR_4.keyboard_mapping_blocked)
         return 1;


   if (VAR_7 && VAR_7[VAR_9].valid)
   {

      const uint64_t VAR_11 = (VAR_7[VAR_9].joykey != VAR_1)
         ? VAR_7[VAR_9].joykey : VAR_6.auto_binds[VAR_9].joykey;
      const uint32_t VAR_12 = (VAR_7[VAR_9].joyaxis != VAR_0)
         ? VAR_7[VAR_9].joyaxis : VAR_6.auto_binds[VAR_9].joyaxis;

      if (FUNC_4(VAR_8, VAR_10->mbutton, 0))
         return 1;
      if ((uint16_t)VAR_11 != VAR_1 && VAR_5->joypad->button(VAR_6.joy_idx, (uint16_t)VAR_11))
         return 1;
      if (((float)FUNC_0(VAR_5->joypad->axis(VAR_6.joy_idx, VAR_12)) / 0x8000) > VAR_6.axis_threshold)
         return 1;
   }

   return 0;
}
