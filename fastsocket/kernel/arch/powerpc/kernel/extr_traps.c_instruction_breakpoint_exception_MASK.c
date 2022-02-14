
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pt_regs*,int ,int ) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (int ,char*,struct pt_regs*,int,int,int ) ;

void FUNC_3(struct pt_regs *VAR_4)
{
 if (FUNC_2(VAR_0, "iabr_match", VAR_4, 5,
     5, VAR_2) == VAR_1)
  return;
 if (FUNC_1(VAR_4))
  return;
 FUNC_0(VAR_2, VAR_4, VAR_3, VAR_4->nip);
}
