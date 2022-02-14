
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int queue_irq_state; } ;
struct TYPE_7__ {TYPE_2__ in; } ;
struct qdio_q {TYPE_3__ u; TYPE_1__* irq_ptr; } ;
struct qdio_irq {struct qdio_q** input_qs; } ;
struct ccw_device {TYPE_4__* private; } ;
struct TYPE_8__ {struct qdio_irq* qdio_data; } ;
struct TYPE_5__ {scalar_t__* dsci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (struct qdio_q*) ;
 int FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (scalar_t__*,int ) ;

int FUNC_8(struct ccw_device *VAR_2, int VAR_3)
{
 struct qdio_q *VAR_4;
 struct qdio_irq *VAR_5 = VAR_2->private->qdio_data;

 if (!VAR_5)
  return -VAR_0;
 VAR_4 = VAR_5->input_qs[VAR_3];

 FUNC_0(FUNC_4(VAR_4));

 if (!FUNC_5(VAR_4))
  FUNC_7(VAR_4->irq_ptr->dsci, 0);

 FUNC_3(VAR_4);
 FUNC_1(VAR_1, &VAR_4->u.in.queue_irq_state);





 if (!FUNC_5(VAR_4) && *VAR_4->irq_ptr->dsci)
  goto rescan;
 if (!FUNC_2(VAR_4))
  goto rescan;
 return 0;

rescan:
 if (FUNC_6(VAR_1,
        &VAR_4->u.in.queue_irq_state))
  return 0;
 else
  return 1;

}
