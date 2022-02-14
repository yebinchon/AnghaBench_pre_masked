
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int queue_lock; TYPE_1__* elevator; } ;
struct request {struct cfq_queue** elevator_private; } ;
struct cfq_queue {int ioc; int cfqg; int ref; int * allocated; scalar_t__ new_cfqq; } ;
struct cfq_io_context {int ioc; int cfqg; int ref; int * allocated; scalar_t__ new_cfqq; } ;
struct cfq_data {struct cfq_queue oom_cfqq; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct cfq_data* elevator_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 scalar_t__ FUNC_1 (struct cfq_queue*) ;
 struct cfq_queue* FUNC_2 (struct cfq_data*,int) ;
 struct cfq_queue* FUNC_3 (struct cfq_data*,int const,int ,int) ;
 int FUNC_4 (struct cfq_data*,char*) ;
 int FUNC_5 (struct cfq_data*,struct cfq_queue*,char*) ;
 struct cfq_queue* FUNC_6 (struct cfq_data*,struct cfq_queue*,struct cfq_queue*) ;
 struct cfq_queue* FUNC_7 (int ) ;
 int FUNC_8 (struct cfq_data*) ;
 int FUNC_9 (struct cfq_queue*,struct cfq_queue*,int const) ;
 struct cfq_queue* FUNC_10 (struct cfq_queue*,int const) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct request*) ;
 int FUNC_14 (struct request*) ;
 int FUNC_15 (int ,unsigned long) ;
 int FUNC_16 (int ,unsigned long) ;
 struct cfq_queue* FUNC_17 (struct cfq_queue*,struct cfq_queue*) ;

__attribute__((used)) static int
FUNC_18(struct request_queue *VAR_1, struct request *VAR_2, gfp_t VAR_3)
{
 struct cfq_data *VAR_4 = VAR_1->elevator->elevator_data;
 struct cfq_io_context *VAR_5;
 const int VAR_6 = FUNC_13(VAR_2);
 const bool VAR_7 = FUNC_14(VAR_2);
 struct cfq_queue *VAR_8;
 unsigned long VAR_9;

 FUNC_11(VAR_3 & VAR_0);

 VAR_5 = FUNC_2(VAR_4, VAR_3);

 FUNC_15(VAR_1->queue_lock, VAR_9);

 if (!VAR_5)
  goto queue_fail;

new_queue:
 VAR_8 = FUNC_10(VAR_5, VAR_7);
 if (!VAR_8 || VAR_8 == &VAR_4->oom_cfqq) {
  VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_5->ioc, VAR_3);
  FUNC_9(VAR_5, VAR_8, VAR_7);
 } else {



  if (FUNC_0(VAR_8) && FUNC_1(VAR_8)) {
   FUNC_5(VAR_4, VAR_8, "breaking apart cfqq");
   VAR_8 = FUNC_17(VAR_5, VAR_8);
   if (!VAR_8)
    goto new_queue;
  }







  if (VAR_8->new_cfqq)
   VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_8);
 }

 VAR_8->allocated[VAR_6]++;
 VAR_8->ref++;

 VAR_2->elevator_private[0] = VAR_5;
 VAR_2->elevator_private[1] = VAR_8;
 VAR_2->elevator_private[2] = FUNC_7(VAR_8->cfqg);

 FUNC_16(VAR_1->queue_lock, VAR_9);

 return 0;

queue_fail:
 if (VAR_5)
  FUNC_12(VAR_5->ioc);

 FUNC_8(VAR_4);
 FUNC_16(VAR_1->queue_lock, VAR_9);
 FUNC_4(VAR_4, "set_request fail");
 return 1;
}
