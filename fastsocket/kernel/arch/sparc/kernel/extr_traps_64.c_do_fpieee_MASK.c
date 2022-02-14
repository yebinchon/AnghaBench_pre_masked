
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (int ,char*,struct pt_regs*,int ,int,int ) ;

void FUNC_2(struct pt_regs *VAR_3)
{
 if (FUNC_1(VAR_0, "fpu exception ieee", VAR_3,
         0, 0x24, VAR_2) == VAR_1)
  return;

 FUNC_0(VAR_3);
}
