
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmi_handler {int node; } ;
struct TYPE_2__ {int handler_spinlock; int handler; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pmi_handler *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_1->handler_spinlock);
 FUNC_0(&VAR_2->node, &VAR_1->handler);
 FUNC_2(&VAR_1->handler_spinlock);

 return 0;
}
