
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct retro_keybind {int dummy; } ;
struct TYPE_5__ {int mouse; int joypad; } ;
typedef TYPE_1__ rwebinput_input_t ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;

 unsigned int VAR_2 ;




 int FUNC_0 (int ,int ,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 int FUNC_1 (TYPE_1__*,int ,struct retro_keybind const*,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 int FUNC_4 (int *,unsigned int,int) ;
 int FUNC_5 (int *,unsigned int,int) ;

__attribute__((used)) static int16_t FUNC_6(void *VAR_3,
      rarch_joypad_info_t VAR_4,
      const struct retro_keybind **VAR_5,
      unsigned VAR_6, unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
   rwebinput_input_t *VAR_10 = (rwebinput_input_t*)VAR_3;

   switch (VAR_7)
   {
      case 131:
         if (VAR_9 == VAR_2)
         {
            unsigned VAR_11;
            int16_t VAR_12 = 0;
            for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
            {
               if (FUNC_2(
                        VAR_10, VAR_4, VAR_6, VAR_5[VAR_6], VAR_11))
               {
                  VAR_12 |= (1 << VAR_11);
                  continue;
               }
            }

            return VAR_12;
         }
         else
         {
            if (VAR_9 < VAR_0)
               if (FUNC_2(VAR_10, VAR_4, VAR_5[VAR_6],
                     VAR_6, VAR_9))
                  return 1;
         }
         break;
      case 132:
         {
            int16_t VAR_13 = FUNC_1(
                  VAR_10, VAR_4, VAR_5[VAR_6],
                  VAR_8, VAR_9);
            if (!VAR_13 && VAR_5[VAR_6])
               VAR_13 = FUNC_0(VAR_10->joypad, VAR_4, VAR_6,
                     VAR_8, VAR_9, VAR_5[VAR_6]);
            return VAR_13;
         }
      case 130:
         return FUNC_3(VAR_10, VAR_9);
      case 129:
         return FUNC_4(&VAR_10->mouse, VAR_9, 0);
      case 134:
         return FUNC_4(&VAR_10->mouse, VAR_9, 1);
      case 128:
         return FUNC_5(&VAR_10->mouse, VAR_9, 0);
      case 133:
         return FUNC_5(&VAR_10->mouse, VAR_9, 1);
   }

   return 0;
}
