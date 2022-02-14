
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int period; int constraint; int computation; int preemptible; } ;
typedef TYPE_1__ thread_time_constraint_policy_data_t ;
typedef int thread_policy_t ;
struct TYPE_4__ {int affinity_tag; } ;
typedef TYPE_2__ thread_affinity_policy_data_t ;
struct sched_param {int sched_priority; } ;
typedef int kern_return_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,struct sched_param*) ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(uint32_t VAR_13)
{
 kern_return_t VAR_14;
 errno_t VAR_15;
 thread_time_constraint_policy_data_t VAR_16;

 if (VAR_12) {
  int VAR_17 = VAR_4;
  if (VAR_11 == 130)
   VAR_17 = VAR_5;

  struct sched_param VAR_18 = {.sched_priority = (int)VAR_12};
  if ((VAR_15 = FUNC_7(FUNC_5(), VAR_17, &VAR_18)))
   FUNC_0(VAR_2, VAR_15, "pthread_setschedparam: %d", VAR_13);
 }

 switch (VAR_11) {
  case 128:
   break;
  case 129:

   VAR_16.period = 100000;
   VAR_16.constraint = (uint32_t) FUNC_4(VAR_1);
   VAR_16.computation = (uint32_t) FUNC_4(VAR_0);
   VAR_16.preemptible = 0;

   VAR_14 = FUNC_8(FUNC_3(), VAR_8,
                          (thread_policy_t) &VAR_16, VAR_9);
   FUNC_2(VAR_13, VAR_14);
   break;
  case 130:
   VAR_15 = FUNC_6();
   if (VAR_15) FUNC_0(VAR_2, VAR_15, "pthread_set_fixedpriority_self");
   break;
  default:
   FUNC_1(VAR_3, "invalid policy type %d", VAR_11);
 }

 if (VAR_10) {
  thread_affinity_policy_data_t VAR_19;

  VAR_19.affinity_tag = VAR_13 % 2;

  VAR_14 = FUNC_8(FUNC_3(), VAR_6,
                         (thread_policy_t)&VAR_19, VAR_7);
  FUNC_2(VAR_13, VAR_14);
 }

 return 0;
}
