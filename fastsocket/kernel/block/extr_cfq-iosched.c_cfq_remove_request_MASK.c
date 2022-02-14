
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int cmd_flags; int queuelist; } ;
struct cfq_queue {int meta_pending; TYPE_1__* cfqd; struct request* next_rq; } ;
struct TYPE_4__ {int blkg; } ;
struct TYPE_3__ {int rq_queued; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct request*) ;
 struct cfq_queue* FUNC_1 (struct request*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct request*) ;
 struct request* FUNC_5 (TYPE_1__*,struct cfq_queue*,struct request*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_1)
{
 struct cfq_queue *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->next_rq == VAR_1)
  VAR_2->next_rq = FUNC_5(VAR_2->cfqd, VAR_2, VAR_1);

 FUNC_6(&VAR_1->queuelist);
 FUNC_4(VAR_1);

 VAR_2->cfqd->rq_queued--;
 FUNC_3(&(FUNC_0(VAR_1))->blkg,
     FUNC_7(VAR_1), FUNC_8(VAR_1));
 if (VAR_1->cmd_flags & VAR_0) {
  FUNC_2(!VAR_2->meta_pending);
  VAR_2->meta_pending--;
 }
}
