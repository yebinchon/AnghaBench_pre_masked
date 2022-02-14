
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmi_handler {int node; } ;
struct TYPE_2__ {int handler_spinlock; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct pmi_handler*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pmi_handler *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_1("pmi: unregistering handler %p\n", VAR_1);

 FUNC_2(&VAR_0->handler_spinlock);
 FUNC_0(&VAR_1->node);
 FUNC_3(&VAR_0->handler_spinlock);
}
