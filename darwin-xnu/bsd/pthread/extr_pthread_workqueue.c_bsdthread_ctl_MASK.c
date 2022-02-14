
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int thread_qos_t ;
struct proc {int dummy; } ;
struct bsdthread_ctl_args {int cmd; scalar_t__ arg2; int arg1; int arg3; } ;
typedef int pthread_priority_t ;
typedef int mach_port_name_t ;
typedef enum workq_set_self_flags { ____Placeholder_workq_set_self_flags } workq_set_self_flags ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*,int ,int ,int ) ;
 int FUNC_2 (int ,unsigned long,int*) ;
 int FUNC_3 (struct proc*,int ,int ) ;
 int FUNC_4 (struct proc*,int ,int ,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct proc*,int ,int ,int ) ;
 int FUNC_7 (struct proc*,int ) ;

int
FUNC_8(struct proc *VAR_2, struct bsdthread_ctl_args *VAR_3, int *VAR_4)
{
 switch (VAR_3->cmd) {
 case 130:
  return FUNC_1(VAR_2, (mach_port_name_t)VAR_3->arg1,
    (pthread_priority_t)VAR_3->arg2, VAR_3->arg3);
 case 132:
  FUNC_0(VAR_3->arg3);
  return FUNC_3(VAR_2, (mach_port_name_t)VAR_3->arg1,
    (user_addr_t)VAR_3->arg2);

 case 133:
  return FUNC_6(VAR_2, (mach_port_name_t)VAR_3->arg1,
    (pthread_priority_t)VAR_3->arg2, VAR_3->arg3);
 case 131:
  return FUNC_7(VAR_2, FUNC_5());

 case 128:
  return FUNC_4(VAR_2, FUNC_5(),
    (pthread_priority_t)VAR_3->arg1, (mach_port_name_t)VAR_3->arg2,
    (enum workq_set_self_flags)VAR_3->arg3);

 case 134:
  FUNC_0(VAR_3->arg3);
  return FUNC_2((thread_qos_t)VAR_3->arg1,
    (unsigned long)VAR_3->arg2, VAR_4);

 case 129:
 case 136:
 case 135:

  return VAR_1;

 default:
  return VAR_0;
 }
}
