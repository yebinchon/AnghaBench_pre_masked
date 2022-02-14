
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lr; int sp; int pc; int* r; int cpsr; } ;
typedef TYPE_1__ arm_thread_state32_t ;
typedef int arm_saved_state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*,int) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

void
FUNC_7(const arm_saved_state_t *VAR_0, arm_thread_state32_t *VAR_1)
{
 uint32_t VAR_2;

 FUNC_0(FUNC_6(VAR_0));

 VAR_1->lr = (uint32_t)FUNC_2(VAR_0);
 VAR_1->sp = (uint32_t)FUNC_5(VAR_0);
 VAR_1->pc = (uint32_t)FUNC_3(VAR_0);
 VAR_1->cpsr = FUNC_1(VAR_0);
 for (VAR_2 = 0; VAR_2 < 13; VAR_2++)
  VAR_1->r[VAR_2] = (uint32_t)FUNC_4(VAR_0, VAR_2);
}
