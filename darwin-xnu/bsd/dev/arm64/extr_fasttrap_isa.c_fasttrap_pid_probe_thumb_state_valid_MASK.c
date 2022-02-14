
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int ftt_instr; int ftt_instr1; scalar_t__ ftt_thumb; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;
struct TYPE_6__ {scalar_t__ cpsr; int pc; } ;
typedef TYPE_2__ arm_saved_state32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int
FUNC_4(arm_saved_state32_t *VAR_1, fasttrap_tracepoint_t *VAR_2)
{
 uint32_t VAR_3 = VAR_1->cpsr;
 uint32_t VAR_4 = FUNC_0(VAR_3);


 if ((VAR_4 != 0) && !FUNC_1(VAR_4)) {
  FUNC_3("dtrace: fasttrap: Tried to trace instruction %08x at %08x but not at end of IT block\n",
    (VAR_2->ftt_thumb && FUNC_2(VAR_2->ftt_instr,VAR_2->ftt_thumb) == 2) ? VAR_2->ftt_instr1 : VAR_2->ftt_instr, VAR_1->pc);
  return 0;
 }

 if (!(VAR_3 & VAR_0)) {
  return 0;
 }

 return 1;
}
