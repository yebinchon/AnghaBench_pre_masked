
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct schib {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct subchannel_id VAR_0, struct schib *VAR_1)
{
 register struct subchannel_id VAR_2 asm ("1") = VAR_0;
 int VAR_3;

 asm volatile(
  "	msch	0(%2)\n"
  "	ipm	%0\n"
  "	srl	%0,28"
  : "=d" (VAR_3)
  : "d" (VAR_2), "a" (VAR_1), "m" (*VAR_1)
  : "cc");
 return VAR_3;
}
