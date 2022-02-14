
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mm_struct {TYPE_4__* core_state; } ;
struct core_thread {struct task_struct* task; struct core_thread* next; } ;
struct TYPE_11__ {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_9__ {struct core_thread* next; } ;
struct TYPE_10__ {TYPE_3__ dumper; } ;
struct TYPE_8__ {int siglock; } ;
struct TYPE_7__ {int group_exit_code; int flags; int * group_exit_task; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct mm_struct *VAR_2, bool VAR_3)
{
 struct core_thread *VAR_4, *VAR_5;
 struct task_struct *VAR_6;

 FUNC_2(&VAR_1->sighand->siglock);
 if (VAR_3 && !FUNC_0(VAR_1))
  VAR_1->signal->group_exit_code |= 0x80;
 VAR_1->signal->group_exit_task = ((void*)0);
 VAR_1->signal->flags = VAR_0;
 FUNC_3(&VAR_1->sighand->siglock);

 VAR_5 = VAR_2->core_state->dumper.next;
 while ((VAR_4 = VAR_5) != ((void*)0)) {
  VAR_5 = VAR_4->next;
  VAR_6 = VAR_4->task;




  FUNC_1();
  VAR_4->task = ((void*)0);
  FUNC_4(VAR_6);
 }

 VAR_2->core_state = ((void*)0);
}
