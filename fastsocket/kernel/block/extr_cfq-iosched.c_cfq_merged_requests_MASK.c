
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int queuelist; } ;
struct cfq_queue {struct request* next_rq; } ;
struct TYPE_2__ {int blkg; } ;


 TYPE_1__* FUNC_0 (struct request*) ;
 struct cfq_queue* FUNC_1 (struct request*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*) ;
 int FUNC_9 (struct request*,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(struct request_queue *VAR_0, struct request *VAR_1,
      struct request *VAR_2)
{
 struct cfq_queue *VAR_3 = FUNC_1(VAR_1);



 if (!FUNC_4(&VAR_1->queuelist) && !FUNC_4(&VAR_2->queuelist) &&
     FUNC_10(FUNC_7(VAR_2), FUNC_7(VAR_1))) {
  FUNC_5(&VAR_1->queuelist, &VAR_2->queuelist);
  FUNC_9(VAR_1, FUNC_7(VAR_2));
 }

 if (VAR_3->next_rq == VAR_2)
  VAR_3->next_rq = VAR_1;
 FUNC_3(VAR_2);
 FUNC_2(&(FUNC_0(VAR_1))->blkg,
     FUNC_6(VAR_2), FUNC_8(VAR_2));
}
