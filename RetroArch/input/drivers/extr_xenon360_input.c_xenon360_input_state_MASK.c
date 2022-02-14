
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct retro_keybind {int joykey; } ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 int* VAR_3 ;

__attribute__((used)) static int16_t FUNC_0(void *VAR_4,
      rarch_joypad_info_t VAR_5,
      const struct retro_keybind **VAR_6,
      bool VAR_7, unsigned VAR_8,
      unsigned VAR_9, unsigned VAR_10)
{
   uint64_t VAR_11 = VAR_6[VAR_7][VAR_10].joykey;

   if (VAR_7 >= VAR_0)
      return 0;

   switch (VAR_8)
   {
      case 128:
         if (VAR_10 == VAR_2)
         {
            unsigned VAR_12;
            int16_t VAR_13 = 0;

            for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
            {
               if (VAR_3[VAR_7] & VAR_6[VAR_7][VAR_12].joykey)
                  VAR_13 |= (1 << VAR_12);
            }

            return VAR_13;
         }
         else
            if (VAR_3[VAR_7] & VAR_6[VAR_7][VAR_10].joykey)
               return 1;
         break;
      default:
         break;
   }

   return 0;
}
