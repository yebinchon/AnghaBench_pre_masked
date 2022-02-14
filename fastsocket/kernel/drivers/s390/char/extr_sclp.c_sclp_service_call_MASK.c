
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sclp_cmdw_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(sclp_cmdw_t VAR_2, void *VAR_3)
{
 int VAR_4;

 asm volatile(
  "	.insn	rre,0xb2200000,%1,%2\n"
  "	ipm	%0\n"
  "	srl	%0,28"
  : "=&d" (VAR_4) : "d" (VAR_2), "a" (FUNC_0(VAR_3))
  : "cc", "memory");
 if (VAR_4 == 3)
  return -VAR_1;
 if (VAR_4 == 2)
  return -VAR_0;
 return 0;
}
