
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dinput_input {struct dinput_input* joypad_driver_name; scalar_t__ mouse; scalar_t__ keyboard; TYPE_1__* joypad; } ;
struct TYPE_2__ {int (* destroy ) () ;} ;
typedef int * LPDIRECTINPUT8 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dinput_input*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dinput_input*) ;
 int * VAR_0 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
   struct dinput_input *VAR_2 = (struct dinput_input*)VAR_1;
   LPDIRECTINPUT8 VAR_3 = VAR_0;

   if (VAR_2)
   {

      VAR_0 = ((void*)0);
      if (VAR_2->joypad)
         VAR_2->joypad->destroy();
      VAR_0 = VAR_3;


      FUNC_1(VAR_2);

      if (VAR_2->keyboard)
         FUNC_0(VAR_2->keyboard);

      if (VAR_2->mouse)
         FUNC_0(VAR_2->mouse);

      if (VAR_2->joypad_driver_name)
         FUNC_3(VAR_2->joypad_driver_name);

      FUNC_3(VAR_2);
   }

   FUNC_2();
}
