
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_q {int first_to_kick; int first_to_check; int qdio_error; TYPE_2__* irq_ptr; } ;
struct qdio_irq {struct qdio_q** input_qs; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (struct qdio_q*) ;
 int FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ccw_device *VAR_3, int VAR_4, int *VAR_5,
     int *VAR_6)
{
 struct qdio_q *VAR_7;
 int VAR_8, VAR_9;
 struct qdio_irq *VAR_10 = VAR_3->private->qdio_data;

 if (!VAR_10)
  return -VAR_1;
 VAR_7 = VAR_10->input_qs[VAR_4];
 FUNC_0(FUNC_4(VAR_7));

 FUNC_3(VAR_7);





 FUNC_1(VAR_7);

 if (!FUNC_2(VAR_7))
  return 0;


 if (FUNC_6(VAR_7->irq_ptr->state != VAR_2))
  return -VAR_0;

 VAR_8 = VAR_7->first_to_kick;
 VAR_9 = VAR_7->first_to_check;
 *VAR_5 = VAR_8;
 *VAR_6 = VAR_7->qdio_error;


 VAR_7->first_to_kick = VAR_9;
 VAR_7->qdio_error = 0;
 return FUNC_5(VAR_9, VAR_8);
}
