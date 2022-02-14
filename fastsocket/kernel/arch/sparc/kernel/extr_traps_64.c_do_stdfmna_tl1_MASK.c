
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl1_traplog {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,struct pt_regs*) ;
 int FUNC_1 (struct tl1_traplog*) ;

void FUNC_2(struct pt_regs *VAR_0)
{
 FUNC_1((struct tl1_traplog *)(VAR_0 + 1));
 FUNC_0("TL1: STDF Exception", VAR_0);
}
