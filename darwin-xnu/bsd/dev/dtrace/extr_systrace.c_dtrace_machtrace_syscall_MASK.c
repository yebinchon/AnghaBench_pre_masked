
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_19__ {scalar_t__* r; } ;
typedef TYPE_2__ x86_saved_state_t ;
typedef TYPE_3__* uthread_t ;
typedef int uint64_t ;
typedef int syscall_arg_t ;
struct mach_call_args {int dummy; } ;
struct TYPE_21__ {int p_lock; } ;
typedef TYPE_4__ proc_t ;
struct TYPE_22__ {int stsy_return; scalar_t__* stsy_underlying; int stsy_entry; } ;
typedef TYPE_5__ machtrace_sysent_t ;
typedef scalar_t__ (* mach_call_t ) (struct mach_call_args*) ;
typedef scalar_t__ kern_return_t ;
typedef int dtrace_id_t ;
typedef TYPE_2__ arm_saved_state_t ;
struct TYPE_24__ {int rax; scalar_t__* x; } ;
struct TYPE_23__ {scalar_t__ t_dtrace_stop; TYPE_1__* t_lwp; } ;
struct TYPE_20__ {void* t_dtrace_syscall_args; } ;
struct TYPE_18__ {int lwp_nostop; } ;
struct TYPE_17__ {int eax; scalar_t__* r; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 TYPE_8__* VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 TYPE_11__* FUNC_10 (TYPE_2__*) ;
 TYPE_9__* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_15 (TYPE_8__*) ;

__attribute__((used)) static kern_return_t
FUNC_16(struct mach_call_args *VAR_7)
{
 int VAR_8;

 machtrace_sysent_t *VAR_9;
 dtrace_id_t VAR_10;
 kern_return_t VAR_11;



 syscall_arg_t *VAR_12 = (syscall_arg_t *)VAR_7;
 mach_call_t VAR_13;


 {
  FUNC_9(FUNC_1(), VAR_4);
  x86_saved_state_t *VAR_14 = (x86_saved_state_t *)FUNC_2(FUNC_1());

  if (FUNC_5(VAR_14)) {
   VAR_8 = FUNC_11(VAR_14)->rax & VAR_3;
  } else {
   VAR_8 = -FUNC_10(VAR_14)->eax;
  }
 }
 VAR_9 = &VAR_6[VAR_8];

 if ((VAR_10 = VAR_9->stsy_entry) != VAR_1) {
  uthread_t VAR_15 = (uthread_t)FUNC_3(FUNC_1());

  if (VAR_15)
   VAR_15->t_dtrace_syscall_args = (void *)VAR_12;

  FUNC_6)(VAR_10, *VAR_12, *(VAR_12+1), *(VAR_12+2), *(VAR_12+3), *(VAR_12+4));

  if (VAR_15)
   VAR_15->t_dtrace_syscall_args = (void *)0;
 }
 VAR_13 = (mach_call_t)(*VAR_9->stsy_underlying);
 VAR_11 = VAR_13(VAR_7);

 if ((VAR_10 = VAR_9->stsy_return) != VAR_1)
  FUNC_6)(VAR_10, (uint64_t)VAR_11, 0, 0, 0, 0);

 return (VAR_11);
}
