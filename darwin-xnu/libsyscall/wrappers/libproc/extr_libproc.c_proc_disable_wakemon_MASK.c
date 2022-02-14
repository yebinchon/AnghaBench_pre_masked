
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_rlimit_control_wakeupmon {int wm_rate; int wm_flags; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct proc_rlimit_control_wakeupmon*) ;

int
FUNC_1(pid_t VAR_2)
{
 struct proc_rlimit_control_wakeupmon VAR_3;

 VAR_3.wm_flags = VAR_1;
 VAR_3.wm_rate = -1;

 return (FUNC_0(VAR_2, VAR_0, &VAR_3));
}
