
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct cfq_queue {scalar_t__ slice_dispatch; scalar_t__ slice_end; } ;
struct cfq_data {int busy_queues; } ;
struct TYPE_2__ {struct cfq_data* elevator_data; } ;


 int FUNC_0 (struct cfq_queue*) ;
 scalar_t__ FUNC_1 (struct cfq_queue*) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_4 (struct cfq_data*) ;
 int FUNC_5 (struct cfq_data*,struct cfq_queue*,char*) ;
 scalar_t__ FUNC_6 (struct cfq_data*,struct cfq_queue*) ;
 struct cfq_queue* FUNC_7 (struct cfq_data*) ;
 int FUNC_8 (struct cfq_data*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct request_queue *VAR_1, int VAR_2)
{
 struct cfq_data *VAR_3 = VAR_1->elevator->elevator_data;
 struct cfq_queue *VAR_4;

 if (!VAR_3->busy_queues)
  return 0;

 if (FUNC_9(VAR_2))
  return FUNC_4(VAR_3);

 VAR_4 = FUNC_7(VAR_3);
 if (!VAR_4)
  return 0;




 if (!FUNC_3(VAR_3, VAR_4))
  return 0;

 VAR_4->slice_dispatch++;
 FUNC_2(VAR_4);





 if (VAR_3->busy_queues > 1 && ((!FUNC_0(VAR_4) &&
     VAR_4->slice_dispatch >= FUNC_6(VAR_3, VAR_4)) ||
     FUNC_1(VAR_4))) {
  VAR_4->slice_end = VAR_0 + 1;
  FUNC_8(VAR_3, 0);
 }

 FUNC_5(VAR_3, VAR_4, "dispatched a request");
 return 1;
}
