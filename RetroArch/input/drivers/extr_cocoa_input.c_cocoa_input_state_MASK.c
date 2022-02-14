
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {size_t key; int joyaxis; int joykey; } ;
struct TYPE_11__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
typedef int int16_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;
struct TYPE_12__ {TYPE_4__* joypad; TYPE_4__* sec_joypad; } ;
typedef TYPE_3__ cocoa_input_data_t ;
struct TYPE_13__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_10__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;


 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 unsigned int VAR_5 ;




 scalar_t__ FUNC_0 (int ) ;
 int * VAR_6 ;
 int FUNC_1 (TYPE_3__*,unsigned int) ;
 int FUNC_2 (TYPE_3__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 size_t* VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int const) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int const) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int const) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_13(void *VAR_8,
      rarch_joypad_info_t VAR_9,
      const struct retro_keybind **VAR_10, unsigned VAR_11,
      unsigned VAR_12, unsigned VAR_13, unsigned VAR_14)
{
   cocoa_input_data_t *VAR_15 = (cocoa_input_data_t*)VAR_8;

   switch (VAR_12)
   {
      case 131:
         if (VAR_14 == VAR_5)
         {
            unsigned VAR_16;
            int16_t VAR_17 = 0;
            for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
            {

               const uint64_t VAR_18 = (VAR_10[VAR_11][VAR_16].joykey != VAR_1)
                  ? VAR_10[VAR_11][VAR_16].joykey : VAR_9.auto_binds[VAR_16].joykey;
               const uint32_t VAR_19 = (VAR_10[VAR_11][VAR_16].joyaxis != VAR_0)
                  ? VAR_10[VAR_11][VAR_16].joyaxis : VAR_9.auto_binds[VAR_16].joyaxis;

               if (VAR_6[VAR_7[VAR_10[VAR_11][VAR_16].key]])
               {
                  VAR_17 |= (1 << VAR_16);
                  continue;
               }

               if ((uint16_t)VAR_18 != VAR_1 && VAR_15->joypad->button(VAR_9.joy_idx, (uint16_t)VAR_18))
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

            const uint64_t VAR_20 = (VAR_10[VAR_11][VAR_14].joykey != VAR_1)
               ? VAR_10[VAR_11][VAR_14].joykey : VAR_9.auto_binds[VAR_14].joykey;
            const uint32_t VAR_21 = (VAR_10[VAR_11][VAR_14].joyaxis != VAR_0)
               ? VAR_10[VAR_11][VAR_14].joyaxis : VAR_9.auto_binds[VAR_14].joyaxis;
            if (VAR_14 < VAR_2)
               if (VAR_6[VAR_7[VAR_10[VAR_11][VAR_14].key]])
                  return 1;
            if ((uint16_t)VAR_20 != VAR_1 && VAR_15->joypad->button(
                     VAR_9.joy_idx, (uint16_t)VAR_20))
               return 1;
            if (((float)FUNC_0(VAR_15->joypad->axis(VAR_9.joy_idx, VAR_21)) / 0x8000) > VAR_9.axis_threshold)
               return 1;






         }
         break;
      case 132:
         {
            int16_t VAR_22 = 0;




            if (!VAR_22 && VAR_10[VAR_11])
               VAR_22 = FUNC_4(VAR_15->joypad, VAR_9, VAR_11,
                     VAR_13, VAR_14, VAR_10[VAR_11]);
            return VAR_22;
         }
      case 130:
         return (VAR_14 < VAR_4) && VAR_6[VAR_7[(enum retro_key)VAR_14]];
      case 129:
         return FUNC_1(VAR_15, VAR_14);
      case 134:
         return FUNC_2(VAR_15, VAR_14);
      case 128:
      case 133:
         return FUNC_3(VAR_15, VAR_12, VAR_13, VAR_14);
   }

   return 0;
}
