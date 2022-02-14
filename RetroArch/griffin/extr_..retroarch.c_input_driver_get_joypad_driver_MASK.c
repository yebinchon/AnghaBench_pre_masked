
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int input_device_driver_t ;
struct TYPE_2__ {int const* (* get_joypad_driver ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (int ) ;

const input_device_driver_t *FUNC_1(void)
{
   if (!VAR_0 || !VAR_0->get_joypad_driver)
      return ((void*)0);
   return VAR_0->get_joypad_driver(VAR_1);
}
