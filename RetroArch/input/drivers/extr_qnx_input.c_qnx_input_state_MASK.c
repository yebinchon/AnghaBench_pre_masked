
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_keybind {int dummy; } ;
typedef int rarch_joypad_info_t ;
typedef int qnx_input_t ;
typedef int int16_t ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 int FUNC_0 (int *,int ,unsigned int,struct retro_keybind const*,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static int16_t FUNC_3(void *VAR_2,
      rarch_joypad_info_t VAR_3,
      const struct retro_keybind **VAR_4,
      unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
   qnx_input_t *VAR_9 = (qnx_input_t*)VAR_2;

   switch (VAR_6)
   {
      case 130:
         if (VAR_8 == VAR_1)
         {
            unsigned VAR_10;
            int16_t VAR_11 = 0;
            for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
            {
               if (FUNC_0(
                        VAR_9, VAR_3, VAR_5, VAR_4[VAR_5], VAR_10))
               {
                  VAR_11 |= (1 << VAR_10);
                  continue;
               }
            }

            return VAR_11;
         }
         else
            if (FUNC_0(VAR_9, VAR_3, VAR_5, VAR_4[VAR_5], VAR_8))
               return 1;
         break;
      case 129:
         return FUNC_1(VAR_9, VAR_8);
      case 128:
      case 131:
         return FUNC_2(VAR_9, VAR_7, VAR_8, VAR_6 == 131);
      default:
          break;
   }

   return 0;
}
