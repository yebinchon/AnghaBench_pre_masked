
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {scalar_t__** analog_state; scalar_t__** hat_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
   unsigned VAR_3, VAR_4;
   struct android_app *VAR_5 = (struct android_app*)VAR_2;

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   {
      for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
         VAR_5->hat_state[VAR_3][VAR_4] = 0;
      for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
         VAR_5->analog_state[VAR_3][VAR_4] = 0;
   }
}
