
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0)
{
 int VAR_1;

 asm volatile(
  "	.insn	rre,0xb9a20000,%1,%1\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_1)
  : "d" (VAR_0) : "cc");
 return VAR_1;
}
