
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int * keyboard_state; TYPE_8__* joypad; } ;
typedef TYPE_2__ switch_input_t ;
struct retro_keybind {int joyaxis; int joykey; } ;
struct TYPE_12__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_3__ rarch_joypad_info_t ;
typedef int int16_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_13__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_10__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 unsigned int VAR_5 ;




 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,TYPE_3__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 size_t* VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const) ;
 int FUNC_6 (TYPE_2__*,unsigned int,int) ;
 int FUNC_7 (TYPE_2__*,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_2__*,unsigned int,unsigned int) ;

__attribute__((used)) static int16_t FUNC_9(void *VAR_7,
      rarch_joypad_info_t VAR_8,
      const struct retro_keybind **VAR_9,
      unsigned VAR_10, unsigned VAR_11,
      unsigned VAR_12, unsigned VAR_13)
{
   switch_input_t *VAR_14 = (switch_input_t*) VAR_7;

   if (VAR_10 > VAR_1 - 1)
      return 0;

   switch (VAR_11)
   {
      case 131:
         if (VAR_13 == VAR_5)
         {
            unsigned VAR_15;
            int16_t VAR_16 = 0;
            for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
            {

               const uint64_t VAR_17 = (VAR_9[VAR_10][VAR_15].joykey != VAR_2)
                  ? VAR_9[VAR_10][VAR_15].joykey : VAR_8.auto_binds[VAR_15].joykey;
               const uint32_t VAR_18 = (VAR_9[VAR_10][VAR_15].joyaxis != VAR_0)
                  ? VAR_9[VAR_10][VAR_15].joyaxis : VAR_8.auto_binds[VAR_15].joyaxis;

               if ((uint16_t)VAR_17 != VAR_2 && VAR_14->joypad->button(VAR_8.joy_idx, (uint16_t)VAR_17))
               {
                  VAR_16 |= (1 << VAR_15);
                  continue;
               }
               if (((float)FUNC_0(VAR_14->joypad->axis(VAR_8.joy_idx, VAR_18)) / 0x8000) > VAR_8.axis_threshold)
               {
                  VAR_16 |= (1 << VAR_15);
                  continue;
               }
            }

            return VAR_16;
         }
         else
         {

            const uint64_t VAR_19 = (VAR_9[VAR_10][VAR_13].joykey != VAR_2)
               ? VAR_9[VAR_10][VAR_13].joykey : VAR_8.auto_binds[VAR_13].joykey;
            const uint32_t VAR_20 = (VAR_9[VAR_10][VAR_13].joyaxis != VAR_0)
               ? VAR_9[VAR_10][VAR_13].joyaxis : VAR_8.auto_binds[VAR_13].joyaxis;
            if ((uint16_t)VAR_19 != VAR_2 && VAR_14->joypad->button(VAR_8.joy_idx, (uint16_t)VAR_19))
               return 1;
            if (((float)FUNC_0(VAR_14->joypad->axis(VAR_8.joy_idx, VAR_20)) / 0x8000) > VAR_8.axis_threshold)
               return 1;
         }
         break;
      case 132:
         if (VAR_9[VAR_10])
            return FUNC_1(VAR_14->joypad,
                  VAR_8, VAR_10, VAR_12, VAR_13, VAR_9[VAR_10]);
         break;
   }

   return 0;
}
