
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct smm_regs *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->eax;
 asm("pushl %%eax\n\t"
     "movl 0(%%eax),%%edx\n\t"
     "push %%edx\n\t"
     "movl 4(%%eax),%%ebx\n\t"
     "movl 8(%%eax),%%ecx\n\t"
     "movl 12(%%eax),%%edx\n\t"
     "movl 16(%%eax),%%esi\n\t"
     "movl 20(%%eax),%%edi\n\t"
     "popl %%eax\n\t"
     "out %%al,$0xb2\n\t"
     "out %%al,$0x84\n\t"
     "xchgl %%eax,(%%esp)\n\t"
     "movl %%ebx,4(%%eax)\n\t"
     "movl %%ecx,8(%%eax)\n\t"
     "movl %%edx,12(%%eax)\n\t"
     "movl %%esi,16(%%eax)\n\t"
     "movl %%edi,20(%%eax)\n\t"
     "popl %%edx\n\t"
     "movl %%edx,0(%%eax)\n\t"
     "lahf\n\t"
     "shrl $8,%%eax\n\t"
     "andl $1,%%eax\n":"=a"(VAR_2)
     : "a"(VAR_1)
     : "%ebx", "%ecx", "%edx", "%esi", "%edi", "memory");

 if (VAR_2 != 0 || (VAR_1->eax & 0xffff) == 0xffff || VAR_1->eax == VAR_3)
  return -VAR_0;

 return 0;
}
