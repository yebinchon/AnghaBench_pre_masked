
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int user_addr_t ;
typedef scalar_t__ task_t ;
struct task_name_for_pid_args {int pid; int t; TYPE_1__* target_tport; } ;
typedef TYPE_1__* proc_t ;
typedef TYPE_1__* mach_port_name_t ;
typedef int kern_return_t ;
typedef int kauth_cred_t ;
struct TYPE_12__ {scalar_t__ p_stat; scalar_t__ task; } ;


 int FUNC_0 (int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ,int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (void*,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (int) ;
 int FUNC_19 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__) ;

kern_return_t
FUNC_22(
 struct task_name_for_pid_args *VAR_10)
{
 mach_port_name_t VAR_11 = VAR_10->target_tport;
 int VAR_12 = VAR_10->pid;
 user_addr_t VAR_13 = VAR_10->t;
 proc_t VAR_14 = VAR_4;
 task_t VAR_15;
 mach_port_name_t VAR_16;
 void * VAR_17;
 int VAR_18 = 0, VAR_19 = 0;
 kauth_cred_t VAR_20;

 FUNC_1(VAR_0);
 FUNC_0(VAR_12, VAR_12);
 FUNC_0(VAR_7, VAR_11);

 VAR_15 = FUNC_17(VAR_11);
 if (VAR_15 == VAR_6) {
  (void) FUNC_4((char *)&VAR_15, VAR_13, sizeof(mach_port_name_t));
  FUNC_2(VAR_1);
  return(VAR_1);
 }

 VAR_14 = FUNC_18(VAR_12);
 if (VAR_14 != VAR_4) {
  FUNC_0(VAR_9, VAR_14);
  VAR_20 = FUNC_13(VAR_14);
  VAR_19 = 1;

  if ((VAR_14->p_stat != VAR_5)
      && ((FUNC_5() == VAR_14)
   || FUNC_12(FUNC_9())
   || ((FUNC_11(VAR_20) == FUNC_11(FUNC_9())) &&
       ((FUNC_10(VAR_20) == FUNC_15()))))) {

   if (VAR_14->task != VAR_6) {
    FUNC_21(VAR_14->task);







    VAR_17 = (void *)FUNC_3(VAR_14->task);
    VAR_16 = FUNC_8(VAR_17,
      FUNC_7(FUNC_6()));
   } else
    VAR_16 = VAR_3;

   FUNC_0(VAR_8, VAR_16);
   (void) FUNC_4((char *)&VAR_16, VAR_13, sizeof(mach_port_name_t));
   FUNC_20(VAR_15);
   VAR_18 = VAR_2;
   goto tnfpout;
  }
 }




    FUNC_20(VAR_15);
 VAR_16 = VAR_3;
 (void) FUNC_4((char *) &VAR_16, VAR_13, sizeof(mach_port_name_t));
 VAR_18 = VAR_1;
tnfpout:
 if (VAR_19 != 0)
  FUNC_14(&VAR_20);
 if (VAR_14 != VAR_4)
  FUNC_19(VAR_14);
 FUNC_2(VAR_18);
 return(VAR_18);
}
