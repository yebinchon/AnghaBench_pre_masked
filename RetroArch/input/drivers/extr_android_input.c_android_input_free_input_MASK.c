
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct android_app {int input_alive; int sensorEventQueue; scalar_t__ sensorManager; } ;
typedef int dylib_t ;
struct TYPE_4__ {TYPE_1__* joypad; } ;
typedef TYPE_2__ android_input_t ;
struct TYPE_3__ {int (* destroy ) () ;} ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
   android_input_t *VAR_3 = (android_input_t*)VAR_2;
   struct android_app *VAR_4 = (struct android_app*)VAR_0;
   if (!VAR_3)
      return;

   if (VAR_4->sensorManager)
      FUNC_0(VAR_4->sensorManager,
            VAR_4->sensorEventQueue);

   if (VAR_3->joypad)
      VAR_3->joypad->destroy();
   VAR_3->joypad = ((void*)0);

   VAR_4->input_alive = 0;






   FUNC_1();
   FUNC_3(VAR_2);
}
