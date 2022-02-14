
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_device_driver_t ;
struct TYPE_2__ {int const* joypad; } ;
typedef TYPE_1__ ctr_input_t ;



__attribute__((used)) static const input_device_driver_t *FUNC_0(void *VAR_0)
{
   ctr_input_t *VAR_1 = (ctr_input_t*)VAR_0;
   if (VAR_1)
      return VAR_1->joypad;
   return ((void*)0);
}
