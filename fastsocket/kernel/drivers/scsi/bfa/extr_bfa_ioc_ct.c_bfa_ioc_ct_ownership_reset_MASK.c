
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_sem_reg; int ioc_fail_sync; int ioc_usage_sem_reg; int ioc_usage_reg; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_0)
{

 FUNC_0(VAR_0->ioc_regs.ioc_usage_sem_reg);
 FUNC_2(0, VAR_0->ioc_regs.ioc_usage_reg);
 FUNC_1(VAR_0->ioc_regs.ioc_usage_sem_reg);
 FUNC_2(1, VAR_0->ioc_regs.ioc_usage_sem_reg);

 FUNC_2(0, VAR_0->ioc_regs.ioc_fail_sync);





 FUNC_1(VAR_0->ioc_regs.ioc_sem_reg);
 FUNC_2(1, VAR_0->ioc_regs.ioc_sem_reg);
}
