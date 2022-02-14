
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int io_context; } ;
struct request_queue {TYPE_1__* elevator; } ;
struct cfq_queue {int dummy; } ;
struct cfq_io_context {int ioc; } ;
struct cfq_data {int dummy; } ;
struct TYPE_2__ {struct cfq_data* elevator_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfq_queue*) ;
 struct cfq_io_context* FUNC_1 (struct cfq_data*,int ) ;
 int FUNC_2 (struct cfq_queue*,int ) ;
 int FUNC_3 (struct cfq_queue*) ;
 struct cfq_queue* FUNC_4 (struct cfq_io_context*,int ) ;
 struct task_struct* VAR_1 ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct request_queue *VAR_2, int VAR_3)
{
 struct cfq_data *VAR_4 = VAR_2->elevator->elevator_data;
 struct task_struct *VAR_5 = VAR_1;
 struct cfq_io_context *VAR_6;
 struct cfq_queue *VAR_7;







 VAR_6 = FUNC_1(VAR_4, VAR_5->io_context);
 if (!VAR_6)
  return VAR_0;

 VAR_7 = FUNC_4(VAR_6, FUNC_5(VAR_3));
 if (VAR_7) {
  FUNC_2(VAR_7, VAR_6->ioc);
  FUNC_3(VAR_7);

  return FUNC_0(VAR_7);
 }

 return VAR_0;
}
