
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uwp_input {int joypad; } ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;


 int FUNC_0 (int ,unsigned int,int,int ) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, unsigned VAR_1,
      enum retro_rumble_effect VAR_2, uint16_t VAR_3)
{
   struct uwp_input *VAR_4 = (struct uwp_input*)VAR_0;
   if (!VAR_4)
      return 0;
   return FUNC_0(VAR_4->joypad, VAR_1, VAR_2, VAR_3);
}
