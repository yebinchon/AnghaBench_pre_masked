
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uwp_input_t ;
struct retro_keybind {int dummy; } ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;


 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,int) ;
 int FUNC_2 (unsigned int,unsigned int,int) ;
 int FUNC_3 (int *,int ,struct retro_keybind const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int *,int ,struct retro_keybind const*,unsigned int,unsigned int) ;

__attribute__((used)) static int16_t FUNC_5(void *VAR_4,
      rarch_joypad_info_t VAR_5,
      const struct retro_keybind **VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      unsigned VAR_9, unsigned VAR_10)
{
   uwp_input_t *VAR_11 = (uwp_input_t*)VAR_4;

   switch (VAR_8)
   {
      case 131:
         if (VAR_10 == VAR_3)
         {
            unsigned VAR_12;
            int16_t VAR_13 = 0;
            for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
            {
               if (FUNC_4(
                        VAR_11, VAR_5, VAR_6[VAR_7], VAR_7, VAR_12))
               {
                  VAR_13 |= (1 << VAR_12);
                  continue;
               }
            }

            return VAR_13;
         }
         else
         {
            if (VAR_10 < VAR_0)
               if (FUNC_4(VAR_11, VAR_5, VAR_6[VAR_7], VAR_7, VAR_10))
                  return 1;
         }
         break;
      case 132:
         if (VAR_6[VAR_7])
            return FUNC_3(VAR_11, VAR_5, VAR_6[VAR_7], VAR_7, VAR_9, VAR_10);
      case 130:
         return (VAR_10 < VAR_2) && FUNC_0(VAR_10);

      case 129:
      case 134:
         return FUNC_1(VAR_7, VAR_10, VAR_8 == 134);

      case 128:
      case 133:
         return FUNC_2(VAR_9, VAR_10, VAR_8 == 133);
   }

   return 0;
}
