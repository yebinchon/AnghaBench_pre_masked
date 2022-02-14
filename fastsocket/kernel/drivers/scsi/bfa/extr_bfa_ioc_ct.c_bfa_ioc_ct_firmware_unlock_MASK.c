
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int ioc_usage_sem_reg; int ioc_usage_reg; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_ioc_s*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc_s *VAR_0)
{
 u32 VAR_1;




 FUNC_1(VAR_0->ioc_regs.ioc_usage_sem_reg);
 VAR_1 = FUNC_3(VAR_0->ioc_regs.ioc_usage_reg);
 FUNC_0(VAR_1 <= 0);

 VAR_1--;
 FUNC_4(VAR_1, VAR_0->ioc_regs.ioc_usage_reg);
 FUNC_2(VAR_0, VAR_1);

 FUNC_3(VAR_0->ioc_regs.ioc_usage_sem_reg);
 FUNC_4(1, VAR_0->ioc_regs.ioc_usage_sem_reg);
}
