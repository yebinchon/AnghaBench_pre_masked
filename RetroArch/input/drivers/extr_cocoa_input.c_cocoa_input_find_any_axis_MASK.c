
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_6__ {TYPE_2__* sec_joypad; TYPE_1__* joypad; } ;
typedef TYPE_3__ cocoa_input_data_t ;
struct TYPE_5__ {scalar_t__ (* axis ) (int ,int) ;int (* poll ) () ;} ;
struct TYPE_4__ {scalar_t__ (* axis ) (int ,int) ;int (* poll ) () ;} ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

int32_t FUNC_6(uint32_t VAR_0)
{
   int VAR_1;
   cocoa_input_data_t *VAR_2 = (cocoa_input_data_t*)FUNC_1();

   if (VAR_2 && VAR_2->joypad)
       VAR_2->joypad->poll();

   if (VAR_2 && VAR_2->sec_joypad)
       VAR_2->sec_joypad->poll();

   for (VAR_1 = 0; VAR_1 < 6; VAR_1++)
   {
      int16_t VAR_3 = VAR_2->joypad ? VAR_2->joypad->axis(VAR_0, VAR_1) : 0;

      if (FUNC_0(VAR_3) > 0x4000)
         return (VAR_3 < 0) ? -(VAR_1 + 1) : VAR_1 + 1;

      VAR_3 = VAR_2->sec_joypad ? VAR_2->sec_joypad->axis(VAR_0, VAR_1) : VAR_3;

      if (FUNC_0(VAR_3) > 0x4000)
         return (VAR_3 < 0) ? -(VAR_1 + 1) : VAR_1 + 1;
   }

   return 0;
}
