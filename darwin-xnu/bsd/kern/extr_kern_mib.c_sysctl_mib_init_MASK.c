
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int neon_fp16; int neon_hpfp; int neon; } ;
typedef TYPE_1__ arm_mvfp_info_t ;
struct TYPE_9__ {int num_breakpoint_pairs; int num_watchpoint_pairs; } ;
struct TYPE_8__ {scalar_t__ c_l2size; scalar_t__ c_dsize; } ;
struct TYPE_7__ {int thread_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 () ;
 int* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_2__* FUNC_9 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_14 ;
 int FUNC_14 (int,int) ;
 int VAR_15 ;
 int FUNC_15 (int *) ;
 int VAR_16 ;

void
FUNC_16(void)
{
 VAR_9 = FUNC_6();
 VAR_7 = FUNC_4();
 VAR_8 = FUNC_5();

 VAR_5 = (FUNC_0() & VAR_13) == VAR_13;
 if (VAR_8 != VAR_1) {
  FUNC_15(&VAR_15);
 }



 VAR_6 = FUNC_7();


 VAR_3[0] = FUNC_10(0);
 VAR_3[1] = FUNC_10(1);
 VAR_3[2] = FUNC_10(2);
 VAR_3[3] = FUNC_10(3);
 VAR_3[4] = 0;


 VAR_4[0] = FUNC_11(0);
 VAR_4[1] = FUNC_11(1);
 VAR_4[2] = FUNC_11(2);
 VAR_4[3] = FUNC_11(3);
 VAR_4[4] = 0;


 VAR_14 = FUNC_14(FUNC_10(0), FUNC_9()->thread_count)
   / FUNC_9()->thread_count;
}
