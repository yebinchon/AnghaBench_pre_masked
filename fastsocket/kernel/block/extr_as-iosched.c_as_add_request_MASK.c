
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int node; TYPE_1__* elevator; } ;
struct request {int queuelist; int * elevator_private; } ;
struct as_data {int * fifo_list; scalar_t__* fifo_expire; } ;
struct TYPE_6__ {TYPE_2__* aic; } ;
struct TYPE_5__ {int nr_queued; } ;
struct TYPE_4__ {struct as_data* elevator_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct request*) ;
 int FUNC_1 (struct as_data*,struct request*) ;
 int FUNC_2 (struct request*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct as_data*,TYPE_2__*,struct request*) ;
 int FUNC_5 (struct as_data*,struct request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct request*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct request*) ;
 int FUNC_10 (struct request*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct request_queue *VAR_3, struct request *VAR_4)
{
 struct as_data *VAR_5 = VAR_3->elevator->elevator_data;
 int VAR_6;

 FUNC_2(VAR_4, VAR_0);

 VAR_6 = FUNC_9(VAR_4);

 VAR_4->elevator_private[0] = FUNC_3(VAR_3->node);

 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_5, FUNC_0(VAR_4)->aic, VAR_4);
  FUNC_6(&FUNC_0(VAR_4)->aic->nr_queued);
 }

 FUNC_7(FUNC_1(VAR_5, VAR_4), VAR_4);




 FUNC_10(VAR_4, VAR_2 + VAR_5->fifo_expire[VAR_6]);
 FUNC_8(&VAR_4->queuelist, &VAR_5->fifo_list[VAR_6]);

 FUNC_5(VAR_5, VAR_4);
 FUNC_2(VAR_4, VAR_1);
}
