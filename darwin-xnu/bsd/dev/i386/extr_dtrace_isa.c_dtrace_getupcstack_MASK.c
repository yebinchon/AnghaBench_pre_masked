
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


struct TYPE_9__ {int ebp; int uesp; int eip; } ;
struct TYPE_7__ {int rsp; int rip; } ;
struct TYPE_8__ {int rbp; TYPE_1__ isf; } ;
struct TYPE_10__ {TYPE_3__ ss_32; TYPE_2__ ss_64; } ;
typedef TYPE_4__ x86_saved_state_t ;
typedef int user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
typedef int * thread_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {size_t cpu_id; } ;
struct TYPE_11__ {int cpuc_dtrace_flags; } ;


 int FUNC_0 (int) ;
 TYPE_6__* VAR_0 ;
 int volatile VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (scalar_t__**,int*,int *,int ) ;
 int FUNC_4 (scalar_t__*,int,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;

void
FUNC_9(uint64_t *VAR_4, int VAR_5)
{
 thread_t VAR_6 = FUNC_2();
 x86_saved_state_t *VAR_7;
 user_addr_t VAR_8, VAR_9, VAR_10;
 volatile uint16_t *VAR_11 =
     (volatile uint16_t *)&VAR_3[VAR_0->cpu_id].cpuc_dtrace_flags;
 int VAR_12;
 boolean_t VAR_13 = FUNC_8(FUNC_1());

 if (*VAR_11 & VAR_1)
  return;

 if (VAR_5 <= 0)
  return;




 if (VAR_6 == ((void*)0))
  goto zero;

 FUNC_7(VAR_6, VAR_2);
 VAR_7 = (x86_saved_state_t *)FUNC_6(VAR_6);
 if (VAR_7 == ((void*)0))
  goto zero;

 *VAR_4++ = (uint64_t)FUNC_5();
 VAR_5--;

 if (VAR_5 <= 0)
  return;

 if (VAR_13) {
  VAR_8 = VAR_7->ss_64.isf.rip;
  VAR_9 = VAR_7->ss_64.isf.rsp;
  VAR_10 = VAR_7->ss_64.rbp;
 } else {
  VAR_8 = VAR_7->ss_32.eip;
  VAR_9 = VAR_7->ss_32.uesp;
  VAR_10 = VAR_7->ss_32.ebp;
 }






 (void)FUNC_3(&VAR_4, &VAR_5, &VAR_8, VAR_9);

 if(VAR_5 <= 0)
     return;







 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_8, VAR_10);
 FUNC_0(VAR_12 >= 0);
 FUNC_0(VAR_12 <= VAR_5);

 VAR_4 += VAR_12;
 VAR_5 -= VAR_12;

zero:
 while (VAR_5-- > 0)
  *VAR_4++ = 0;
}
