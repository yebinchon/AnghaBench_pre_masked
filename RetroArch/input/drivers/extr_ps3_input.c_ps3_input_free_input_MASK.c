
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* joypad; } ;
typedef TYPE_2__ ps3_input_t ;
struct TYPE_3__ {int (* destroy ) () ;} ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   ps3_input_t *VAR_1 = (ps3_input_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->joypad)
      VAR_1->joypad->destroy();




   FUNC_1(VAR_0);
}
