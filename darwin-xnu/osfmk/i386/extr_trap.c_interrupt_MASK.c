
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_11__ {scalar_t__ rip; scalar_t__ rsp; int trapno; int cs; } ;
struct TYPE_16__ {TYPE_1__ isf; } ;
typedef TYPE_6__ x86_saved_state64_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint64_t ;
struct thread_kernel_state {int dummy; } ;
struct i386_exception_link {int dummy; } ;
struct TYPE_14__ {scalar_t__ earliest_soft_deadline; } ;
struct TYPE_15__ {scalar_t__ deadline; TYPE_4__ queue; } ;
struct TYPE_13__ {TYPE_2__* package; } ;
struct TYPE_17__ {int cpu_nested_istack; scalar_t__ cpu_int_event_time; scalar_t__ cpu_max_observed_int_latency; int cpu_max_observed_int_latency_vector; int cpu_kernel_stack; int cpu_signals; int cpu_prior_signals; TYPE_5__ rtclock_timer; int cpu_nested_istack_events; int * cpu_hwIntpexits; TYPE_3__ lcpu; } ;
typedef TYPE_7__ cpu_data_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_18__ {scalar_t__ nLThreadsPerPackage; } ;
struct TYPE_12__ {scalar_t__ num_idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int) ;
 int VAR_9 ;
 int FUNC_1 (int,long,long,int ,int ,int ) ;
 int FUNC_2 (int ,int,int,scalar_t__,scalar_t__,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 TYPE_7__** VAR_16 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_13 () ;
 int FUNC_14 (int,int *) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_22 ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (char*,int,scalar_t__,int,...) ;
 int FUNC_20 (int *) ;
 TYPE_6__* FUNC_21 (int *) ;
 int FUNC_22 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_23 ;
 TYPE_8__ VAR_24 ;

void
FUNC_23(x86_saved_state_t *VAR_25)
{
 uint64_t VAR_26;
 uint64_t VAR_27;
 int VAR_28;
 boolean_t VAR_29 = VAR_8;
 int VAR_30;
 int VAR_31 = FUNC_10();
 cpu_data_t *VAR_32 = VAR_16[VAR_31];
 int VAR_33 = VAR_5;

        x86_saved_state64_t *VAR_34 = FUNC_21(VAR_25);
 VAR_26 = VAR_34->isf.rip;
 VAR_27 = VAR_34->isf.rsp;
 VAR_28 = VAR_34->isf.trapno;
 if(VAR_34->isf.cs & 0x03)
  VAR_29 = VAR_15;

 if (VAR_16[VAR_31]->lcpu.package->num_idle == VAR_24.nLThreadsPerPackage)
  VAR_16[VAR_31]->cpu_hwIntpexits[VAR_28]++;

 if (VAR_28 == (VAR_10 + VAR_11))
  VAR_33 = VAR_2;
 else if (VAR_28 == (VAR_10 + VAR_12))
  VAR_33 = VAR_4;
 else
  VAR_33 = VAR_3;

 FUNC_2(VAR_9,
  FUNC_3(VAR_6, 0) | VAR_1,
  VAR_28,
  (VAR_29 ? VAR_26 : FUNC_7(VAR_26)),
  VAR_29, VAR_33, 0);

 FUNC_5(FUNC_11());







 VAR_30 = FUNC_12();





 if (!FUNC_14(VAR_28, VAR_25)) {
  FUNC_4(VAR_28);
 }

 if (FUNC_8(FUNC_12() != VAR_30)) {
  FUNC_19("Preemption level altered by interrupt vector 0x%x: initial 0x%x, final: 0x%x\n", VAR_28, VAR_30, FUNC_12());
 }


  if (FUNC_8(VAR_32->cpu_nested_istack)) {
   VAR_32->cpu_nested_istack_events++;
  }
  else {
  uint64_t VAR_35 = FUNC_15();
  uint64_t VAR_36 = VAR_35 - VAR_32->cpu_int_event_time;
  uint64_t VAR_37, VAR_38;






  if ((VAR_36 < (30000ULL)) &&
      VAR_20) {
   VAR_37 = VAR_32->rtclock_timer.queue.earliest_soft_deadline;
   VAR_38 = VAR_32->rtclock_timer.deadline;
   if ((VAR_35 >= VAR_37) && (VAR_35 < VAR_38)) {
    VAR_18++;
    FUNC_6(0x88880000 | VAR_1, VAR_35, VAR_37, VAR_38, VAR_18, 0);
    FUNC_20(VAR_25);
    FUNC_6(0x88880000 | VAR_0, VAR_35, VAR_37, VAR_18, 0, 0);
   } else {
    FUNC_6(0x77770000, VAR_35, VAR_32->rtclock_timer.queue.earliest_soft_deadline, VAR_32->rtclock_timer.deadline, VAR_18, 0);
   }
  }

  if (FUNC_8(VAR_17 && (VAR_36 > VAR_19) && !FUNC_16())) {
   FUNC_19("Interrupt vector 0x%x exceeded interrupt latency threshold, 0x%llx absolute time delta, prior signals: 0x%x, current signals: 0x%x", VAR_28, VAR_36, VAR_32->cpu_prior_signals, VAR_32->cpu_signals);
  }

  if (FUNC_8(VAR_36 > VAR_32->cpu_max_observed_int_latency)) {
   VAR_32->cpu_max_observed_int_latency = VAR_36;
   VAR_32->cpu_max_observed_int_latency_vector = VAR_28;
  }
 }




 if (!VAR_29) {
  uint64_t VAR_39 = VAR_32->cpu_kernel_stack
     + sizeof(struct thread_kernel_state)
     + sizeof(struct i386_exception_link *)
     - VAR_27;
  if (FUNC_8(VAR_39 > VAR_21)) {
   VAR_21 = (vm_offset_t)VAR_39;
   FUNC_1(
    FUNC_3(VAR_7, VAR_13),
    (long) VAR_39, (long) FUNC_7(VAR_26), 0, 0, 0);
  }
 }

 if (VAR_31 == VAR_22)
  FUNC_17();





 FUNC_0(FUNC_3(VAR_6, 0) | VAR_0,
   VAR_28);

 FUNC_9(FUNC_18() == VAR_8);
}
