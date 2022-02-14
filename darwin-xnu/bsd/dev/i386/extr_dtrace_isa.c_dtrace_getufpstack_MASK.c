
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t user_addr_t ;
typedef void* uint64_t ;
typedef int uint16_t ;
struct TYPE_10__ {int * gregs; } ;
struct TYPE_11__ {int uc_link; TYPE_2__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
typedef int * thread_t ;
struct frame32 {int dummy; } ;
struct frame {int dummy; } ;
typedef int siginfo_t ;
typedef int siginfo32_t ;
struct TYPE_9__ {size_t eip; size_t ebp; } ;
struct TYPE_12__ {TYPE_1__ ss_32; } ;
typedef TYPE_4__ savearea_t ;
typedef int greg_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_16__ {size_t cpu_id; } ;
struct TYPE_15__ {int cpuc_dtrace_flags; } ;
struct TYPE_14__ {uintptr_t lwp_oldcontext; } ;
struct TYPE_13__ {scalar_t__ p_model; } ;


 TYPE_8__* VAR_0 ;
 int volatile VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_7__* VAR_9 ;
 int FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (void***,int*,size_t*,size_t) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 TYPE_6__* VAR_10 ;
 TYPE_5__* VAR_11 ;
 scalar_t__ FUNC_8 (int ) ;

void
FUNC_9(uint64_t *VAR_12, uint64_t *VAR_13, int VAR_14)
{
 thread_t VAR_15 = FUNC_1();
 savearea_t *VAR_16;
 user_addr_t VAR_17, VAR_18;
 volatile uint16_t *VAR_19 =
     (volatile uint16_t *)&VAR_9[VAR_0->cpu_id].cpuc_dtrace_flags;




 boolean_t VAR_20 = FUNC_8(FUNC_0());

 if (*VAR_19 & VAR_1)
  return;

 if (VAR_14 <= 0)
  return;




 if (VAR_15 == ((void*)0))
  goto zero;

 VAR_16 = (savearea_t *)FUNC_7(VAR_15);
 if (VAR_16 == ((void*)0))
  goto zero;

 *VAR_12++ = (uint64_t)FUNC_6();
 VAR_14--;

 if (VAR_14 <= 0)
  return;

 VAR_17 = VAR_16->ss_32.eip;
 VAR_18 = VAR_16->ss_32.ebp;
 if(FUNC_2(&VAR_12, &VAR_14, &VAR_17, VAR_18) == 1) {



     *VAR_13++ = 0;
     if (VAR_14 <= 0)
  return;
 }

 while (VAR_17 != 0) {
  *VAR_12++ = (uint64_t)VAR_17;
  *VAR_13++ = VAR_18;
  VAR_14--;
  if (VAR_14 <= 0)
   break;

  if (VAR_18 == 0)
   break;
  {
   if (VAR_20) {
    VAR_17 = FUNC_5((VAR_18 + VAR_8));
    VAR_18 = FUNC_5(VAR_18);
   } else {
    VAR_17 = FUNC_4((VAR_18 + VAR_7));
    VAR_18 = FUNC_4(VAR_18);
   }
  }
 }

zero:
 while (VAR_14-- > 0)
  *VAR_12++ = 0;
}
