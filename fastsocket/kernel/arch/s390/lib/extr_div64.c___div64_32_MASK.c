
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned long uint32_t ;



uint32_t FUNC_0(uint64_t *VAR_0, uint32_t VAR_1)
{
 register uint32_t VAR_2 asm("2");
 register uint32_t VAR_3 asm("3");
 uint32_t *VAR_4 = (uint32_t *) VAR_0;

 VAR_2 = 0UL;
 VAR_3 = VAR_4[0];
 asm volatile(
  "	dlr	%0,%2\n"
  : "+d" (VAR_2), "+d" (VAR_3) : "d" (VAR_1) : "cc" );
 VAR_4[0] = VAR_3;
 VAR_3 = VAR_4[1];
 asm volatile(
  "	dlr	%0,%2\n"
  : "+d" (VAR_2), "+d" (VAR_3) : "d" (VAR_1) : "cc" );
 VAR_4[1] = VAR_3;
 return VAR_2;
}
