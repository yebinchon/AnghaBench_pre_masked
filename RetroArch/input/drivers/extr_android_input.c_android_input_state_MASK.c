
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {int joykey; int joyaxis; } ;
struct TYPE_12__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_3__ rarch_joypad_info_t ;
typedef int int16_t ;
struct TYPE_13__ {unsigned int pointer_count; TYPE_2__* pointer; TYPE_5__* joypad; } ;
typedef TYPE_4__ android_input_t ;
struct TYPE_14__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;
struct TYPE_11__ {int x; int y; int full_x; int full_y; } ;
struct TYPE_10__ {int joyaxis; int joykey; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;


 unsigned int VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;

 unsigned int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct retro_keybind const*,unsigned int) ;
 int FUNC_4 (TYPE_4__*,unsigned int) ;
 int FUNC_5 (TYPE_4__*,unsigned int) ;
 struct retro_keybind** VAR_9 ;
 int FUNC_6 (TYPE_5__*,TYPE_3__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int * VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int const) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_11(void *VAR_11,
      rarch_joypad_info_t VAR_12,
      const struct retro_keybind **VAR_13, unsigned VAR_14, unsigned VAR_15,
      unsigned VAR_16, unsigned VAR_17)
{
   android_input_t *VAR_18 = (android_input_t*)VAR_11;

   switch (VAR_15)
   {
      case 132:
         if (VAR_17 == VAR_7)
         {
            unsigned VAR_19;
            int16_t VAR_20 = 0;
            for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++)
            {

               const uint64_t VAR_21 = (VAR_13[VAR_14][VAR_19].joykey != VAR_3)
                  ? VAR_13[VAR_14][VAR_19].joykey : VAR_12.auto_binds[VAR_19].joykey;
               const uint32_t VAR_22 = (VAR_13[VAR_14][VAR_19].joyaxis != VAR_2)
                  ? VAR_13[VAR_14][VAR_19].joyaxis : VAR_12.auto_binds[VAR_19].joyaxis;
               if ((uint16_t)VAR_21 != VAR_3 && VAR_18->joypad->button(
                        VAR_12.joy_idx, (uint16_t)VAR_21))
               {
                  VAR_20 |= (1 << VAR_19);
                  continue;
               }
               if (((float)FUNC_1(VAR_18->joypad->axis(
                              VAR_12.joy_idx, VAR_22)) / 0x8000) > VAR_12.axis_threshold)
               {
                  VAR_20 |= (1 << VAR_19);
                  continue;
               }
               if (FUNC_3(VAR_13[VAR_14], VAR_19))
                  VAR_20 |= (1 << VAR_19);
            }
            return VAR_20;
         }
         else
         {

            const uint64_t VAR_23 = (VAR_13[VAR_14][VAR_17].joykey != VAR_3)
               ? VAR_13[VAR_14][VAR_17].joykey : VAR_12.auto_binds[VAR_17].joykey;
            const uint32_t VAR_24 = (VAR_13[VAR_14][VAR_17].joyaxis != VAR_2)
               ? VAR_13[VAR_14][VAR_17].joyaxis : VAR_12.auto_binds[VAR_17].joyaxis;
            if ((uint16_t)VAR_23 != VAR_3 && VAR_18->joypad->button(
                     VAR_12.joy_idx, (uint16_t)VAR_23))
               return 1;
            if (((float)FUNC_1(VAR_18->joypad->axis(
                           VAR_12.joy_idx, VAR_24)) / 0x8000) > VAR_12.axis_threshold)
               return 1;
            if (FUNC_3(VAR_13[VAR_14], VAR_17))
               return 1;
         }
         break;
      case 137:
         if (VAR_13[VAR_14])
            return FUNC_6(VAR_18->joypad, VAR_12,
                  VAR_14, VAR_16, VAR_17, VAR_13[VAR_14]);
         break;
      case 131:
         return (VAR_17 < VAR_6) && FUNC_0(VAR_8[VAR_1], VAR_10[VAR_17]);
      case 129:
         return FUNC_5(VAR_18, VAR_17);
      case 130:
         return FUNC_4(VAR_18, VAR_17);
      case 128:
         switch (VAR_17)
         {
            case 134:
               return VAR_18->pointer[VAR_16].x;
            case 133:
               return VAR_18->pointer[VAR_16].y;
            case 135:
               return (VAR_16 < VAR_18->pointer_count) &&
                  (VAR_18->pointer[VAR_16].x != -0x8000) &&
                  (VAR_18->pointer[VAR_16].y != -0x8000);
            case 136:
               return VAR_18->pointer_count;
            case 139:
            {
               const struct retro_keybind *VAR_25 = &VAR_9[0][VAR_5];
               if (VAR_25->joykey == 0)
                  return FUNC_2(VAR_0);
            }
         }
         break;
      case 138:
         switch (VAR_17)
         {
            case 134:
               return VAR_18->pointer[VAR_16].full_x;
            case 133:
               return VAR_18->pointer[VAR_16].full_y;
            case 135:
               return (VAR_16 < VAR_18->pointer_count) &&
                  (VAR_18->pointer[VAR_16].full_x != -0x8000) &&
                  (VAR_18->pointer[VAR_16].full_y != -0x8000);
            case 136:
               return VAR_18->pointer_count;
            case 139:
               {
                  const struct retro_keybind *VAR_26 = &VAR_9[0][VAR_5];
                  if (VAR_26->joykey == 0)
                     return FUNC_2(VAR_0);
               }
         }
         break;
   }

   return 0;
}
