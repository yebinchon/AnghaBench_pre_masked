
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef scalar_t__ user_addr_t ;
typedef int thread_t ;
struct sigacts {scalar_t__* ps_sigact; int ps_sigonstack; } ;
typedef TYPE_2__* proc_t ;
typedef void* mach_exception_subcode_t ;
typedef int mach_exception_code_t ;
typedef int kern_return_t ;
struct TYPE_7__ {scalar_t__ user_stack; int p_sigignore; int p_sigcatch; struct sigacts* p_sigacts; } ;
struct TYPE_6__ {int uu_sigwait; int uu_sigmask; int uu_exception; void* uu_subcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int,int ,void*) ;

kern_return_t
FUNC_6(thread_t VAR_9,
                    int VAR_10,
                    mach_exception_code_t VAR_11,
                    mach_exception_subcode_t VAR_12)
{

 proc_t VAR_13 = FUNC_1(VAR_9);


 if (VAR_13 == ((void*)0))
  return VAR_0;


 int VAR_14 = FUNC_5(VAR_10, VAR_11, VAR_12);

 uthread_t VAR_15 = FUNC_0(VAR_9);
 if (VAR_11 == VAR_1 &&
     VAR_14 == VAR_4) {
  user_addr_t VAR_16 = VAR_12;

  user_addr_t VAR_17 = VAR_13->user_stack;
  user_addr_t VAR_18 = VAR_13->user_stack - VAR_3;
  if (VAR_16 >= VAR_18 && VAR_16 < VAR_17) {




   VAR_14 = VAR_5;






   int VAR_19 = FUNC_3(VAR_14);
   struct sigacts *VAR_20 = VAR_13->p_sigacts;
   if ((VAR_13->p_sigignore & VAR_19) ||
       (VAR_15->uu_sigwait & VAR_19) ||
       (VAR_15->uu_sigmask & VAR_19) ||
       (VAR_20->ps_sigact[VAR_5] == VAR_7) ||
       (! (VAR_20->ps_sigonstack & VAR_19))) {
    VAR_13->p_sigignore &= ~VAR_19;
    VAR_13->p_sigcatch &= ~VAR_19;
    VAR_20->ps_sigact[VAR_5] = VAR_6;
    VAR_15->uu_sigwait &= ~VAR_19;
    VAR_15->uu_sigmask &= ~VAR_19;
   }
  }
 }


 if (VAR_14 != 0) {
  VAR_15->uu_exception = VAR_10;

  VAR_15->uu_subcode = VAR_12;
  FUNC_4(VAR_9, VAR_14, VAR_11, VAR_8);
 }

 FUNC_2(VAR_13);

 return VAR_2;
}
