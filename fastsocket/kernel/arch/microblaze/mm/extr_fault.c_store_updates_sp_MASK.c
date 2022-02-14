
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ pc; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct pt_regs *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_0(VAR_1, (unsigned int *)VAR_0->pc))
  return 0;

 if (((VAR_1 >> 21) & 0x1f) != 1)
  return 0;

 if ((VAR_1 & 0xd0000000) == 0xd0000000)
  return 1;
 return 0;
}
