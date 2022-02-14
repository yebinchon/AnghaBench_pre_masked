
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int tasklet; TYPE_1__* irq_ptr; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(unsigned long VAR_1)
{
 struct qdio_q *VAR_2 = (struct qdio_q *)VAR_1;

 if (FUNC_1(VAR_2->irq_ptr->state == VAR_0))
  return;
 FUNC_0(&VAR_2->tasklet);
}
