
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {int key; int valid; int joyaxis; int joykey; } ;
struct TYPE_9__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
struct TYPE_10__ {TYPE_6__* joypad; int * state; } ;
typedef TYPE_3__ linuxraw_input_t ;
typedef int int16_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_11__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_8__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_2__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_2 (TYPE_3__*,struct retro_keybind const*,unsigned int,unsigned int) ;
 size_t* VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int const) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_7(void *VAR_6,
      rarch_joypad_info_t VAR_7,
      const struct retro_keybind **VAR_8, unsigned VAR_9,
      unsigned VAR_10, unsigned VAR_11, unsigned VAR_12)
{
   linuxraw_input_t *VAR_13 = (linuxraw_input_t*)VAR_6;

   switch (VAR_10)
   {
      case 128:
         if (VAR_12 == VAR_4)
         {
            unsigned VAR_14;
            int16_t VAR_15 = 0;
            for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
            {

               const uint64_t VAR_16 = (VAR_8[VAR_9][VAR_14].joykey != VAR_1)
                  ? VAR_8[VAR_9][VAR_14].joykey : VAR_7.auto_binds[VAR_14].joykey;
               const uint32_t VAR_17 = (VAR_8[VAR_9][VAR_14].joyaxis != VAR_0)
                  ? VAR_8[VAR_9][VAR_14].joyaxis : VAR_7.auto_binds[VAR_14].joyaxis;

               if ((VAR_8[VAR_9]->valid &&
                        VAR_13->state[VAR_5[
                        (enum retro_key)VAR_8[VAR_9][VAR_14].key]]
                   ))
               {
                  VAR_15 |= (1 << VAR_14);
                  continue;
               }

               if ((uint16_t)VAR_16 != VAR_1 && VAR_13->joypad->button(VAR_7.joy_idx, (uint16_t)VAR_16))
               {
                  VAR_15 |= (1 << VAR_14);
                  continue;
               }
               if (((float)FUNC_0(VAR_13->joypad->axis(VAR_7.joy_idx, VAR_17)) / 0x8000) > VAR_7.axis_threshold)
               {
                  VAR_15 |= (1 << VAR_14);
                  continue;
               }
            }

            return VAR_15;
         }
         else
         {

            const uint64_t VAR_18 = (VAR_8[VAR_9][VAR_12].joykey != VAR_1)
               ? VAR_8[VAR_9][VAR_12].joykey : VAR_7.auto_binds[VAR_12].joykey;
            const uint32_t VAR_19 = (VAR_8[VAR_9][VAR_12].joyaxis != VAR_0)
               ? VAR_8[VAR_9][VAR_12].joyaxis : VAR_7.auto_binds[VAR_12].joyaxis;
            if (((VAR_12 < VAR_2) && VAR_8[VAR_9]->valid &&
                     VAR_13->state[VAR_5[(enum retro_key)VAR_8[VAR_9][VAR_12].key]]
                ))
               return 1;

            if ((uint16_t)VAR_18 != VAR_1 && VAR_13->joypad->button(VAR_7.joy_idx, (uint16_t)VAR_18))
               return 1;
            if (((float)FUNC_0(VAR_13->joypad->axis(VAR_7.joy_idx, VAR_19)) / 0x8000) > VAR_7.axis_threshold)
               return 1;
         }
         break;
      case 129:
         {
            int16_t VAR_20 = FUNC_2(VAR_13, VAR_8[VAR_9], VAR_11, VAR_12);
            if (!VAR_20 && VAR_8[VAR_9])
               VAR_20 = FUNC_1(VAR_13->joypad,
                     VAR_7, VAR_9, VAR_11, VAR_12, VAR_8[VAR_9]);
            return VAR_20;
         }
   }

   return 0;
}
