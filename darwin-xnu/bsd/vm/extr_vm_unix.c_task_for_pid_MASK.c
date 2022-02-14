
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int user_addr_t ;
typedef scalar_t__ task_t ;
struct task_for_pid_args {int pid; int t; TYPE_1__* target_tport; } ;
typedef TYPE_1__* proc_t ;
typedef TYPE_1__* mach_port_name_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_11__ {scalar_t__ task; } ;


 int FUNC_0 (int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,int) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (void*,int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (int) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 () ;
 int VAR_14 ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (scalar_t__,scalar_t__*) ;
 int FUNC_24 (scalar_t__) ;

kern_return_t
FUNC_25(
 struct task_for_pid_args *VAR_15)
{
 mach_port_name_t VAR_16 = VAR_15->target_tport;
 int VAR_17 = VAR_15->pid;
 user_addr_t VAR_18 = VAR_15->t;
 proc_t VAR_19 = VAR_10;
 task_t VAR_20 = VAR_11;
 task_t VAR_21 = VAR_11;
 mach_port_name_t VAR_22 = VAR_8;
 ipc_port_t VAR_23 = VAR_8;
 void * VAR_24;
 int VAR_25 = 0;

 FUNC_1(VAR_0);
 FUNC_0(VAR_17, VAR_17);
 FUNC_0(VAR_12, VAR_16);


 if (VAR_17 == 0) {
  (void ) FUNC_5((char *)&VAR_20, VAR_18, sizeof(mach_port_name_t));
  FUNC_2(VAR_4);
  return(VAR_4);
 }

 VAR_20 = FUNC_17(VAR_16);
 if (VAR_20 == VAR_11) {
  (void) FUNC_5((char *)&VAR_20, VAR_18, sizeof(mach_port_name_t));
  FUNC_2(VAR_4);
  return(VAR_4);
 }


 VAR_19 = FUNC_18(VAR_17);
 if (VAR_19 == VAR_10) {
  VAR_25 = VAR_4;
  goto tfpout;
 }





 if (!(FUNC_22(VAR_19))) {
  VAR_25 = VAR_4;
  goto tfpout;
 }

 if (VAR_19->task == VAR_11) {
  VAR_25 = VAR_6;
  goto tfpout;
 }
 VAR_21 = VAR_19->task;
 FUNC_24(VAR_21);


 if (!FUNC_14(FUNC_13()) &&
  VAR_19 != FUNC_6() &&
  (FUNC_23(VAR_21, &VAR_23) == 0) &&
  (VAR_23 != VAR_2)) {

  if (VAR_23 == VAR_1) {
   VAR_25 = VAR_5;
   goto tfpout;
  }






  FUNC_19(VAR_19);
  VAR_19 = VAR_10;


  VAR_25 = FUNC_3(VAR_23, FUNC_20(), FUNC_15(), VAR_17);

  if (VAR_25 != VAR_7) {
   if (VAR_25 == VAR_9)
    VAR_25 = VAR_3;
   else
    VAR_25 = VAR_4;
   goto tfpout;
  }
 }


 FUNC_8(VAR_21);
 VAR_24 = (void *) FUNC_4(VAR_21);


 if (FUNC_12(VAR_21)) {

  VAR_21 = VAR_11;
  FUNC_11(VAR_24);
  VAR_25 = VAR_4;
  goto tfpout;
 }


 VAR_21 = VAR_11;
 VAR_22 = FUNC_10(
   VAR_24,
   FUNC_9(FUNC_7()));

 VAR_25 = VAR_6;

tfpout:
 FUNC_21(VAR_20);
 FUNC_0(VAR_13, VAR_22);
 (void) FUNC_5((char *) &VAR_22, VAR_18, sizeof(mach_port_name_t));

 if (VAR_23 != VAR_2) {
  FUNC_11(VAR_23);
 }
 if (VAR_21 != VAR_11) {
  FUNC_21(VAR_21);
 }
 if (VAR_19 != VAR_10)
  FUNC_19(VAR_19);
 FUNC_2(VAR_25);
 return(VAR_25);
}
