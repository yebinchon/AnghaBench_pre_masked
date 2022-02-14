
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {TYPE_2__* elevator; } ;
struct request {int dummy; } ;
struct cfq_queue {TYPE_1__* cfqg; int nr_sectors; int dispatched; int next_rq; } ;
struct cfq_data {int * rq_in_flight; } ;
struct TYPE_6__ {int dispatched; } ;
struct TYPE_5__ {struct cfq_data* elevator_data; } ;
struct TYPE_4__ {int blkg; } ;


 TYPE_3__* FUNC_0 (struct request*) ;
 struct cfq_queue* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 size_t FUNC_5 (struct cfq_queue*) ;
 int FUNC_6 (struct cfq_data*,struct cfq_queue*,struct request*) ;
 int FUNC_7 (struct cfq_data*,struct cfq_queue*,char*) ;
 int FUNC_8 (struct request*) ;
 int FUNC_9 (struct request_queue*,struct request*) ;
 int FUNC_10 (struct request*) ;
 int FUNC_11 (struct request*) ;

__attribute__((used)) static void FUNC_12(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct cfq_data *VAR_2 = VAR_0->elevator->elevator_data;
 struct cfq_queue *VAR_3 = FUNC_1(VAR_1);

 FUNC_7(VAR_2, VAR_3, "dispatch_insert");

 VAR_3->next_rq = FUNC_6(VAR_2, VAR_3, VAR_1);
 FUNC_8(VAR_1);
 VAR_3->dispatched++;
 (FUNC_0(VAR_1))->dispatched++;
 FUNC_9(VAR_0, VAR_1);

 VAR_2->rq_in_flight[FUNC_5(VAR_3)]++;
 VAR_3->nr_sectors += FUNC_3(VAR_1);
 FUNC_4(&VAR_3->cfqg->blkg, FUNC_2(VAR_1),
     FUNC_10(VAR_1), FUNC_11(VAR_1));
}
