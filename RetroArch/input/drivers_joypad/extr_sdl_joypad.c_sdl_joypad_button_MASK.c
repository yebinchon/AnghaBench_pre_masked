
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ num_hats; scalar_t__ num_buttons; int joypad; } ;
typedef TYPE_1__ sdl_joypad_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int * VAR_4 ;

__attribute__((used)) static bool FUNC_4(unsigned VAR_5, uint16_t VAR_6)
{
   unsigned VAR_7 = 0;
   sdl_joypad_t *VAR_8 = (sdl_joypad_t*)&VAR_4[VAR_5];
   if (!VAR_8 || !VAR_8->joypad)
      return 0;

   VAR_7 = FUNC_1(VAR_6);

   if (VAR_7)
   {
      uint8_t VAR_9;
      uint16_t VAR_10 = FUNC_0(VAR_6);

      if (VAR_10 >= VAR_8->num_hats)
         return 0;

      VAR_9 = FUNC_3(VAR_8, VAR_10);

      switch (VAR_7)
      {
         case 128:
            return VAR_9 & VAR_3;
         case 131:
            return VAR_9 & VAR_0;
         case 130:
            return VAR_9 & VAR_1;
         case 129:
            return VAR_9 & VAR_2;
         default:
            break;
      }
      return 0;
   }


   if (VAR_6 < VAR_8->num_buttons && FUNC_2(VAR_8, VAR_6))
      return 1;

   return 0;
}
