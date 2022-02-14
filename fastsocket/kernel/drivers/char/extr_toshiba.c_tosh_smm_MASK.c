
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SMMRegisters ;



int FUNC_0(SMMRegisters *VAR_0)
{
 int VAR_1;

 asm ("# load the values into the registers\n\t" "pushl %%eax\n\t" "movl 0(%%eax),%%edx\n\t" "push %%edx\n\t" "movl 4(%%eax),%%ebx\n\t" "movl 8(%%eax),%%ecx\n\t" "movl 12(%%eax),%%edx\n\t" "movl 16(%%eax),%%esi\n\t" "movl 20(%%eax),%%edi\n\t" "popl %%eax\n\t" "# call the System Management mode\n\t" "inb $0xb2,%%al\n\t"
  "# fill out the memory with the values in the registers\n\t" "xchgl %%eax,(%%esp)\n\t"

  "movl %%ebx,4(%%eax)\n\t" "movl %%ecx,8(%%eax)\n\t" "movl %%edx,12(%%eax)\n\t" "movl %%esi,16(%%eax)\n\t" "movl %%edi,20(%%eax)\n\t" "popl %%edx\n\t" "movl %%edx,0(%%eax)\n\t" "# setup the return value to the carry flag\n\t" "lahf\n\t" "shrl $8,%%eax\n\t" "andl $1,%%eax\n" : "=a" (VAR_1)
  : "a" (VAR_0)
  : "%ebx", "%ecx", "%edx", "%esi", "%edi", "memory");

 return VAR_1;
}
