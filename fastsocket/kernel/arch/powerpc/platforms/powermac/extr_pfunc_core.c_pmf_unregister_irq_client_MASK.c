
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmf_irq_client {int link; struct pmf_function* func; } ;
struct pmf_function {TYPE_2__* dev; int irq_clients; } ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int (* irq_disable ) (struct pmf_function*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct pmf_function*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct pmf_function*) ;

void FUNC_9(struct pmf_irq_client *VAR_2)
{
 struct pmf_function *VAR_3 = VAR_2->func;
 unsigned long VAR_4;

 FUNC_0(VAR_3 == ((void*)0));


 FUNC_3(&VAR_0);
 VAR_2->func = ((void*)0);


 FUNC_6(&VAR_1, VAR_4);
 FUNC_1(&VAR_2->link);
 FUNC_7(&VAR_1, VAR_4);

 if (FUNC_2(&VAR_3->irq_clients))
  VAR_3->dev->handlers->irq_disable(VAR_3);
 FUNC_4(&VAR_0);
 FUNC_5(VAR_3);
}
