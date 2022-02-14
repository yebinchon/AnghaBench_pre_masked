
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sec_joypad; TYPE_1__* joypad; } ;
typedef TYPE_3__ cocoa_input_data_t ;
struct TYPE_6__ {int (* destroy ) () ;} ;
struct TYPE_5__ {int (* destroy ) () ;} ;


 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
   unsigned VAR_3;
   cocoa_input_data_t *VAR_4 = (cocoa_input_data_t*)VAR_2;

   if (!VAR_4 || !VAR_2)
      return;

   if (VAR_4->joypad)
      VAR_4->joypad->destroy();

   if (VAR_4->sec_joypad)
       VAR_4->sec_joypad->destroy();

   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
      VAR_1[VAR_3] = 0;

   FUNC_0(VAR_4);
}
