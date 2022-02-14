
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timer; scalar_t__ pci_out_enabled; } ;
struct TYPE_5__ {TYPE_1__ out; } ;
struct qdio_q {int tasklet; TYPE_3__* irq_ptr; TYPE_2__ u; int nr_buf_used; } ;
struct TYPE_6__ {scalar_t__ state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*) ;
 scalar_t__ FUNC_6 (struct qdio_q*) ;
 scalar_t__ FUNC_7 (struct qdio_q*) ;
 int FUNC_8 (struct qdio_q*,int ) ;
 scalar_t__ FUNC_9 (struct qdio_q*) ;
 int VAR_6 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct qdio_q *VAR_7)
{
 FUNC_8(VAR_7, VAR_6);
 FUNC_0(FUNC_1(&VAR_7->nr_buf_used) < 0);

 if (FUNC_7(VAR_7))
  FUNC_5(VAR_7);

 if (FUNC_9(VAR_7) == VAR_4)
  if (!FUNC_4(VAR_7) && !FUNC_6(VAR_7))
   goto sched;

 if ((FUNC_9(VAR_7) == VAR_2) &&
     (FUNC_1(&VAR_7->nr_buf_used)) > VAR_1)
  goto sched;

 if (VAR_7->u.out.pci_out_enabled)
  return;






 if (FUNC_6(VAR_7))
  FUNC_2(&VAR_7->u.out.timer);
 else
  if (!FUNC_11(&VAR_7->u.out.timer))
   FUNC_3(&VAR_7->u.out.timer, VAR_5 + 10 * VAR_0);
 return;

sched:
 if (FUNC_12(VAR_7->irq_ptr->state == VAR_3))
  return;
 FUNC_10(&VAR_7->tasklet);
}
