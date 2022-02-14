
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* queue_start_poll ) (int ,int ,int ) ;int queue_irq_state; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
struct qdio_q {int tasklet; TYPE_3__* irq_ptr; int nr; TYPE_2__ u; } ;
struct qdio_irq {int nr_input_qs; struct qdio_q** input_qs; } ;
struct TYPE_6__ {int dsci; int int_parm; int cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qdio_irq*) ;
 int VAR_1 ;
 int FUNC_1 (struct qdio_q*,int ) ;
 int FUNC_2 (struct qdio_irq*) ;
 int FUNC_3 (struct qdio_q*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static inline void FUNC_8(struct qdio_irq *VAR_2)
{
 int VAR_3;
 struct qdio_q *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_input_qs; ++VAR_3) {
  VAR_4 = VAR_2->input_qs[VAR_3];

  if (!FUNC_2(VAR_2) &&
      FUNC_0(VAR_2))
   FUNC_7(VAR_4->irq_ptr->dsci, 0);

  if (VAR_4->u.in.queue_start_poll) {

   if (FUNC_6(VAR_0,
          &VAR_4->u.in.queue_irq_state)) {
    FUNC_1(VAR_4, VAR_1);
    continue;
   }


   VAR_4->u.in.queue_start_poll(VAR_4->irq_ptr->cdev, VAR_4->nr,
       VAR_4->irq_ptr->int_parm);
  } else {
   if (!FUNC_3(VAR_4))
    FUNC_7(VAR_4->irq_ptr->dsci, 0);





   FUNC_5(&VAR_4->tasklet);
  }
 }
}
