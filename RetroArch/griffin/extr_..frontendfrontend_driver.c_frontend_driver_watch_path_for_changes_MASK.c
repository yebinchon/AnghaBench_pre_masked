
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int dummy; } ;
typedef int path_change_data_t ;
struct TYPE_3__ {int (* watch_path_for_changes ) (struct string_list*,int,int **) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct string_list*,int,int **) ;

void FUNC_2(struct string_list *VAR_0, int VAR_1, path_change_data_t **VAR_2)
{
   frontend_ctx_driver_t *VAR_3 = FUNC_0();
   if (!VAR_3 || !VAR_3->watch_path_for_changes)
      return;
   VAR_3->watch_path_for_changes(VAR_0, VAR_1, VAR_2);
}
