
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct subchannel_id VAR_0)
{
 register struct subchannel_id VAR_1 asm("1") = VAR_0;
 int VAR_2;

 asm volatile(
  "	.insn	rre,0xb2760000,%1,0\n"
  "	ipm	%0\n"
  "	srl	%0,28"
  : "=d" (VAR_2)
  : "d" (VAR_1)
  : "cc");
 return VAR_2;
}
