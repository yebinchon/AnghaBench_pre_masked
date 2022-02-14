
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dinput_input {int const* joypad; } ;
typedef int input_device_driver_t ;



__attribute__((used)) static const input_device_driver_t *FUNC_0(void *VAR_0)
{
   struct dinput_input *VAR_1 = (struct dinput_input*)VAR_0;
   if (!VAR_1)
      return ((void*)0);
   return VAR_1->joypad;
}
