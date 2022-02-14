
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int queuelist; } ;
struct deadline_data {int * fifo_list; scalar_t__* fifo_expire; } ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 int FUNC_0 (struct deadline_data*,struct request*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct request_queue *VAR_1, struct request *VAR_2)
{
 struct deadline_data *VAR_3 = VAR_1->elevator->elevator_data;
 const int VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_3, VAR_2);




 FUNC_3(VAR_2, VAR_0 + VAR_3->fifo_expire[VAR_4]);
 FUNC_1(&VAR_2->queuelist, &VAR_3->fifo_list[VAR_4]);
}
