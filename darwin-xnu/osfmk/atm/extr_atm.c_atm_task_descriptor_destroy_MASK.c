
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* atm_task_descriptor_t ;
struct TYPE_4__ {int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(atm_task_descriptor_t VAR_1)
{

 FUNC_1(&VAR_1->lock);
 VAR_1->flags = VAR_0;
 FUNC_2(&VAR_1->lock);

 FUNC_0(VAR_1);
}
