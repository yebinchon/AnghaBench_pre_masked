
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pt_regs {unsigned int ax; unsigned int bx; unsigned int cx; unsigned int dx; unsigned int si; unsigned int di; unsigned int bp; unsigned int sp; unsigned int r8; unsigned int r9; unsigned int r10; unsigned int r11; unsigned int r12; unsigned int r13; unsigned int r14; unsigned int r15; int ss; unsigned int flags; unsigned int ip; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,unsigned int) ;
 struct pt_regs* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct pt_regs *VAR_2 = FUNC_1(VAR_0);
 struct seq_file *VAR_3 = VAR_1;
 unsigned int VAR_4;

 FUNC_0(VAR_3, " RAX\t: %016lx\n", VAR_2->ax);
 FUNC_0(VAR_3, " RBX\t: %016lx\n", VAR_2->bx);
 FUNC_0(VAR_3, " RCX\t: %016lx\n", VAR_2->cx);
 FUNC_0(VAR_3, " RDX\t: %016lx\n", VAR_2->dx);

 FUNC_0(VAR_3, " RSI\t: %016lx\n", VAR_2->si);
 FUNC_0(VAR_3, " RDI\t: %016lx\n", VAR_2->di);
 FUNC_0(VAR_3, " RBP\t: %016lx\n", VAR_2->bp);
 FUNC_0(VAR_3, " ESP\t: %016lx\n", VAR_2->sp);
 asm("movl %%cs,%0" : "=r" (VAR_4));
 FUNC_0(VAR_3, " CS\t:             %04x\n", VAR_4);
 asm("movl %%ds,%0" : "=r" (VAR_4));
 FUNC_0(VAR_3, " DS\t:             %04x\n", VAR_4);
 FUNC_0(VAR_3, " SS\t:             %04lx\n", VAR_2->ss & 0xffff);
 asm("movl %%es,%0" : "=r" (VAR_4));
 FUNC_0(VAR_3, " ES\t:             %04x\n", VAR_4);
 asm("movl %%fs,%0" : "=r" (VAR_4));
 FUNC_0(VAR_3, " FS\t:             %04x\n", VAR_4);
 asm("movl %%gs,%0" : "=r" (VAR_4));
 FUNC_0(VAR_3, " GS\t:             %04x\n", VAR_4);

 FUNC_0(VAR_3, " EFLAGS\t: %016lx\n", VAR_2->flags);

 FUNC_0(VAR_3, " EIP\t: %016lx\n", VAR_2->ip);
}
