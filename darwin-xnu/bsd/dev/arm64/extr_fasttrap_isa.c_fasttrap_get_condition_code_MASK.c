
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int ftt_instr; scalar_t__ ftt_thumb; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;
struct TYPE_6__ {int cpsr; } ;
typedef TYPE_2__ arm_saved_state32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(arm_saved_state32_t *VAR_0, fasttrap_tracepoint_t *VAR_1)
{

 int VAR_2 = 0xE;
 if (VAR_1->ftt_thumb) {
  uint32_t VAR_3 = FUNC_1(VAR_0->cpsr);
  if (VAR_3 != 0) {

   FUNC_3(FUNC_2(VAR_3));
   VAR_2 = VAR_3 >> 4;
  }
 } else {
  VAR_2 = FUNC_0(VAR_1->ftt_instr);
 }

 return VAR_2;
}
