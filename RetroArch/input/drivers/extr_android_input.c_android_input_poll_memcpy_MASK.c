
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct android_app {int ** analog_state; int ** hat_state; } ;
struct TYPE_3__ {int ** analog_state; int ** hat_state; } ;
typedef TYPE_1__ android_input_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(android_input_t *VAR_3)
{
   unsigned VAR_4, VAR_5;
   struct android_app *VAR_6 = (struct android_app*)VAR_2;

   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   {
      for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
         VAR_6->hat_state[VAR_4][VAR_5] = VAR_3->hat_state[VAR_4][VAR_5];
      for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
         VAR_6->analog_state[VAR_4][VAR_5] = VAR_3->analog_state[VAR_4][VAR_5];
   }
}
