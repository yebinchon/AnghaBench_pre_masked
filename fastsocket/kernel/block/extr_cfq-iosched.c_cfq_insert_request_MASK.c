
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {TYPE_2__* elevator; } ;
struct request {int queuelist; } ;
struct cfq_queue {int fifo; } ;
struct cfq_data {TYPE_1__* serving_group; scalar_t__* cfq_fifo_expire; } ;
struct TYPE_8__ {int blkg; } ;
struct TYPE_7__ {int ioc; } ;
struct TYPE_6__ {struct cfq_data* elevator_data; } ;
struct TYPE_5__ {int blkg; } ;


 TYPE_4__* FUNC_0 (struct request*) ;
 struct cfq_queue* FUNC_1 (struct request*) ;
 TYPE_3__* FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int *,int *,int ,size_t) ;
 int FUNC_5 (struct cfq_queue*,int ) ;
 int FUNC_6 (struct cfq_data*,struct cfq_queue*,char*) ;
 int FUNC_7 (struct cfq_data*,struct cfq_queue*,struct request*) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct request*) ;
 size_t FUNC_10 (struct request*) ;
 int FUNC_11 (struct request*,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct request_queue *VAR_1, struct request *VAR_2)
{
 struct cfq_data *VAR_3 = VAR_1->elevator->elevator_data;
 struct cfq_queue *VAR_4 = FUNC_1(VAR_2);

 FUNC_6(VAR_3, VAR_4, "insert_request");
 FUNC_5(VAR_4, FUNC_2(VAR_2)->ioc);

 FUNC_11(VAR_2, VAR_0 + VAR_3->cfq_fifo_expire[FUNC_10(VAR_2)]);
 FUNC_8(&VAR_2->queuelist, &VAR_4->fifo);
 FUNC_3(VAR_2);
 FUNC_4(&(FUNC_0(VAR_2))->blkg,
   &VAR_3->serving_group->blkg, FUNC_9(VAR_2),
   FUNC_10(VAR_2));
 FUNC_7(VAR_3, VAR_4, VAR_2);
}
