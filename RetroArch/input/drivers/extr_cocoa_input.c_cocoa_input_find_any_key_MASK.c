
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {TYPE_2__* sec_joypad; TYPE_1__* joypad; } ;
typedef TYPE_3__ cocoa_input_data_t ;
struct TYPE_5__ {int (* poll ) () ;} ;
struct TYPE_4__ {int (* poll ) () ;} ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int32_t FUNC_4(void)
{
   cocoa_input_data_t *VAR_0 = (cocoa_input_data_t*)FUNC_1();

   if (!VAR_0)
      return 0;

   if (VAR_0->joypad)
       VAR_0->joypad->poll();

    if (VAR_0->sec_joypad)
        VAR_0->sec_joypad->poll();

   return FUNC_0();
}
