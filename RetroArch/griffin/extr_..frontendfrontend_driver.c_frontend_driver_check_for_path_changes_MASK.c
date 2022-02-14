
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int path_change_data_t ;
struct TYPE_3__ {int (* check_for_path_changes ) (int *) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;

bool FUNC_2(path_change_data_t *VAR_0)
{
   frontend_ctx_driver_t *VAR_1 = FUNC_0();
   if (!VAR_1 || !VAR_1->check_for_path_changes)
      return 0;
   return VAR_1->check_for_path_changes(VAR_0);
}
