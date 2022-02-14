
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;


typedef int user_addr_t ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int thread_t ;
struct uthread {scalar_t__ t_dtrace_resumepid; scalar_t__ t_dtrace_stop; scalar_t__ t_dtrace_sig; } ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_24__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_22__ {TYPE_2__ it_value; } ;
struct TYPE_23__ {int p_flag; int p_dtrace_stop; int task; TYPE_2__ p_rlim_cpu; TYPE_16__ p_vtimer_prof; TYPE_16__ p_vtimer_user; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,struct uthread*) ;
 int FUNC_1 (int ,int*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct uthread* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_16__*,int ) ;
 int FUNC_11 (int) ;
 TYPE_1__* FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,scalar_t__) ;
 int FUNC_20 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (int ,int ,int *) ;
 int FUNC_29 (TYPE_2__*) ;
 scalar_t__ FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*,struct timeval*,TYPE_2__*) ;

void
FUNC_32(thread_t VAR_9)
{
 proc_t VAR_10 = FUNC_4();
 struct uthread *VAR_11 = FUNC_7(VAR_9);
 int VAR_12;
 user_addr_t VAR_13;
 static int VAR_14 = 0;

 if (VAR_10 == ((void*)0))
  return;


 if (FUNC_22(FUNC_5()) || FUNC_23(FUNC_5())) {
  return;
 }

 if ((VAR_10->p_flag & VAR_1) && (VAR_10->p_flag & VAR_2)) {
  VAR_13 = FUNC_8();
  FUNC_2(VAR_10, VAR_13, 1);
  FUNC_1(~((uint32_t)VAR_1), &VAR_10->p_flag);
 }

 if (FUNC_30(&VAR_10->p_vtimer_user.it_value)) {
  uint32_t VAR_15;

  FUNC_28(VAR_10->task, VAR_8, &VAR_15);

  if (!FUNC_10(VAR_10, &VAR_10->p_vtimer_user, VAR_15)) {
   if (FUNC_30(&VAR_10->p_vtimer_user.it_value))
    FUNC_27(VAR_10->task, VAR_8);
   else
    FUNC_26(VAR_10->task, VAR_8);

   FUNC_20(VAR_10, VAR_9, VAR_4);
  }
 }

 if (FUNC_30(&VAR_10->p_vtimer_prof.it_value)) {
  uint32_t VAR_16;

  FUNC_28(VAR_10->task, VAR_6, &VAR_16);

  if (!FUNC_10(VAR_10, &VAR_10->p_vtimer_prof, VAR_16)) {
   if (FUNC_30(&VAR_10->p_vtimer_prof.it_value))
    FUNC_27(VAR_10->task, VAR_6);
   else
    FUNC_26(VAR_10->task, VAR_6);

   FUNC_20(VAR_10, VAR_9, VAR_3);
  }
 }

 if (FUNC_30(&VAR_10->p_rlim_cpu)) {
  struct timeval VAR_17;

  FUNC_28(VAR_10->task, VAR_7, (uint32_t *) &VAR_17.tv_usec);

  FUNC_16(VAR_10);
  if (VAR_10->p_rlim_cpu.tv_sec > 0 || VAR_10->p_rlim_cpu.tv_usec > VAR_17.tv_usec) {
   VAR_17.tv_sec = 0;
   FUNC_31(&VAR_10->p_rlim_cpu, &VAR_17, &VAR_10->p_rlim_cpu);
   FUNC_17(VAR_10);
  } else {

   FUNC_29(&VAR_10->p_rlim_cpu);
   FUNC_17(VAR_10);

   FUNC_26(VAR_10->task, VAR_7);

   FUNC_20(VAR_10, VAR_9, VAR_5);
  }
 }
 FUNC_13(VAR_10);
 if (FUNC_0(VAR_10, FUNC_6(), VAR_11)) {
  while ( (VAR_12 = FUNC_9(VAR_10)) )
   FUNC_11(VAR_12);
 }
 FUNC_18(VAR_10);







 if (!VAR_14) {
  VAR_14 = 1;
  FUNC_3();
 }
}
