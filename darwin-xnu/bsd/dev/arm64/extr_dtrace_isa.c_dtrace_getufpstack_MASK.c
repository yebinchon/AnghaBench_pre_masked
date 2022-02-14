
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t user_addr_t ;
typedef void* uint64_t ;
typedef int uint16_t ;
struct TYPE_7__ {int * gregs; } ;
struct TYPE_8__ {int uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_2__ ucontext_t ;
typedef int * thread_t ;
struct frame32 {int dummy; } ;
struct frame {int dummy; } ;
typedef int siginfo_t ;
typedef int siginfo32_t ;
typedef int savearea_t ;
typedef int greg_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {size_t cpu_id; } ;
struct TYPE_11__ {int cpuc_dtrace_flags; } ;
struct TYPE_10__ {uintptr_t lwp_oldcontext; } ;
struct TYPE_9__ {scalar_t__ p_model; } ;


 TYPE_6__* VAR_0 ;
 int VAR_1 ;
 int volatile VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 TYPE_5__* VAR_10 ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;
 size_t FUNC_9 (int *) ;
 TYPE_4__* VAR_11 ;
 TYPE_3__* VAR_12 ;
 scalar_t__ FUNC_10 (int ) ;

void
FUNC_11(uint64_t * VAR_13, uint64_t * VAR_14, int VAR_15)
{
 thread_t VAR_16 = FUNC_2();
 boolean_t VAR_17 = FUNC_10(FUNC_1());
 savearea_t *VAR_18;
 user_addr_t VAR_19, VAR_20;
 volatile uint16_t *VAR_21 = (volatile uint16_t *) & VAR_10[VAR_0->cpu_id].cpuc_dtrace_flags;






 if (*VAR_21 & VAR_2)
  return;

 if (VAR_15 <= 0)
  return;




 if (VAR_16 == ((void*)0))
  goto zero;

 VAR_18 = (savearea_t *) FUNC_7(VAR_16);
 if (VAR_18 == ((void*)0))
  goto zero;

 *VAR_13++ = (uint64_t)FUNC_6();
 VAR_15--;

 if (VAR_15 <= 0)
  return;

 VAR_19 = FUNC_9(VAR_18);
 VAR_20 = FUNC_8(VAR_18);
 if (FUNC_0(VAR_1)) {
  *VAR_13++ = (uint64_t) VAR_19;
  *VAR_14++ = 0;
  VAR_15--;
  if (VAR_15 <= 0)
   return;

  if (VAR_17)
   VAR_19 = FUNC_5(VAR_20);
  else
   VAR_19 = FUNC_4(VAR_20);
 }
 while (VAR_19 != 0 && VAR_20 != 0) {
  *VAR_13++ = (uint64_t) VAR_19;
  *VAR_14++ = VAR_20;
  VAR_15--;
  if (VAR_15 <= 0)
   break;
  {
   if (VAR_17) {
    VAR_19 = FUNC_5((VAR_20 + VAR_9));
    VAR_20 = FUNC_5(VAR_20);
   } else {
    VAR_19 = FUNC_4((VAR_20 + VAR_8));
    VAR_20 = FUNC_4(VAR_20);
   }
  }
 }

zero:
 while (VAR_15-- > 0)
  *VAR_13++ = 0ULL;
}
