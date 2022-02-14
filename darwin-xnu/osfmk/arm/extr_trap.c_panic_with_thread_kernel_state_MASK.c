
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_saved_state {int far; int fsr; int cpsr; int pc; int lr; int sp; int * r; } ;


 int FUNC_0 (char*,char const*,struct arm_saved_state*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, struct arm_saved_state *VAR_1)
{
 FUNC_0("%s (saved state:%p)\n"
      "r0:   0x%08x  r1: 0x%08x  r2: 0x%08x  r3: 0x%08x\n"
      "r4:   0x%08x  r5: 0x%08x  r6: 0x%08x  r7: 0x%08x\n"
      "r8:   0x%08x  r9: 0x%08x r10: 0x%08x r11: 0x%08x\n"
      "r12:  0x%08x  sp: 0x%08x  lr: 0x%08x  pc: 0x%08x\n"
      "cpsr: 0x%08x fsr: 0x%08x far: 0x%08x\n",
      VAR_0, VAR_1,
      VAR_1->r[0], VAR_1->r[1], VAR_1->r[2], VAR_1->r[3],
      VAR_1->r[4], VAR_1->r[5], VAR_1->r[6], VAR_1->r[7],
      VAR_1->r[8], VAR_1->r[9], VAR_1->r[10], VAR_1->r[11],
      VAR_1->r[12], VAR_1->sp, VAR_1->lr, VAR_1->pc,
      VAR_1->cpsr, VAR_1->fsr, VAR_1->far);

}
