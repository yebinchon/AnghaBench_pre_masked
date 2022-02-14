
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unique; } ;
struct thread_info {TYPE_1__ pcb; } ;
struct switch_stack {int r15; int r14; int r13; int r12; int r11; int r10; int r9; } ;
struct pt_regs {int pc; int gp; int r28; int r27; int r26; int r25; int r24; int r23; int r22; int r21; int r20; int r19; int r18; int r17; int r16; int r8; int r7; int r6; int r5; int r4; int r3; int r2; int r1; int r0; } ;
typedef int elf_greg_t ;


 int FUNC_0 () ;

void
FUNC_1(elf_greg_t *VAR_0, struct pt_regs *VAR_1, struct thread_info *VAR_2)
{

 struct switch_stack * VAR_3 = ((struct switch_stack *) VAR_1) - 1;

 VAR_0[ 0] = VAR_1->r0;
 VAR_0[ 1] = VAR_1->r1;
 VAR_0[ 2] = VAR_1->r2;
 VAR_0[ 3] = VAR_1->r3;
 VAR_0[ 4] = VAR_1->r4;
 VAR_0[ 5] = VAR_1->r5;
 VAR_0[ 6] = VAR_1->r6;
 VAR_0[ 7] = VAR_1->r7;
 VAR_0[ 8] = VAR_1->r8;
 VAR_0[ 9] = VAR_3->r9;
 VAR_0[10] = VAR_3->r10;
 VAR_0[11] = VAR_3->r11;
 VAR_0[12] = VAR_3->r12;
 VAR_0[13] = VAR_3->r13;
 VAR_0[14] = VAR_3->r14;
 VAR_0[15] = VAR_3->r15;
 VAR_0[16] = VAR_1->r16;
 VAR_0[17] = VAR_1->r17;
 VAR_0[18] = VAR_1->r18;
 VAR_0[19] = VAR_1->r19;
 VAR_0[20] = VAR_1->r20;
 VAR_0[21] = VAR_1->r21;
 VAR_0[22] = VAR_1->r22;
 VAR_0[23] = VAR_1->r23;
 VAR_0[24] = VAR_1->r24;
 VAR_0[25] = VAR_1->r25;
 VAR_0[26] = VAR_1->r26;
 VAR_0[27] = VAR_1->r27;
 VAR_0[28] = VAR_1->r28;
 VAR_0[29] = VAR_1->gp;
 VAR_0[30] = FUNC_0();
 VAR_0[31] = VAR_1->pc;




 VAR_0[32] = VAR_2->pcb.unique;
}
