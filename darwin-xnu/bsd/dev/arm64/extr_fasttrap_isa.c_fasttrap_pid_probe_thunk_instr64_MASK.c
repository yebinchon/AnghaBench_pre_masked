
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* uthread_t ;
typedef scalar_t__ user_addr_t ;
typedef int uint32_t ;
typedef int proc_t ;
struct TYPE_9__ {scalar_t__ ftt_type; int * ftt_retids; } ;
typedef TYPE_3__ fasttrap_tracepoint_t ;
typedef int arm_saved_state_t ;
struct TYPE_8__ {scalar_t__ t_dtrace_astpc; scalar_t__ t_dtrace_scrpc; int t_dtrace_step; int t_dtrace_on; TYPE_1__* t_dtrace_scratch; scalar_t__ t_dtrace_npc; scalar_t__ t_dtrace_pc; int t_dtrace_ret; } ;
struct TYPE_7__ {scalar_t__ addr; scalar_t__ write_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int*,int) ;
 int FUNC_2 (int *,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(arm_saved_state_t *VAR_4, fasttrap_tracepoint_t *VAR_5, proc_t *VAR_6, uthread_t VAR_7,
  const uint32_t *VAR_8, uint32_t VAR_9, user_addr_t *VAR_10)
{
 uint32_t VAR_11[8];
 user_addr_t VAR_12 = FUNC_3(VAR_4);
 user_addr_t VAR_13;

 FUNC_0(VAR_9 < 8);

 FUNC_1(VAR_8, VAR_11, VAR_9 * sizeof(uint32_t));
 VAR_11[VAR_9] = VAR_0;

 VAR_7->t_dtrace_astpc = VAR_7->t_dtrace_scrpc = VAR_7->t_dtrace_scratch->addr;
 VAR_13 = VAR_7->t_dtrace_scratch->write_addr;

 if (VAR_13 == (user_addr_t)0) {
  FUNC_2(VAR_6, VAR_7, VAR_12);
  *VAR_10 = VAR_12;
  return;
 }

 if (FUNC_4(VAR_6, VAR_11, (VAR_9 + 1) * sizeof(uint32_t), VAR_13) != VAR_3) {
  FUNC_2(VAR_6, VAR_7, VAR_12);
  *VAR_10 = VAR_12;
  return;
 }


 VAR_7->t_dtrace_step = 1;


 VAR_7->t_dtrace_ret = (VAR_5->ftt_retids != ((void*)0));
 FUNC_0(VAR_5->ftt_type != VAR_1);
 FUNC_0(VAR_5->ftt_type != VAR_2);


 VAR_7->t_dtrace_pc = VAR_12;


 VAR_7->t_dtrace_npc = VAR_12 + 4;


 VAR_7->t_dtrace_on = 1;


 *VAR_10 = VAR_7->t_dtrace_scratch->addr;
}
