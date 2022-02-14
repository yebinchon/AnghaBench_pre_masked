
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int * action_cancel; int action_start; void* action_select; void* action_ok; } ;
typedef TYPE_1__ rarch_setting_t ;
struct TYPE_6__ {int index; } ;
typedef TYPE_2__ rarch_setting_info_t ;


 unsigned int VAR_0 ;




 void* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(
      rarch_setting_t **VAR_3,
      rarch_setting_info_t *VAR_4,
      unsigned VAR_5)
{
   unsigned VAR_6 = VAR_4->index - 1;

   if (VAR_5 & VAR_0)
   {
      (*VAR_3)[VAR_6].action_ok = VAR_1;
      (*VAR_3)[VAR_6].action_select = VAR_1;

      switch ((*VAR_3)[VAR_6].type)
      {
         case 130:
         case 128:
            (*VAR_3)[VAR_6].action_cancel = ((void*)0);
            break;
         case 131:
            (*VAR_3)[VAR_6].action_cancel = ((void*)0);
            break;
         case 129:
            (*VAR_3)[VAR_6].action_start = VAR_2;
            (*VAR_3)[VAR_6].action_cancel = ((void*)0);
            break;
         default:
            break;
      }
   }
}
