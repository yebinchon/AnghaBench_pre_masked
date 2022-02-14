
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_6__* joypad; } ;
typedef TYPE_2__ wiiu_input_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {int joyaxis; int joykey; } ;
struct TYPE_10__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_3__ rarch_joypad_info_t ;
typedef int int16_t ;
struct TYPE_11__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_8__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 unsigned int VAR_5 ;



 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_3__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const) ;
 int FUNC_6 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int16_t FUNC_7(void *VAR_8,
      rarch_joypad_info_t VAR_9,
      const struct retro_keybind **VAR_10,
      unsigned VAR_11, unsigned VAR_12,
      unsigned VAR_13, unsigned VAR_14)
{
   wiiu_input_t *VAR_15 = (wiiu_input_t*)VAR_8;

   if (!VAR_15 || !(VAR_11 < VAR_1) || !VAR_10 || !VAR_10[VAR_11])
      return 0;

   switch (VAR_12)
   {
      case 130:
         if (VAR_14 == VAR_5)
         {
            unsigned VAR_16;
            int16_t VAR_17 = 0;

            for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
            {

               const uint64_t VAR_18 = (VAR_10[VAR_11][VAR_16].joykey != VAR_2)
                  ? VAR_10[VAR_11][VAR_16].joykey : VAR_9.auto_binds[VAR_16].joykey;
               const uint32_t VAR_19 = (VAR_10[VAR_11][VAR_16].joyaxis != VAR_0)
                  ? VAR_10[VAR_11][VAR_16].joyaxis : VAR_9.auto_binds[VAR_16].joyaxis;

               if ((uint16_t)VAR_18 != VAR_2 && VAR_15->joypad->button(VAR_9.joy_idx, (uint16_t)VAR_18))
               {
                  VAR_17 |= (1 << VAR_16);
                  continue;
               }
               if (((float)FUNC_0(VAR_15->joypad->axis(VAR_9.joy_idx, VAR_19)) / 0x8000) > VAR_9.axis_threshold)
               {
                  VAR_17 |= (1 << VAR_16);
                  continue;
               }
            }

            return VAR_17;
         }
         else
         {

            const uint64_t VAR_20 = (VAR_10[VAR_11][VAR_14].joykey != VAR_2)
               ? VAR_10[VAR_11][VAR_14].joykey : VAR_9.auto_binds[VAR_14].joykey;
            const uint32_t VAR_21 = (VAR_10[VAR_11][VAR_14].joyaxis != VAR_0)
               ? VAR_10[VAR_11][VAR_14].joyaxis : VAR_9.auto_binds[VAR_14].joyaxis;

            if ((uint16_t)VAR_20 != VAR_2 && VAR_15->joypad->button(VAR_9.joy_idx, (uint16_t)VAR_20))
               return 1;
            if (((float)FUNC_0(VAR_15->joypad->axis(VAR_9.joy_idx, VAR_21)) / 0x8000) > VAR_9.axis_threshold)
               return 1;
         }
         break;
      case 129:
         if (VAR_14 < VAR_4 && VAR_7[VAR_14] && (VAR_6 > 0))
            return 1;
         return 0;
      case 131:
         if (VAR_10[VAR_11])
            return FUNC_1(VAR_15->joypad,
                  VAR_9, VAR_11, VAR_13, VAR_14, VAR_10[VAR_11]);
         break;
      case 128:
      case 132:
         return FUNC_6(VAR_15, VAR_14);
   }

   return 0;
}
