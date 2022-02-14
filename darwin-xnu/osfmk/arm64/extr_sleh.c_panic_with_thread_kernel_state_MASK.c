
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
typedef int arm_saved_state_t ;
struct TYPE_3__ {int far; int esr; int cpsr; int pc; int sp; int lr; int fp; int * x; } ;
typedef TYPE_1__ arm_saved_state64_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,int *,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int *) ;

void
FUNC_3(const char *VAR_0, arm_saved_state_t *VAR_1)
{
 boolean_t VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 arm_saved_state64_t *VAR_3 = FUNC_2(VAR_1);

 FUNC_1("%s (saved state: %p%s)\n"
  "\t  x0: 0x%016llx  x1:  0x%016llx  x2:  0x%016llx  x3:  0x%016llx\n"
  "\t  x4: 0x%016llx  x5:  0x%016llx  x6:  0x%016llx  x7:  0x%016llx\n"
  "\t  x8: 0x%016llx  x9:  0x%016llx  x10: 0x%016llx  x11: 0x%016llx\n"
  "\t  x12: 0x%016llx x13: 0x%016llx  x14: 0x%016llx  x15: 0x%016llx\n"
  "\t  x16: 0x%016llx x17: 0x%016llx  x18: 0x%016llx  x19: 0x%016llx\n"
  "\t  x20: 0x%016llx x21: 0x%016llx  x22: 0x%016llx  x23: 0x%016llx\n"
  "\t  x24: 0x%016llx x25: 0x%016llx  x26: 0x%016llx  x27: 0x%016llx\n"
  "\t  x28: 0x%016llx fp:  0x%016llx  lr:  0x%016llx  sp:  0x%016llx\n"
  "\t  pc:  0x%016llx cpsr: 0x%08x         esr: 0x%08x          far: 0x%016llx\n",
   VAR_0, VAR_1, (VAR_2 ? "" : " INVALID"),
   VAR_3->x[0], VAR_3->x[1], VAR_3->x[2], VAR_3->x[3],
   VAR_3->x[4], VAR_3->x[5], VAR_3->x[6], VAR_3->x[7],
   VAR_3->x[8], VAR_3->x[9], VAR_3->x[10], VAR_3->x[11],
   VAR_3->x[12], VAR_3->x[13], VAR_3->x[14], VAR_3->x[15],
   VAR_3->x[16], VAR_3->x[17], VAR_3->x[18], VAR_3->x[19],
   VAR_3->x[20], VAR_3->x[21], VAR_3->x[22], VAR_3->x[23],
   VAR_3->x[24], VAR_3->x[25], VAR_3->x[26], VAR_3->x[27],
   VAR_3->x[28], VAR_3->fp, VAR_3->lr, VAR_3->sp,
   VAR_3->pc, VAR_3->cpsr, VAR_3->esr, VAR_3->far);
}
