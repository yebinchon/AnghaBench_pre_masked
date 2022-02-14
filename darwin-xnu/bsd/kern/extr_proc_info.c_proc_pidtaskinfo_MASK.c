
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_t ;
struct proc_taskinfo_internal {int dummy; } ;
struct proc_taskinfo {int dummy; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int task; } ;


 int FUNC_0 (struct proc_taskinfo*,int) ;
 int FUNC_1 (int ,struct proc_taskinfo_internal*) ;

int
FUNC_2(proc_t VAR_0, struct proc_taskinfo * VAR_1)
{
 task_t VAR_2;

 VAR_2 = VAR_0->task;

 FUNC_0(VAR_1, sizeof(struct proc_taskinfo));
 FUNC_1(VAR_2, (struct proc_taskinfo_internal *)VAR_1);

 return(0);
}
