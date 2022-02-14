
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int joypad; } ;
typedef TYPE_1__ udev_input_t ;
typedef int udev_input_mouse_t ;
struct retro_keybind {int dummy; } ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;

 unsigned int VAR_14 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_1 (struct retro_keybind const*,unsigned int,unsigned int) ;
 int * FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,int ,struct retro_keybind const*,unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,unsigned int,unsigned int,int) ;
 int FUNC_9 (TYPE_1__*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int16_t FUNC_10(void *VAR_15,
      rarch_joypad_info_t VAR_16,
      const struct retro_keybind **VAR_17,
      unsigned VAR_18, unsigned VAR_19, unsigned VAR_20, unsigned VAR_21)
{
   udev_input_t *VAR_22 = (udev_input_t*)VAR_15;

   switch (VAR_19)
   {
      case 132:
         if (VAR_21 == VAR_14)
         {
            unsigned VAR_23;
            int16_t VAR_24 = 0;
            for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++)
            {
               if (FUNC_3(
                        VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_23))
               {
                  VAR_24 |= (1 << VAR_23);
                  continue;
               }
            }

            return VAR_24;
         }
         else
         {
            if (VAR_21 < VAR_0)
               if (FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_21))
                  return 1;
         }
         break;
      case 150:
         {
            int16_t VAR_25 = FUNC_1(VAR_17[VAR_18], VAR_20, VAR_21);
            if (!VAR_25 && VAR_17[VAR_18])
               VAR_25 = FUNC_0(VAR_22->joypad,
                        VAR_16, VAR_18, VAR_20, VAR_21, VAR_17[VAR_18]);
            return VAR_25;
         }
      case 131:
         return (VAR_21 < VAR_13) && FUNC_4(VAR_22, VAR_21);

      case 129:
         return FUNC_8(VAR_22, VAR_18, VAR_21, 0);
      case 152:
         return FUNC_8(VAR_22, VAR_18, VAR_21, 1);

      case 128:
         if (VAR_20 == 0)
            return FUNC_9(VAR_22, VAR_18, VAR_21, 0);
         break;
      case 151:
         if (VAR_20 == 0)
            return FUNC_9(VAR_22, VAR_18, VAR_21, 1);
         break;

      case 130:
         switch ( VAR_21 )
         {

            case 139:
            case 138:
            case 142:
               return FUNC_5( VAR_22, VAR_18, VAR_21 );


            case 135:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_12);
            case 140:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_9);
            case 149:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_2);
            case 148:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_3);
            case 147:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_4);
            case 136:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_11);
            case 137:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_10);
            case 143:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_8);
            case 146:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_5);
            case 145:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_6);
            case 144:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_7);


            case 134:
               {
                  udev_input_mouse_t *VAR_26 = FUNC_2(VAR_22, VAR_18);
                  return (VAR_26) ? FUNC_6(VAR_26) : 0;
               }
            case 133:
               {
                  udev_input_mouse_t *VAR_27 = FUNC_2(VAR_22, VAR_18);
                  return (VAR_27) ? FUNC_7(VAR_27) : 0;
               }
            case 141:
               return FUNC_3(VAR_22, VAR_16, VAR_17[VAR_18], VAR_18, VAR_11);

         }
         break;
   }

   return 0;
}
