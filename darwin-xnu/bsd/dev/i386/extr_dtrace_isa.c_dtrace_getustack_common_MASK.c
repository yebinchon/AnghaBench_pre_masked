
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


typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct TYPE_9__ {int * gregs; } ;
struct TYPE_11__ {int uc_link; TYPE_1__ uc_mcontext; } ;
typedef TYPE_3__ ucontext_t ;
struct TYPE_10__ {int * gregs; } ;
struct TYPE_12__ {int uc_link; TYPE_2__ uc_mcontext; } ;
typedef TYPE_4__ ucontext32_t ;
struct frame32 {int dummy; } ;
struct frame {int dummy; } ;
typedef int siginfo_t ;
typedef int siginfo32_t ;
typedef int greg_t ;
typedef int greg32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_16__ {size_t cpu_id; } ;
struct TYPE_15__ {int cpuc_dtrace_flags; } ;
struct TYPE_14__ {uintptr_t lwp_oldcontext; } ;
struct TYPE_13__ {scalar_t__ p_model; } ;


 int FUNC_0 (int) ;
 TYPE_8__* VAR_0 ;
 int volatile VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_7__* VAR_9 ;
 int FUNC_1 () ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_6__* VAR_10 ;
 TYPE_5__* VAR_11 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(uint64_t *VAR_12, int VAR_13, user_addr_t VAR_14,
    user_addr_t VAR_15)
{







 int VAR_16 = 0;
 boolean_t VAR_17 = FUNC_5(FUNC_1());

 FUNC_0(VAR_12 == ((void*)0) || VAR_13 > 0);
 while (VAR_14 != 0) {
  VAR_16++;
  if (VAR_12 != ((void*)0)) {
   *VAR_12++ = (uint64_t)VAR_14;
   VAR_13--;
   if (VAR_13 <= 0)
    break;
  }

  if (VAR_15 == 0)
   break;
  {
   if (VAR_17) {
    VAR_14 = FUNC_4((VAR_15 + VAR_8));
    VAR_15 = FUNC_4(VAR_15);
   } else {
    VAR_14 = FUNC_3((VAR_15 + VAR_7));
    VAR_15 = FUNC_3(VAR_15);
   }
  }
 }

 return (VAR_16);
}
