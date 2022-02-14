
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_3__ {scalar_t__ seg; } ;
struct TYPE_4__ {TYPE_1__ addr_limit; } ;


 int FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 () ;

long FUNC_2(const char *VAR_0, long VAR_1)
{
 unsigned long VAR_2, VAR_3;

 if (!FUNC_0(VAR_0))
  return 0;

 if (VAR_1 < 0 || VAR_1 + (u_long) VAR_0 > FUNC_1()->addr_limit.seg)
  VAR_1 = FUNC_1()->addr_limit.seg - (u_long)VAR_0;

 asm volatile(
  "0:	cmp %4,%0\n"
  "	beq 2f\n"
  "1:	movbu (%0,%3),%1\n"
  "	inc %0\n"
  "	cmp 0,%1\n"
  "	beq 3f\n"
  "	bra 0b\n"
  "2:	clr %0\n"
  "3:\n"
  ".section .fixup,\"ax\"\n"
  "4:	jmp 2b\n"
  ".previous\n"
  ".section __ex_table,\"a\"\n"
  "	.balign 4\n"
  "	.long 1b,4b\n"
  ".previous\n"
  :"=d"(VAR_2), "=&r"(VAR_3)
  :"0"(0), "a"(VAR_0), "r"(VAR_1)
  :"memory");
 return VAR_2;
}
