
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ num_axes; int joypad; } ;
typedef TYPE_1__ sdl_joypad_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int * VAR_1 ;

__attribute__((used)) static int16_t FUNC_3(unsigned VAR_2, uint32_t VAR_3)
{
   sdl_joypad_t *VAR_4;
   int16_t VAR_5 = 0;

   if (VAR_3 == VAR_0)
      return 0;

   VAR_4 = (sdl_joypad_t*)&VAR_1[VAR_2];
   if (!VAR_4->joypad)
      return 0;

   if (FUNC_0(VAR_3) < VAR_4->num_axes)
   {
      VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_3));

      if (VAR_5 > 0)
         VAR_5 = 0;
      else if (VAR_5 < -0x7fff)
         VAR_5 = -0x7fff;
   }
   else if (FUNC_1(VAR_3) < VAR_4->num_axes)
   {
      VAR_5 = FUNC_2(VAR_4, FUNC_1(VAR_3));

      if (VAR_5 < 0)
         VAR_5 = 0;
   }

   return VAR_5;
}
