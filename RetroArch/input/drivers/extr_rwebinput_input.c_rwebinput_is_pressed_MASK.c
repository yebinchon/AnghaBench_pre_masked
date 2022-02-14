
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
struct retro_keybind {int key; scalar_t__ joykey; scalar_t__ joyaxis; int mbutton; scalar_t__ valid; } ;
struct TYPE_11__ {TYPE_2__* joypad; int mouse; } ;
typedef TYPE_3__ rwebinput_input_t ;
struct TYPE_12__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_4__ rarch_joypad_info_t ;
struct TYPE_13__ {int keyboard_mapping_blocked; } ;
struct TYPE_10__ {int (* axis ) (int ,scalar_t__ const) ;scalar_t__ (* button ) (int ,scalar_t__) ;} ;
struct TYPE_9__ {scalar_t__ joykey; scalar_t__ joyaxis; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_8__ VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__ const) ;

__attribute__((used)) static bool FUNC_5(rwebinput_input_t *VAR_6,
   rarch_joypad_info_t VAR_7, const struct retro_keybind *VAR_8,
   unsigned VAR_9, unsigned VAR_10)
{
   if (VAR_10 < VAR_2)
   {
      const struct retro_keybind *VAR_11 = &VAR_8[VAR_10];
      int VAR_12 = VAR_11->key;

      if ((VAR_12 < VAR_4) && FUNC_1(VAR_6, VAR_12))
         if ((VAR_10 == VAR_3) || !VAR_5.keyboard_mapping_blocked)
            return 1;

      if (VAR_11->valid)
      {

         const uint64_t VAR_13 = (VAR_8[VAR_10].joykey != VAR_1)
            ? VAR_8[VAR_10].joykey : VAR_7.auto_binds[VAR_10].joykey;
         const uint32_t VAR_14 = (VAR_8[VAR_10].joyaxis != VAR_0)
            ? VAR_8[VAR_10].joyaxis : VAR_7.auto_binds[VAR_10].joyaxis;

         if (VAR_9 == 0 && !!FUNC_2(&VAR_6->mouse,
                  VAR_11->mbutton, 0))
            return 1;
         if ((uint16_t)VAR_13 != VAR_1 && VAR_6->joypad->button(VAR_7.joy_idx, (uint16_t)VAR_13))
            return 1;
         if (((float)FUNC_0(VAR_6->joypad->axis(VAR_7.joy_idx, VAR_14)) / 0x8000) > VAR_7.axis_threshold)
            return 1;
      }
   }

   return 0;
}
