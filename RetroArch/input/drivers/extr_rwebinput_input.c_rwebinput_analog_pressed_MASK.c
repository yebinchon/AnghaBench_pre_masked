
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_keybind {int dummy; } ;
typedef int rwebinput_input_t ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int *,int ,struct retro_keybind const*,unsigned int,unsigned int) ;

__attribute__((used)) static int16_t FUNC_2(rwebinput_input_t *VAR_0,
   rarch_joypad_info_t VAR_1, const struct retro_keybind *VAR_2,
   unsigned VAR_3, unsigned VAR_4)
{
   int16_t VAR_5 = 0, VAR_6 = 0;
   unsigned VAR_7 = 0;
   unsigned VAR_8 = 0;

   FUNC_0(VAR_3, VAR_4, VAR_7, VAR_8);

   if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7))
      VAR_5 = -0x7fff;
   if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_8))
      VAR_6 = 0x7fff;

   return VAR_6 + VAR_5;
}
