
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* joypad; } ;
typedef TYPE_2__ xdk_input_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {int joyaxis; int joykey; } ;
struct TYPE_9__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_3__ rarch_joypad_info_t ;
typedef int int16_t ;
struct TYPE_10__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_7__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;

 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_6(void *VAR_5,
      rarch_joypad_info_t VAR_6,
      const struct retro_keybind **VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      unsigned VAR_10, unsigned VAR_11)
{
   xdk_input_t *VAR_12 = (xdk_input_t*)VAR_5;

   if (VAR_8 >= VAR_1)
      return 0;

   switch (VAR_9)
   {
      case 128:
         if (VAR_11 == VAR_4)
         {
            unsigned VAR_13;
            int16_t VAR_14 = 0;

            for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
            {

               const uint64_t VAR_15 = (VAR_7[VAR_8][VAR_13].joykey != VAR_2)
                  ? VAR_7[VAR_8][VAR_13].joykey : VAR_6.auto_binds[VAR_13].joykey;
               const uint32_t VAR_16 = (VAR_7[VAR_8][VAR_13].joyaxis != VAR_0)
                  ? VAR_7[VAR_8][VAR_13].joyaxis : VAR_6.auto_binds[VAR_13].joyaxis;

               if ((uint16_t)VAR_15 != VAR_2 && VAR_12->joypad->button(VAR_6.joy_idx, (uint16_t)VAR_15))
               {
                  VAR_14 |= (1 << VAR_13);
                  continue;
               }
               if (((float)FUNC_0(VAR_12->joypad->axis(VAR_6.joy_idx, VAR_16)) / 0x8000) > VAR_6.axis_threshold)
               {
                  VAR_14 |= (1 << VAR_13);
                  continue;
               }
            }

            return VAR_14;
         }
         else
         {

            const uint64_t VAR_17 = (VAR_7[VAR_8][VAR_11].joykey != VAR_2)
               ? VAR_7[VAR_8][VAR_11].joykey : VAR_6.auto_binds[VAR_11].joykey;
            const uint32_t VAR_18 = (VAR_7[VAR_8][VAR_11].joyaxis != VAR_0)
               ? VAR_7[VAR_8][VAR_11].joyaxis : VAR_6.auto_binds[VAR_11].joyaxis;

            if ((uint16_t)VAR_17 != VAR_2 && VAR_12->joypad->button(VAR_6.joy_idx, (uint16_t)VAR_17))
               return 1;
            if (((float)FUNC_0(VAR_12->joypad->axis(VAR_6.joy_idx, VAR_18)) / 0x8000) > VAR_6.axis_threshold)
               return 1;
         }
         break;
      case 129:
         if (VAR_7[VAR_8])
            return FUNC_1(VAR_12->joypad, VAR_6, VAR_8, VAR_10, VAR_11, VAR_7[VAR_8]);
         break;
   }

   return 0;
}
