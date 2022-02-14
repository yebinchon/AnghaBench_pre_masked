
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int queue_irq_state; } ;
struct TYPE_6__ {TYPE_2__ in; } ;
struct qdio_q {TYPE_3__ u; } ;
struct qdio_irq {struct qdio_q** input_qs; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_4__ {struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

int FUNC_1(struct ccw_device *VAR_2, int VAR_3)
{
 struct qdio_q *VAR_4;
 struct qdio_irq *VAR_5 = VAR_2->private->qdio_data;

 if (!VAR_5)
  return -VAR_0;
 VAR_4 = VAR_5->input_qs[VAR_3];

 if (FUNC_0(VAR_1,
        &VAR_4->u.in.queue_irq_state))
  return 0;
 else
  return 1;
}
