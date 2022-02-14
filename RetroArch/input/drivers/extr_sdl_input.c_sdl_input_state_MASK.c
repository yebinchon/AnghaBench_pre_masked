
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct retro_keybind {int dummy; } ;
struct TYPE_7__ {int joypad; } ;
typedef TYPE_1__ sdl_input_t ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;
typedef enum input_device_type { ____Placeholder_input_device_type } input_device_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;





 int FUNC_0 (int ,int ,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_1 (TYPE_1__*,struct retro_keybind const*,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ,struct retro_keybind const*,unsigned int,unsigned int,int*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (TYPE_1__*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int16_t FUNC_7(void *VAR_5,
      rarch_joypad_info_t VAR_6,
      const struct retro_keybind **VAR_7,
      unsigned VAR_8, unsigned VAR_9, unsigned VAR_10, unsigned VAR_11)
{
   enum input_device_type VAR_12 = VAR_0;
   sdl_input_t *VAR_13 = (sdl_input_t*)VAR_5;

   switch (VAR_9)
   {
      case 132:
         if (VAR_11 == VAR_4)
         {
            unsigned VAR_14;
            int16_t VAR_15 = 0;

            for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
            {
               if (FUNC_2(
                        VAR_13, VAR_6, VAR_7[VAR_8], VAR_8, VAR_14, &VAR_12))
               {
                  VAR_15 |= (1 << VAR_14);
                  continue;
               }
            }

            return VAR_15;
         }
         else
         {
            if (VAR_11 < VAR_1)
               if (FUNC_2(VAR_13,
                     VAR_6, VAR_7[VAR_8], VAR_8, VAR_11, &VAR_12))
                  return 1;
         }
         break;
      case 133:
         if (VAR_7[VAR_8])
         {
            int16_t VAR_16 = FUNC_1(VAR_13, VAR_7[VAR_8], VAR_10, VAR_11);
            if (!VAR_16)
               VAR_16 = FUNC_0(VAR_13->joypad,
                        VAR_6, VAR_8, VAR_10, VAR_11, VAR_7[VAR_8]);
            return VAR_16;
         }
         break;
      case 129:
         return FUNC_5(VAR_13, VAR_11);
      case 128:
      case 134:
         if (VAR_10 == 0)
            return FUNC_6(VAR_13, VAR_10, VAR_11,
                  VAR_9 == 134);
         break;
      case 131:
         return (VAR_11 < VAR_3) && FUNC_3(VAR_11);
      case 130:
         return FUNC_4(VAR_13, VAR_11);
   }

   return 0;
}
