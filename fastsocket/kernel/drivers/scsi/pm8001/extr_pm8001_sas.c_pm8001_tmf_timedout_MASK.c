
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_task {TYPE_1__* slow_task; int task_state_flags; } ;
struct TYPE_2__ {int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 struct sas_task *VAR_2 = (struct sas_task *)VAR_1;

 VAR_2->task_state_flags |= VAR_0;
 FUNC_0(&VAR_2->slow_task->completion);
}
