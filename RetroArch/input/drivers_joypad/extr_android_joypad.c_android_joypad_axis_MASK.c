
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct android_app {int** analog_state; } ;
typedef int int16_t ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int16_t FUNC_2(unsigned VAR_3, uint32_t VAR_4)
{
   int VAR_5 = 0;
   struct android_app *VAR_6 = (struct android_app*)VAR_2;

   if (VAR_4 == VAR_0)
      return 0;

   if (FUNC_0(VAR_4) < VAR_1)
   {
      VAR_5 = VAR_6->analog_state[VAR_3][FUNC_0(VAR_4)];
      if (VAR_5 > 0)
         VAR_5 = 0;
   }
   else if (FUNC_1(VAR_4) < VAR_1)
   {
      VAR_5 = VAR_6->analog_state[VAR_3][FUNC_1(VAR_4)];
      if (VAR_5 < 0)
         VAR_5 = 0;
   }

   return VAR_5;
}
