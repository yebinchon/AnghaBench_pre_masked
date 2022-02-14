
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int retro_time_t ;
struct TYPE_3__ {int quick_tap_time; } ;
typedef TYPE_1__ android_input_t ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(android_input_t *VAR_0)
{



   retro_time_t VAR_1 = FUNC_0();
   if (VAR_0->quick_tap_time && (VAR_1/1000 - VAR_0->quick_tap_time/1000000) >= 200)
   {
      VAR_0->quick_tap_time = 0;
      return 1;
   }

   return 0;
}
