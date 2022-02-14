
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int setnum; TYPE_6__* stage; } ;
typedef TYPE_3__ worker_info_t ;
struct TYPE_13__ {long number; int tag; int isize; int data; } ;
typedef TYPE_4__ work_t ;
typedef int thread_policy_t ;
struct TYPE_14__ {int timeshare; } ;
typedef TYPE_5__ thread_extended_policy_data_t ;
struct TYPE_15__ {scalar_t__ stagenum; scalar_t__ work_todo; int name; TYPE_2__* output; int (* fn ) (int ,int ) ;TYPE_1__* input; } ;
typedef TYPE_6__ stage_info_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;
struct TYPE_11__ {int cnd; int mtx; scalar_t__ waiters; int queue; } ;
struct TYPE_10__ {int mtx; int queue; int waiters; int cnd; } ;


 int FUNC_0 (char*,int ,int,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*,int ) ;
 int FUNC_3 (int *,TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_9 ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int ,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void *
FUNC_18(void *VAR_13)
{
 worker_info_t *VAR_14 = (worker_info_t *) VAR_13;
 stage_info_t *VAR_15 = VAR_14->stage;
 boolean_t VAR_16 = (VAR_15->stagenum == 0);
 long VAR_17 = 0;
 int VAR_18 = 0;

 kern_return_t VAR_19;
 thread_extended_policy_data_t VAR_20;
 VAR_20.timeshare = VAR_0;
 VAR_19 = FUNC_17(
   FUNC_9(), VAR_2,
   (thread_policy_t) &VAR_20,
   VAR_3);
 if (VAR_19 != VAR_1)
  FUNC_10("thread_policy_set(THREAD_EXTENDED_POLICY) returned %d\n", VAR_19);





 if (VAR_4 && VAR_16) {
  FUNC_4(VAR_14->setnum);
  VAR_18 = VAR_14->setnum;
 }

 FUNC_0("Starting %s %d, stage: %d\n", VAR_15->name, VAR_14->setnum, VAR_15->stagenum);





 FUNC_14(&VAR_6);
 VAR_11++;
 if (VAR_11 == VAR_10) {
  FUNC_15(&VAR_6);
  if (VAR_7) {
   FUNC_10("  all threads ready for process %d, "
    "hit any key to start", FUNC_7());
   FUNC_5(VAR_9);
   (void) FUNC_6();
  }
  FUNC_11(&VAR_5);
  VAR_12 = FUNC_8();
 } else {
  FUNC_13(&VAR_5, &VAR_6);
  FUNC_15(&VAR_6);
 }

 do {
  work_t *VAR_21;






  FUNC_14(&VAR_15->input->mtx);
  while (1) {
   if (VAR_15->work_todo == 0) {
    FUNC_15(&VAR_15->input->mtx);
    goto out;
   }
   VAR_21 = FUNC_1(&(VAR_15->input->queue));
   if (VAR_21 != ((void*)0))
    break;
   FUNC_0("    %s[%d,%d] todo %d waiting for buffer\n",
    VAR_15->name, VAR_14->setnum, VAR_15->stagenum, VAR_15->work_todo);
   VAR_15->input->waiters++;
   FUNC_13(&VAR_15->input->cnd, &VAR_15->input->mtx);
   VAR_15->input->waiters--;
  }
  FUNC_3(&(VAR_15->input->queue), VAR_21, VAR_8);
  VAR_17 = VAR_15->work_todo--;
  FUNC_15(&VAR_15->input->mtx);

  if (VAR_16) {
   VAR_21->number = VAR_17;
   VAR_21->tag = VAR_14->setnum;
  } else {
   if (VAR_4 && VAR_18 != VAR_21->tag) {
    FUNC_4(VAR_21->tag);
    VAR_18 = VAR_21->tag;
   }
  }

  FUNC_0("  %s[%d,%d] todo %d work %p data %p\n",
   VAR_15->name, VAR_14->setnum, VAR_15->stagenum, VAR_17, VAR_21, VAR_21->data);


  (void) VAR_15->fn(VAR_21->data, VAR_21->isize);





  FUNC_14(&VAR_15->output->mtx);
  FUNC_2(&(VAR_15->output->queue), VAR_21, VAR_8);
  if (VAR_15->output->waiters) {
   FUNC_0("    %s[%d,%d] todo %d signaling work\n",
    VAR_15->name, VAR_14->setnum, VAR_15->stagenum, VAR_17);
   FUNC_12(&VAR_15->output->cnd);
  }
  FUNC_15(&VAR_15->output->mtx);

 } while (1);

out:
 FUNC_11(&VAR_15->output->cnd);

 FUNC_0("Ending %s[%d,%d]\n", VAR_15->name, VAR_14->setnum, VAR_15->stagenum);

 return (void *) VAR_17;
}
