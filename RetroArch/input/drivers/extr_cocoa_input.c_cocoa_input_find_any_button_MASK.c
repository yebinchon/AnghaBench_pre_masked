
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef int input_bits_t ;
struct TYPE_7__ {TYPE_2__* sec_joypad; TYPE_1__* joypad; } ;
typedef TYPE_3__ cocoa_input_data_t ;
struct TYPE_6__ {int (* get_buttons ) (int ,int *) ;int (* poll ) () ;} ;
struct TYPE_5__ {int (* get_buttons ) (int ,int *) ;int (* poll ) () ;} ;


 int FUNC_0 (TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

int32_t FUNC_7(uint32_t VAR_0)
{
   int VAR_1 = -1;
   cocoa_input_data_t *VAR_2 = (cocoa_input_data_t*)FUNC_1();

   if (!VAR_2)
      return -1;

   if (VAR_2->joypad)
   {
       VAR_2->joypad->poll();

       if (VAR_2->joypad->get_buttons)
       {
          input_bits_t VAR_3;
          VAR_2->joypad->get_buttons(VAR_0,&VAR_3);
          VAR_1 = FUNC_0(VAR_2, &VAR_3, VAR_0);
       }
   }

   if (VAR_1 != -1)
      return VAR_1;

   if (VAR_2->sec_joypad)
   {
       VAR_2->sec_joypad->poll();

       if (VAR_2->sec_joypad->get_buttons)
       {
          input_bits_t VAR_4;
          VAR_2->sec_joypad->poll();
          VAR_2->sec_joypad->get_buttons(VAR_0,&VAR_4);
          VAR_1 = FUNC_0(VAR_2, &VAR_4, VAR_0);
       }
   }

   if (VAR_1 != -1)
      return VAR_1;

   return -1;
}
