
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;

int FUNC_0(const char *VAR_1, char **VAR_2, char **VAR_3)
{
 register long VAR_4 asm("r8") = VAR_0;
 register long VAR_5 asm("r12") = (long)VAR_1;
 register long VAR_6 asm("r11") = (long)VAR_2;
 register long VAR_7 asm("r10") = (long)VAR_3;

 asm volatile("scall"
       : "=r"(VAR_5)
       : "r"(VAR_4), "0"(VAR_5), "r"(VAR_6), "r"(VAR_7)
       : "cc", "memory");
 return VAR_5;
}
