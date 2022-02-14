
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ exit_state; struct sighand_struct* sighand; int exit_signal; struct task_struct* group_leader; int tasks; int pid; int start_time; struct signal_struct* signal; } ;
struct signal_struct {int notify_count; int maxrss; struct task_struct* group_exit_task; int count; } ;
struct sighand_struct {int siglock; int action; int count; } ;
typedef int spinlock_t ;
struct TYPE_2__ {scalar_t__ mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sighand_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct task_struct*,int ,int ) ;
 TYPE_1__* VAR_10 ;
 int FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (struct signal_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct task_struct*) ;
 struct sighand_struct* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct sighand_struct*,struct sighand_struct*) ;
 int FUNC_15 (struct task_struct*) ;
 int FUNC_16 (struct task_struct*,struct task_struct*) ;
 int FUNC_17 () ;
 int FUNC_18 (int *,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_19 (struct signal_struct*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct task_struct*) ;
 int VAR_12 ;
 scalar_t__ FUNC_25 (struct task_struct*) ;
 scalar_t__ FUNC_26 (struct task_struct*) ;
 int FUNC_27 (struct task_struct*,struct task_struct*,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct task_struct*) ;

__attribute__((used)) static int FUNC_31(struct task_struct *VAR_13)
{
 struct signal_struct *VAR_14 = VAR_13->signal;
 struct sighand_struct *VAR_15 = VAR_13->sighand;
 spinlock_t *VAR_16 = &VAR_15->siglock;
 int VAR_17;

 if (FUNC_25(VAR_13))
  goto no_thread_group;




 FUNC_21(VAR_16);
 if (FUNC_19(VAR_14)) {




  FUNC_23(VAR_16);
  return -VAR_0;
 }
 VAR_14->group_exit_task = VAR_13;
 FUNC_30(VAR_13);


 VAR_17 = FUNC_26(VAR_13) ? 1 : 2;
 VAR_14->notify_count = VAR_17;
 while (FUNC_3(&VAR_14->count) > VAR_17) {
  FUNC_2(VAR_9);
  FUNC_23(VAR_16);
  FUNC_17();
  FUNC_21(VAR_16);
 }
 FUNC_23(VAR_16);






 if (!FUNC_26(VAR_13)) {
  struct task_struct *VAR_18 = VAR_13->group_leader;

  VAR_14->notify_count = -1;
  for (;;) {
   FUNC_28(&VAR_12);
   if (FUNC_11(VAR_18->exit_state))
    break;
   FUNC_2(VAR_9);
   FUNC_29(&VAR_12);
   FUNC_17();
  }
  VAR_13->start_time = VAR_18->start_time;

  FUNC_0(!FUNC_16(VAR_18, VAR_13));
  FUNC_0(FUNC_9(VAR_13));
  FUNC_6(VAR_13, VAR_6);
  VAR_13->pid = VAR_18->pid;
  FUNC_5(VAR_13, VAR_6, FUNC_24(VAR_18));
  FUNC_27(VAR_18, VAR_13, VAR_5);
  FUNC_27(VAR_18, VAR_13, VAR_7);
  FUNC_12(&VAR_18->tasks, &VAR_13->tasks);

  VAR_13->group_leader = VAR_13;
  VAR_18->group_leader = VAR_13;

  VAR_13->exit_signal = VAR_8;

  FUNC_0(VAR_18->exit_state != VAR_3);
  VAR_18->exit_state = VAR_2;
  FUNC_29(&VAR_12);

  FUNC_15(VAR_18);
 }

 VAR_14->group_exit_task = ((void*)0);
 VAR_14->notify_count = 0;

no_thread_group:
 if (VAR_10->mm)
  FUNC_18(&VAR_14->maxrss, VAR_10->mm);

 FUNC_7(VAR_14);
 FUNC_8();

 if (FUNC_3(&VAR_15->count) != 1) {
  struct sighand_struct *VAR_19;




  VAR_19 = FUNC_10(VAR_11, VAR_4);
  if (!VAR_19)
   return -VAR_1;

  FUNC_4(&VAR_19->count, 1);
  FUNC_13(VAR_19->action, VAR_15->action,
         sizeof(VAR_19->action));

  FUNC_28(&VAR_12);
  FUNC_20(&VAR_15->siglock);
  FUNC_14(VAR_13->sighand, VAR_19);
  FUNC_22(&VAR_15->siglock);
  FUNC_29(&VAR_12);

  FUNC_1(VAR_15);
 }

 FUNC_0(!FUNC_26(VAR_13));
 return 0;
}
