
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int* sixaxis_handles_count; int ** sixaxis_handles; TYPE_1__* joypad; } ;
typedef TYPE_2__ switch_input_t ;
struct TYPE_4__ {int (* destroy ) () ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   unsigned VAR_2,VAR_3;
   switch_input_t *VAR_4 = (switch_input_t*) VAR_1;

   if (VAR_4)
   {
      if(VAR_4->joypad)
         VAR_4->joypad->destroy();

      for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
         if(VAR_4->sixaxis_handles_count[VAR_2] > 0)
            for(VAR_3 = 0; VAR_3 < VAR_4->sixaxis_handles_count[VAR_2]; VAR_3++)
               FUNC_2(VAR_4->sixaxis_handles[VAR_2][VAR_3]);

      FUNC_0(VAR_4);
   }




}
