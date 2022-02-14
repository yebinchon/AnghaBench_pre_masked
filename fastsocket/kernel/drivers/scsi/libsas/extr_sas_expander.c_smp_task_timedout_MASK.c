
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_task {int task_state_flags; TYPE_1__* slow_task; int task_state_lock; } ;
struct TYPE_2__ {int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct sas_task *VAR_3 = (void *) VAR_2;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->task_state_lock, VAR_4);
 if (!(VAR_3->task_state_flags & VAR_1))
  VAR_3->task_state_flags |= VAR_0;
 FUNC_2(&VAR_3->task_state_lock, VAR_4);

 FUNC_0(&VAR_3->slow_task->completion);
}
