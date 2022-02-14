
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ax; } ;
struct kernel_vm86_regs {int dummy; } ;


 struct pt_regs* FUNC_0 (struct kernel_vm86_regs*) ;

__attribute__((used)) static inline void FUNC_1(struct kernel_vm86_regs *VAR_0, int VAR_1)
{
 struct pt_regs *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->ax = VAR_1;
 __asm__ __volatile__("movl %0,%%esp\n\t"
  "movl %1,%%ebp\n\t"
  "jmp resume_userspace"
  : : "r" (VAR_2), "r" (FUNC_0()));
}
