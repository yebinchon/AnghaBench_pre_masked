
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct retro_keybind {size_t key; int joyaxis; int joykey; } ;
struct TYPE_15__ {float axis_threshold; int joy_idx; TYPE_1__* auto_binds; } ;
typedef TYPE_2__ rarch_joypad_info_t ;
typedef int int16_t ;
struct TYPE_16__ {TYPE_11__* joypad; int key_state; } ;
typedef TYPE_3__ input_ctx_wayland_data_t ;
struct TYPE_14__ {int joyaxis; int joykey; } ;
struct TYPE_13__ {int (* axis ) (int ,int const) ;int (* button ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;


 unsigned int VAR_4 ;

 unsigned int VAR_5 ;





 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_11__*,TYPE_2__,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_3 (TYPE_3__*,struct retro_keybind const*,unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_3__*,unsigned int) ;
 int FUNC_5 (TYPE_3__*,unsigned int,int) ;
 int FUNC_6 (TYPE_3__*,unsigned int,unsigned int,int) ;
 int FUNC_7 (TYPE_3__*,struct retro_keybind const**,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_3__*,unsigned int,unsigned int,int) ;
 int * VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int const) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int const) ;

__attribute__((used)) static int16_t FUNC_13(void *VAR_7,
      rarch_joypad_info_t VAR_8,
      const struct retro_keybind **VAR_9,
      unsigned VAR_10, unsigned VAR_11, unsigned VAR_12, unsigned VAR_13)
{
   input_ctx_wayland_data_t *VAR_14 = (input_ctx_wayland_data_t*)VAR_7;

   switch (VAR_11)
   {
      case 132:
         if (VAR_13 == VAR_5)
         {
            unsigned VAR_15;
            int16_t VAR_16 = 0;
            for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
            {

               const uint64_t VAR_17 = (VAR_9[VAR_10][VAR_15].joykey != VAR_2)
                  ? VAR_9[VAR_10][VAR_15].joykey : VAR_8.auto_binds[VAR_15].joykey;
               const uint32_t VAR_18 = (VAR_9[VAR_10][VAR_15].joyaxis != VAR_0)
                  ? VAR_9[VAR_10][VAR_15].joyaxis : VAR_8.auto_binds[VAR_15].joyaxis;
               if (FUNC_0(VAR_14->key_state, VAR_6[VAR_9[VAR_10][VAR_15].key]) )
               {
                  VAR_16 |= (1 << VAR_15);
                  continue;
               }

               if (VAR_9[VAR_10])
               {
                  if ((uint16_t)VAR_17 != VAR_2 && VAR_14->joypad->button(VAR_8.joy_idx, (uint16_t)VAR_17))
                  {
                     VAR_16 |= (1 << VAR_15);
                     continue;
                  }
                  if (((float)FUNC_1(VAR_14->joypad->axis(VAR_8.joy_idx, VAR_18)) / 0x8000) > VAR_8.axis_threshold)
                  {
                     VAR_16 |= (1 << VAR_15);
                     continue;
                  }
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

            if (VAR_13 < VAR_3)
               if (FUNC_0(VAR_14->key_state, VAR_6[VAR_9[VAR_10][VAR_13].key]))
                  return 1;

            if (VAR_9[VAR_10])
            {
               if ((uint16_t)VAR_19 != VAR_2 && VAR_14->joypad->button(VAR_8.joy_idx, (uint16_t)VAR_19))
                  return 1;
               if (((float)FUNC_1(VAR_14->joypad->axis(VAR_8.joy_idx, VAR_20)) / 0x8000) > VAR_8.axis_threshold)
                  return 1;
            }
         }
         break;
      case 133:
         {
            int16_t VAR_21 = FUNC_3(VAR_14, VAR_9[VAR_10], VAR_12, VAR_13);
            if (!VAR_21 && VAR_9[VAR_10])
               VAR_21 = FUNC_2(VAR_14->joypad, VAR_8, VAR_10, VAR_12, VAR_13, VAR_9[VAR_10]);
            return VAR_21;
         }
      case 131:
         return FUNC_7(VAR_14, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
      case 129:
         return FUNC_5(VAR_14, VAR_13, 0);
      case 135:
         return FUNC_5(VAR_14, VAR_13, 1);

      case 128:
         if (VAR_12 == 0)
            return FUNC_6(VAR_14, VAR_12, VAR_13,
                  VAR_11 == 134);
         break;
      case 134:
         if (VAR_12 < VAR_1)
            return FUNC_8(VAR_14, VAR_12, VAR_13,
                  VAR_11 == 134);
         break;
      case 130:
         return FUNC_4(VAR_14, VAR_13);
   }

   return 0;
}
