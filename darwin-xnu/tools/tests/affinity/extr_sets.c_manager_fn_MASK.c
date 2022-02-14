
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int data; } ;
typedef TYPE_3__ work_t ;
typedef int thread_policy_t ;
struct TYPE_14__ {void* timeshare; } ;
typedef TYPE_4__ thread_extended_policy_data_t ;
struct TYPE_15__ {int affinity_tag; } ;
typedef TYPE_5__ thread_affinity_policy_data_t ;
struct TYPE_16__ {int stagenum; int name; TYPE_2__* output; int (* fn ) (int ,int ) ;TYPE_1__* input; TYPE_7__* set; } ;
typedef TYPE_6__ stage_info_t ;
struct TYPE_17__ {int setnum; int isize; } ;
typedef TYPE_7__ line_info_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_12__ {int mtx; int cnd; scalar_t__ waiters; int queue; } ;
struct TYPE_11__ {int mtx; int queue; void* waiters; int cnd; } ;


 int FUNC_0 (char*,int ,int ,int ,...) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_10 ;
 long VAR_11 ;
 int VAR_12 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_13 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ,int ,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

void *
FUNC_17(void *VAR_17)
{
 stage_info_t *VAR_18 = (stage_info_t *) VAR_17;
 line_info_t *VAR_19 = VAR_18->set;
 kern_return_t VAR_20;
 long VAR_21 = 0;





 thread_extended_policy_data_t VAR_22;
 thread_affinity_policy_data_t VAR_23;

 VAR_22.timeshare = VAR_0;
 VAR_20 = FUNC_16(
   FUNC_8(), VAR_4,
   (thread_policy_t) &VAR_22,
   VAR_5);
 if (VAR_20 != VAR_1)
  FUNC_9("thread_policy_set(THREAD_EXTENDED_POLICY) returned %d\n", VAR_20);

 if (VAR_7) {
  VAR_23.affinity_tag = VAR_19->setnum;
  VAR_20 = FUNC_16(
    FUNC_8(), VAR_2,
    (thread_policy_t) &VAR_23,
    VAR_3);
  if (VAR_20 != VAR_1)
   FUNC_9("thread_policy_set(THREAD_AFFINITY_POLICY) returned %d\n", VAR_20);
 }

 FUNC_0("Starting %s set: %d stage: %d\n", VAR_18->name, VAR_19->setnum, VAR_18->stagenum);





 FUNC_13(&VAR_9);
 VAR_15++;
 if (VAR_15 == VAR_14) {
  FUNC_14(&VAR_9);
  if (VAR_10) {
   FUNC_9("  all threads ready for process %d, "
    "hit any key to start", FUNC_6());
   FUNC_4(VAR_13);
   (void) FUNC_5();
  }
  FUNC_10(&VAR_8);
  VAR_16 = FUNC_7();
 } else {
  FUNC_12(&VAR_8, &VAR_9);
  FUNC_14(&VAR_9);
 }

 do {
  int VAR_24;
  work_t *VAR_25;





  FUNC_13(&VAR_18->input->mtx);
  while (1) {
   VAR_25 = FUNC_1(&(VAR_18->input->queue));
   if (VAR_25 != ((void*)0))
    break;
   FUNC_0("    %s[%d,%d] iteration %d waiting for buffer\n",
    VAR_18->name, VAR_19->setnum, VAR_18->stagenum, VAR_21);
   VAR_18->input->waiters = VAR_6;
   FUNC_12(&VAR_18->input->cnd, &VAR_18->input->mtx);
   VAR_18->input->waiters = VAR_0;
  }
  FUNC_3(&(VAR_18->input->queue), VAR_25, VAR_12);
  FUNC_14(&VAR_18->input->mtx);

  FUNC_0("  %s[%d,%d] iteration %d work %p data %p\n",
   VAR_18->name, VAR_19->setnum, VAR_18->stagenum, VAR_21, VAR_25, VAR_25->data);


  (void) VAR_18->fn(VAR_25->data, VAR_19->isize);





  FUNC_13(&VAR_18->output->mtx);
  FUNC_2(&(VAR_18->output->queue), VAR_25, VAR_12);
  if (VAR_18->output->waiters) {
   FUNC_0("    %s[%d,%d] iteration %d signaling work\n",
    VAR_18->name, VAR_19->setnum, VAR_18->stagenum, VAR_21);
   FUNC_11(&VAR_18->output->cnd);
  }
  FUNC_14(&VAR_18->output->mtx);
 } while (++VAR_21 < VAR_11);

 FUNC_0("Ending %s[%d,%d]\n", VAR_18->name, VAR_19->setnum, VAR_18->stagenum);

 return (void *) VAR_21;
}
