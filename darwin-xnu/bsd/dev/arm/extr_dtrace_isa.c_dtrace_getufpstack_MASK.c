
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t user_addr_t ;
typedef void* uint64_t ;
typedef int uint16_t ;
struct TYPE_8__ {int * gregs; } ;
struct TYPE_9__ {int uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int * thread_t ;
struct frame32 {int dummy; } ;
struct frame {int dummy; } ;
typedef int siginfo_t ;
typedef int siginfo32_t ;
struct TYPE_10__ {size_t pc; size_t sp; } ;
typedef TYPE_3__ savearea_t ;
typedef int greg_t ;
struct TYPE_14__ {size_t cpu_id; } ;
struct TYPE_13__ {int cpuc_dtrace_flags; } ;
struct TYPE_12__ {uintptr_t lwp_oldcontext; } ;
struct TYPE_11__ {scalar_t__ p_model; } ;


 TYPE_7__* VAR_0 ;
 int VAR_1 ;
 int volatile VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_6__* VAR_9 ;
 int * FUNC_1 () ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 TYPE_5__* VAR_10 ;
 TYPE_4__* VAR_11 ;

void
FUNC_6(uint64_t * VAR_12, uint64_t * VAR_13, int VAR_14)
{

 thread_t VAR_15 = FUNC_1();
 savearea_t *VAR_16;
 user_addr_t VAR_17, VAR_18;

 volatile uint16_t *VAR_19 = (volatile uint16_t *) & VAR_9[VAR_0->cpu_id].cpuc_dtrace_flags;






 if (*VAR_19 & VAR_2)
  return;

 if (VAR_14 <= 0)
  return;




 if (VAR_15 == ((void*)0))
  goto zero;

 VAR_16 = (savearea_t *) FUNC_5(VAR_15);
 if (VAR_16 == ((void*)0))
  goto zero;

 *VAR_12++ = (uint64_t)FUNC_4();
 VAR_14--;

 if (VAR_14 <= 0)
  return;

 VAR_17 = VAR_16->pc;
 VAR_18 = VAR_16->sp;
 if (FUNC_0(VAR_1)) {
  *VAR_12++ = (uint64_t) VAR_17;
  *VAR_13++ = 0;
  VAR_14--;
  if (VAR_14 <= 0)
   return;

  VAR_17 = FUNC_3(VAR_18);
 }
 while (VAR_17 != 0 && VAR_18 != 0) {
  *VAR_12++ = (uint64_t) VAR_17;
  *VAR_13++ = VAR_18;
  VAR_14--;
  if (VAR_14 <= 0)
   break;
  {
   VAR_17 = FUNC_3((VAR_18 + VAR_8));
   VAR_18 = FUNC_3(VAR_18);
  }
 }

zero:
 while (VAR_14-- > 0)
  *VAR_12++ = 0ULL;
}
