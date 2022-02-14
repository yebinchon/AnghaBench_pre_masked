
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Xsig ;



__attribute__((used)) static inline void FUNC_0(Xsig *VAR_0)
{
 asm volatile ("movl %1,%%esi;\n"
        "xorl %%ecx,%%ecx;\n"
        "movl %%ecx,%%eax; subl (%%esi),%%eax; movl %%eax,(%%esi);\n"
        "movl %%ecx,%%eax; sbbl 4(%%esi),%%eax; movl %%eax,4(%%esi);\n"
        "movl %%ecx,%%eax; sbbl 8(%%esi),%%eax; movl %%eax,8(%%esi);\n":"=g"
        (*VAR_0):"g"(VAR_0):"si", "ax", "cx");
}
