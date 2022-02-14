
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_rlimit_control_wakeupmon {int wm_flags; int wm_rate; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct proc_rlimit_control_wakeupmon*) ;

int
FUNC_1(pid_t VAR_2, int *VAR_3, int *VAR_4)
{
 struct proc_rlimit_control_wakeupmon VAR_5;
 int VAR_6;

 VAR_5.wm_flags = VAR_1;

 if ((VAR_6 = FUNC_0(VAR_2, VAR_0, &VAR_5)) != 0) {
  return (VAR_6);
 }

 *VAR_3 = VAR_5.wm_rate;
 *VAR_4 = VAR_5.wm_flags;

 return (0);
}
