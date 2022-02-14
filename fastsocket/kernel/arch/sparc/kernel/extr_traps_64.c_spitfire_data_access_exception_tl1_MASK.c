
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl1_traplog {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tl1_traplog*) ;
 scalar_t__ FUNC_1 (int ,char*,struct pt_regs*,int ,int,int ) ;
 int FUNC_2 (struct pt_regs*,unsigned long,unsigned long) ;

void FUNC_3(struct pt_regs *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 if (FUNC_1(VAR_0, "data access exception tl1", VAR_3,
         0, 0x30, VAR_2) == VAR_1)
  return;

 FUNC_0((struct tl1_traplog *)(VAR_3 + 1));
 FUNC_2(VAR_3, VAR_4, VAR_5);
}
