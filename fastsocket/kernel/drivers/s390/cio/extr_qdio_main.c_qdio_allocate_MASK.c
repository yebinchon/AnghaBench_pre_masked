
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qdr {int dummy; } ;
struct qdio_irq {struct qdr* qdr; scalar_t__ chsc_page; int setup_mutex; } ;
struct qdio_initialize {TYPE_3__* cdev; int no_output_qs; int no_input_qs; int output_sbal_addr_array; int input_sbal_addr_array; int output_handler; int input_handler; } ;
struct TYPE_6__ {TYPE_2__* private; } ;
struct TYPE_4__ {int sch_no; } ;
struct TYPE_5__ {struct qdio_irq* qdio_data; TYPE_1__ schid; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qdio_initialize*,struct qdio_irq*) ;
 scalar_t__ FUNC_5 (struct qdio_irq*,int ,int ) ;
 int FUNC_6 (struct qdio_irq*) ;
 int FUNC_7 (struct qdio_irq*,int ) ;

int FUNC_8(struct qdio_initialize *VAR_6)
{
 struct qdio_irq *VAR_7;

 FUNC_0("qallocate:%4x", VAR_6->cdev->private->schid.sch_no);

 if ((VAR_6->no_input_qs && !VAR_6->input_handler) ||
     (VAR_6->no_output_qs && !VAR_6->output_handler))
  return -VAR_0;

 if ((VAR_6->no_input_qs > VAR_5) ||
     (VAR_6->no_output_qs > VAR_5))
  return -VAR_0;

 if ((!VAR_6->input_sbal_addr_array) ||
     (!VAR_6->output_sbal_addr_array))
  return -VAR_0;


 VAR_7 = (void *) FUNC_2(VAR_3 | VAR_2);
 if (!VAR_7)
  goto out_err;

 FUNC_3(&VAR_7->setup_mutex);
 FUNC_4(VAR_6, VAR_7);







 VAR_7->chsc_page = FUNC_2(VAR_3);
 if (!VAR_7->chsc_page)
  goto out_rel;


 VAR_7->qdr = (struct qdr *) FUNC_2(VAR_3 | VAR_2);
 if (!VAR_7->qdr)
  goto out_rel;
 FUNC_1((unsigned long)VAR_7->qdr & 0xfff);

 if (FUNC_5(VAR_7, VAR_6->no_input_qs,
        VAR_6->no_output_qs))
  goto out_rel;

 VAR_6->cdev->private->qdio_data = VAR_7;
 FUNC_7(VAR_7, VAR_4);
 return 0;
out_rel:
 FUNC_6(VAR_7);
out_err:
 return -VAR_1;
}
