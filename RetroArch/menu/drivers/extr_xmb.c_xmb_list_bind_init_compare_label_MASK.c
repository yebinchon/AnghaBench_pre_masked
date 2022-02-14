
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enum_idx; int action_deferred_push; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(menu_file_list_cbs_t *VAR_2)
{
   if (VAR_2 && VAR_2->enum_idx != VAR_0)
   {
      switch (VAR_2->enum_idx)
      {
         case 128:
            VAR_2->action_deferred_push = VAR_1;
            break;
         default:
            return -1;
      }
   }

   return 0;
}
