
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(void *VAR_0)
{
 typedef struct { char _[4096]; } addr_type;
 int VAR_1;

 asm volatile(
  "	.insn	rre,0xb25f0000,%2,0\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_1), "=m" (*(addr_type *) VAR_0)
  : "d" (VAR_0), "m" (*(addr_type *) VAR_0)
  : "cc");
 return VAR_1;
}
