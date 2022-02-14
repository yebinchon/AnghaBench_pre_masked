
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef scalar_t__ task_t ;
struct pid_for_task_args {int t; int pid; } ;
typedef scalar_t__ proc_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

kern_return_t
FUNC_10(
 struct pid_for_task_args *VAR_5)
{
 mach_port_name_t VAR_6 = VAR_5->t;
 user_addr_t VAR_7 = VAR_5->pid;
 proc_t VAR_8;
 task_t VAR_9;
 int VAR_10 = -1;
 kern_return_t VAR_11 = VAR_2;

 FUNC_1(VAR_0);
 FUNC_0(VAR_4, VAR_6);

 VAR_9 = FUNC_6(VAR_6);

 if (VAR_9 == VAR_3) {
  VAR_11 = VAR_1;
  goto pftout;
 } else {
  VAR_8 = FUNC_4(VAR_9);
  if (VAR_8) {
   VAR_10 = FUNC_7(VAR_8);
   VAR_11 = VAR_2;
  } else if (FUNC_5(VAR_9)) {
   VAR_10 = FUNC_9(VAR_9);
   VAR_11 = VAR_2;
  }else {
   VAR_11 = VAR_1;
  }
 }
 FUNC_8(VAR_9);
pftout:
 FUNC_0(VAR_10, VAR_10);
 (void) FUNC_3((char *) &VAR_10, VAR_7, sizeof(int));
 FUNC_2(VAR_11);
 return(VAR_11);
}
