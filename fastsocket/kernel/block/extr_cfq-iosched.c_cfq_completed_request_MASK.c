
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int cmd_flags; scalar_t__ start_time; } ;
struct cfq_queue {unsigned long slice_end; int sort_list; TYPE_1__* cfqg; int dispatched; struct cfq_data* cfqd; } ;
struct cfq_data {unsigned long last_delayed_sync; unsigned long cfq_slice_idle; unsigned long cfq_group_idle; int rq_in_driver; struct cfq_queue* active_queue; scalar_t__* cfq_fifo_expire; int * rq_in_flight; } ;
struct TYPE_6__ {int dispatched; } ;
struct TYPE_5__ {unsigned long last_end_request; } ;
struct TYPE_4__ {int blkg; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct request*) ;
 struct cfq_queue* FUNC_2 (struct request*) ;
 TYPE_2__* FUNC_3 (struct request*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cfq_data*) ;
 int FUNC_6 (int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (struct cfq_queue*) ;
 size_t FUNC_8 (struct cfq_queue*) ;
 scalar_t__ FUNC_9 (struct cfq_queue*) ;
 int FUNC_10 (struct cfq_queue*) ;
 int FUNC_11 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_12 (struct cfq_data*,struct cfq_queue*,char*,...) ;
 int FUNC_13 (struct cfq_queue*) ;
 int FUNC_14 (struct cfq_data*) ;
 int FUNC_15 (struct cfq_data*,struct cfq_queue*) ;
 scalar_t__ FUNC_16 (struct cfq_data*,struct cfq_queue*) ;
 int FUNC_17 (struct cfq_data*,int) ;
 scalar_t__ FUNC_18 (struct cfq_queue*) ;
 int FUNC_19 (struct cfq_data*) ;
 unsigned long VAR_1 ;
 int FUNC_20 (struct request*) ;
 int FUNC_21 (struct request*) ;
 int FUNC_22 (struct request*) ;
 int FUNC_23 (struct request*) ;
 int FUNC_24 (scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_25(struct request_queue *VAR_2, struct request *VAR_3)
{
 struct cfq_queue *VAR_4 = FUNC_2(VAR_3);
 struct cfq_data *VAR_5 = VAR_4->cfqd;
 const int VAR_6 = FUNC_22(VAR_3);
 unsigned long VAR_7;

 VAR_7 = VAR_1;
 FUNC_12(VAR_5, VAR_4, "complete rqnoidle %d",
       !!(VAR_3->cmd_flags & VAR_0));

 FUNC_19(VAR_5);

 FUNC_4(!VAR_5->rq_in_driver);
 FUNC_4(!VAR_4->dispatched);
 VAR_5->rq_in_driver--;
 VAR_4->dispatched--;
 (FUNC_1(VAR_3))->dispatched--;
 FUNC_6(&VAR_4->cfqg->blkg,
   FUNC_23(VAR_3), FUNC_21(VAR_3),
   FUNC_20(VAR_3), FUNC_22(VAR_3));

 VAR_5->rq_in_flight[FUNC_8(VAR_4)]--;

 if (VAR_6) {
  FUNC_3(VAR_3)->last_end_request = VAR_7;
  if (!FUNC_24(VAR_3->start_time + VAR_5->cfq_fifo_expire[1], VAR_7))
   VAR_5->last_delayed_sync = VAR_7;
 }





 if (VAR_5->active_queue == VAR_4) {
  const bool VAR_8 = FUNC_0(&VAR_4->sort_list);

  if (FUNC_7(VAR_4)) {
   FUNC_15(VAR_5, VAR_4);
   FUNC_10(VAR_4);
  }





  if (FUNC_16(VAR_5, VAR_4)) {
   unsigned long VAR_9 = VAR_5->cfq_slice_idle;
   if (!VAR_5->cfq_slice_idle)
    VAR_9 = VAR_5->cfq_group_idle;
   VAR_4->slice_end = VAR_1 + VAR_9;
   FUNC_13(VAR_4);
   FUNC_12(VAR_5, VAR_4, "will busy wait");
  }
  if (FUNC_18(VAR_4) || FUNC_9(VAR_4))
   FUNC_17(VAR_5, 1);
  else if (VAR_6 && VAR_8 &&
    !FUNC_11(VAR_5, VAR_4)) {
   FUNC_5(VAR_5);
  }
 }

 if (!VAR_5->rq_in_driver)
  FUNC_14(VAR_5);
}
