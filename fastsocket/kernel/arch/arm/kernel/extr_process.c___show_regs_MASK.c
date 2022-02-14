
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ARM_cpsr; int ARM_r0; int ARM_r1; int ARM_r2; int ARM_r3; int ARM_r4; int ARM_r5; int ARM_r6; int ARM_r7; int ARM_r8; int ARM_r9; int ARM_r10; int ARM_fp; int ARM_ip; int ARM_sp; int ARM_lr; int ARM_pc; } ;
typedef int buf ;
struct TYPE_2__ {int version; int release; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (struct pt_regs*) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;
 size_t FUNC_6 (struct pt_regs*) ;
 int * VAR_4 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 size_t FUNC_10 (struct pt_regs*) ;
 int * VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_13 (int ,char*) ;

void FUNC_14(struct pt_regs *VAR_6)
{
 unsigned long VAR_7;
 char VAR_8[64];

 FUNC_9("CPU: %d    %s  (%s %.*s)\n",
  FUNC_11(), FUNC_8(), FUNC_3()->release,
  (int)FUNC_13(FUNC_3()->version, " "),
  FUNC_3()->version);
 FUNC_7("PC is at %s\n", FUNC_4(VAR_6));
 FUNC_7("LR is at %s\n", VAR_6->ARM_lr);
 FUNC_9("pc : [<%08lx>]    lr : [<%08lx>]    psr: %08lx\n"
        "sp : %08lx  ip : %08lx  fp : %08lx\n",
  VAR_6->ARM_pc, VAR_6->ARM_lr, VAR_6->ARM_cpsr,
  VAR_6->ARM_sp, VAR_6->ARM_ip, VAR_6->ARM_fp);
 FUNC_9("r10: %08lx  r9 : %08lx  r8 : %08lx\n",
  VAR_6->ARM_r10, VAR_6->ARM_r9,
  VAR_6->ARM_r8);
 FUNC_9("r7 : %08lx  r6 : %08lx  r5 : %08lx  r4 : %08lx\n",
  VAR_6->ARM_r7, VAR_6->ARM_r6,
  VAR_6->ARM_r5, VAR_6->ARM_r4);
 FUNC_9("r3 : %08lx  r2 : %08lx  r1 : %08lx  r0 : %08lx\n",
  VAR_6->ARM_r3, VAR_6->ARM_r2,
  VAR_6->ARM_r1, VAR_6->ARM_r0);

 VAR_7 = VAR_6->ARM_cpsr;
 VAR_8[0] = VAR_7 & VAR_1 ? 'N' : 'n';
 VAR_8[1] = VAR_7 & VAR_3 ? 'Z' : 'z';
 VAR_8[2] = VAR_7 & VAR_0 ? 'C' : 'c';
 VAR_8[3] = VAR_7 & VAR_2 ? 'V' : 'v';
 VAR_8[4] = '\0';

 FUNC_9("Flags: %s  IRQs o%s  FIQs o%s  Mode %s  ISA %s  Segment %s\n",
  VAR_8, FUNC_5(VAR_6) ? "n" : "ff",
  FUNC_0(VAR_6) ? "n" : "ff",
  VAR_5[FUNC_10(VAR_6)],
  VAR_4[FUNC_6(VAR_6)],
  FUNC_2() == FUNC_1() ? "kernel" : "user");
}
