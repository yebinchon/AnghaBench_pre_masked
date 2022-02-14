
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct hidpad_ps3_data {scalar_t__* motors; } ;
typedef enum retro_rumble_effect { ____Placeholder_retro_rumble_effect } retro_rumble_effect ;


 int VAR_0 ;
 int FUNC_0 (struct hidpad_ps3_data*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1,
      enum retro_rumble_effect VAR_2, uint16_t VAR_3)
{
   struct hidpad_ps3_data *VAR_4 = (struct hidpad_ps3_data*)VAR_1;
   unsigned VAR_5 = (VAR_2 == VAR_0) ? 0 : 1;

   if (!VAR_4)
      return;
   if (VAR_4->motors[VAR_5] == VAR_3)
      return;

   VAR_4->motors[VAR_5] = VAR_3;
   FUNC_0(VAR_4);
}
