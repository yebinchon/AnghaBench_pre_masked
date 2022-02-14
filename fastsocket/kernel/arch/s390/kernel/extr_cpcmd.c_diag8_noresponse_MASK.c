
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long addr_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 register unsigned long VAR_2 asm ("2") = (addr_t) VAR_0;
 register unsigned long VAR_3 asm ("3") = VAR_1;

 asm volatile(

  "	diag	%1,%0,0x8\n"





  : "+d" (VAR_3) : "d" (VAR_2) : "cc");
 return VAR_3;
}
