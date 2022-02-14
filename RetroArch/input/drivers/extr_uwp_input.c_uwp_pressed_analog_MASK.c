
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int joypad; } ;
typedef TYPE_1__ uwp_input_t ;
struct retro_keybind {scalar_t__ key; int valid; } ;
typedef int rarch_joypad_info_t ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int,unsigned int,struct retro_keybind const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int16_t FUNC_3(uwp_input_t *VAR_1,
   rarch_joypad_info_t VAR_2,
   const struct retro_keybind *VAR_3,
   unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
   const struct retro_keybind *VAR_7, *VAR_8;
   int16_t VAR_9 = 0, VAR_10 = 0, VAR_11;
   unsigned VAR_12 = 0, VAR_13 = 0;


   FUNC_0(VAR_5, VAR_6, VAR_12, VAR_13);

   VAR_7 = &VAR_3[VAR_12];
   VAR_8 = &VAR_3[VAR_13];

   if (!VAR_7->valid || !VAR_8->valid)
      return 0;

   if ((VAR_7->key < VAR_0) && FUNC_2(VAR_7->key))
      VAR_9 = -0x7fff;
   if ((VAR_8->key < VAR_0) && FUNC_2(VAR_8->key))
      VAR_10 = 0x7fff;

   VAR_11 = VAR_10 + VAR_9;
   if (VAR_11 != 0)
      return VAR_11;


   return FUNC_1(VAR_1->joypad, VAR_2, VAR_4, VAR_5, VAR_6, VAR_3);
}
