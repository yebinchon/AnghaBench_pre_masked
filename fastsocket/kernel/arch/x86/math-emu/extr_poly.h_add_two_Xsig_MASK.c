
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Xsig ;



__attribute__((used)) static inline void FUNC_0(Xsig *VAR_0, const Xsig *VAR_1, long int *VAR_2)
{
 asm volatile ("movl %2,%%ecx; movl %3,%%esi;\n"
        "movl (%%esi),%%eax; addl %%eax,(%%ecx);\n"
        "movl 4(%%esi),%%eax; adcl %%eax,4(%%ecx);\n"
        "movl 8(%%esi),%%eax; adcl %%eax,8(%%ecx);\n"
        "jnc 0f;\n"
        "rcrl 8(%%ecx); rcrl 4(%%ecx); rcrl (%%ecx)\n"
        "movl %4,%%ecx; incl (%%ecx)\n"
        "movl $1,%%eax; jmp 1f;\n"
        "0: xorl %%eax,%%eax;\n" "1:\n":"=g" (*VAR_2), "=g"(*VAR_0)
        :"g"(VAR_0), "g"(VAR_1), "g"(VAR_2)
        :"cx", "si", "ax");
}
