
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {int joyaxis; int joykey; } ;
struct TYPE_8__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
typedef int int16_t ;
struct TYPE_9__ {TYPE_4__* joypad; } ;
typedef TYPE_3__ ctr_input_t ;
struct TYPE_10__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_7__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_2__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_6(void *VAR_4,
      rarch_joypad_info_t VAR_5,
      const struct retro_keybind **VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      unsigned VAR_9, unsigned VAR_10)
{
   ctr_input_t *VAR_11 = (ctr_input_t*)VAR_4;

   if (VAR_7 > 0)
      return 0;

   switch (VAR_8)
   {
      case 128:
         if (VAR_10 == VAR_3)
         {
            unsigned VAR_12;
            int16_t VAR_13 = 0;
            for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
            {

               const uint64_t VAR_14 = (VAR_6[VAR_7][VAR_12].joykey != VAR_1)
                  ? VAR_6[VAR_7][VAR_12].joykey : VAR_5.auto_binds[VAR_12].joykey;
               const uint32_t VAR_15 = (VAR_6[VAR_7][VAR_12].joyaxis != VAR_0)
                  ? VAR_6[VAR_7][VAR_12].joyaxis : VAR_5.auto_binds[VAR_12].joyaxis;

               if ((uint16_t)VAR_14 != VAR_1 &&
                     VAR_11->joypad->button(VAR_5.joy_idx, (uint16_t)VAR_14))
               {
                  VAR_13 |= (1 << VAR_12);
                  continue;
               }
               if (((float)FUNC_0(VAR_11->joypad->axis(VAR_5.joy_idx, VAR_15)) / 0x8000) > VAR_5.axis_threshold)
               {
                  VAR_13 |= (1 << VAR_12);
                  continue;
               }
            }

            return VAR_13;
         }
         else
         {

            const uint64_t VAR_16 = (VAR_6[VAR_7][VAR_10].joykey != VAR_1)
               ? VAR_6[VAR_7][VAR_10].joykey : VAR_5.auto_binds[VAR_10].joykey;
            const uint32_t VAR_17 = (VAR_6[VAR_7][VAR_10].joyaxis != VAR_0)
               ? VAR_6[VAR_7][VAR_10].joyaxis : VAR_5.auto_binds[VAR_10].joyaxis;

            if ((uint16_t)VAR_16 != VAR_1 && VAR_11->joypad->button(VAR_5.joy_idx, (uint16_t)VAR_16))
               return 1;
            if (((float)FUNC_0(VAR_11->joypad->axis(VAR_5.joy_idx, VAR_17)) / 0x8000) > VAR_5.axis_threshold)
               return 1;
         }
         break;
      case 129:
         if (VAR_6[VAR_7])
            return FUNC_1(VAR_11->joypad,
                  VAR_5, VAR_7, VAR_9, VAR_10, VAR_6[VAR_7]);
         break;
   }

   return 0;
}
