
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int userdata; int func; } ;
typedef TYPE_1__ task_finder_data_t ;
struct TYPE_5__ {int (* find ) (int ,int ) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

bool FUNC_1(task_finder_data_t *VAR_1)
{
   if (!VAR_0->find(VAR_1->func, VAR_1->userdata))
      return 0;
   return 1;
}
