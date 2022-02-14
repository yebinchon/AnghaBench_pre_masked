
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
typedef TYPE_2__* task_t ;
typedef int spl_t ;
typedef int mach_exception_data_type_t ;
typedef int event_t ;
struct TYPE_27__ {int active_thread_count; scalar_t__ corpse_info; int * bsd_info; } ;
struct TYPE_26__ {int sched_flags; scalar_t__ depress_timer_active; scalar_t__ wait_timer_active; scalar_t__ reserved_stack; scalar_t__ promotions; scalar_t__ was_promoted_on_wakeup; scalar_t__ rwlock_count; int * waiting_for_mutex; int state; int wait_timer; scalar_t__ wait_timer_is_set; int uthread; TYPE_2__* task; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,long,long,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,long*,long*) ;
 int FUNC_11 (int *,long*,long*,long*,long*) ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int ,char*) ;
 int VAR_15 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*,TYPE_1__*,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*,int ) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*,int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_34 (TYPE_1__*) ;
 int FUNC_35 (int ) ;
 scalar_t__ FUNC_36 (int *) ;
 int FUNC_37 (TYPE_2__*,int ,int *) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (TYPE_1__*) ;

void
FUNC_40(void)
{
 thread_t VAR_17 = FUNC_6();
 task_t VAR_18;
 int VAR_19;

 FUNC_13(VAR_17);

 FUNC_0(VAR_15);

 FUNC_30(VAR_17);

 FUNC_9(VAR_17);

 FUNC_31(VAR_17);

 FUNC_33(VAR_17, ((void*)0));

 spl_t VAR_20 = FUNC_17();
 FUNC_28(VAR_17);

 FUNC_27(VAR_17);

 FUNC_34(VAR_17);
 FUNC_18(VAR_20);





 FUNC_39(VAR_17);

 FUNC_30(VAR_17);

 FUNC_32(VAR_17);

 FUNC_31(VAR_17);

 FUNC_3(VAR_17, ((void*)0));

 if (VAR_14 && FUNC_5(VAR_17->uthread)) {
  char VAR_21[VAR_2];
  FUNC_4(VAR_17->uthread, VAR_21);
  FUNC_12(VAR_12, VAR_21);
 }

 VAR_18 = VAR_17->task;
 FUNC_37(VAR_18, VAR_17->uthread, VAR_18->bsd_info);

 if (VAR_14 && VAR_18->bsd_info && !FUNC_22(VAR_18)) {

  long VAR_22 = 0;
  long VAR_23 = 0;

  FUNC_10(VAR_17->task->bsd_info, &VAR_22, &VAR_23);
  FUNC_1(VAR_10, VAR_22, VAR_23);
 }
 VAR_19 = FUNC_8(&VAR_18->active_thread_count, 1);





 if (VAR_19 == 0 && VAR_18->bsd_info != ((void*)0) && !FUNC_22(VAR_18)) {
  mach_exception_data_type_t VAR_24 = 0;
  if (VAR_14) {

   long VAR_25[4] = {};
   FUNC_11(VAR_17->task->bsd_info, &VAR_25[0], &VAR_25[1], &VAR_25[2], &VAR_25[3]);
   FUNC_1(VAR_11, VAR_25[0], VAR_25[1], VAR_25[2], VAR_25[3]);
  }


  VAR_24 = FUNC_15(VAR_18->bsd_info);
  FUNC_16(VAR_18->bsd_info);





  if (VAR_18->corpse_info) {
   FUNC_20(VAR_18, FUNC_6(), VAR_0, VAR_24);
  }
 }

 if (VAR_19 == 0) {
  FUNC_23(VAR_18);
  if (FUNC_21(VAR_18)) {
   FUNC_35((event_t)&VAR_18->active_thread_count);
  }
  FUNC_24(VAR_18);
 }

 FUNC_38(VAR_17->uthread);

 VAR_20 = FUNC_17();
 FUNC_28(VAR_17);
 FUNC_2((VAR_17->sched_flags & VAR_4) == 0);

 uint32_t VAR_26 = 1;

 while (VAR_17->depress_timer_active > 0) {
  FUNC_34(VAR_17);
  FUNC_18(VAR_20);

  FUNC_7(VAR_26++);

  if (VAR_26 > VAR_13)
   FUNC_14("depress timer failed to inactivate!"
         "thread: %p depress_timer_active: %d",
         VAR_17, VAR_17->depress_timer_active);

  VAR_20 = FUNC_17();
  FUNC_28(VAR_17);
 }





 if (VAR_17->wait_timer_is_set) {
  VAR_17->wait_timer_is_set = VAR_1;

  if (FUNC_36(&VAR_17->wait_timer))
   VAR_17->wait_timer_active--;
 }

 VAR_26 = 1;

 while (VAR_17->wait_timer_active > 0) {
  FUNC_34(VAR_17);
  FUNC_18(VAR_20);

  FUNC_7(VAR_26++);

  if (VAR_26 > VAR_13)
   FUNC_14("wait timer failed to inactivate!"
         "thread: %p wait_timer_active: %d",
         VAR_17, VAR_17->wait_timer_active);

  VAR_20 = FUNC_17();
  FUNC_28(VAR_17);
 }




 if (VAR_17->reserved_stack != 0) {
  FUNC_19(VAR_17);
  VAR_17->reserved_stack = 0;
 }




 VAR_17->state |= VAR_9;
 FUNC_29(VAR_17, VAR_3);

 FUNC_2((VAR_17->sched_flags & VAR_8) == 0);
 FUNC_2((VAR_17->sched_flags & VAR_7) == 0);
 FUNC_2((VAR_17->sched_flags & VAR_5) == 0);
 FUNC_2((VAR_17->sched_flags & VAR_6) == 0);
 FUNC_2(VAR_17->promotions == 0);
 FUNC_2(VAR_17->was_promoted_on_wakeup == 0);
 FUNC_2(VAR_17->waiting_for_mutex == ((void*)0));
 FUNC_2(VAR_17->rwlock_count == 0);

 FUNC_34(VAR_17);


 FUNC_26((thread_continue_t)VAR_16);

}
