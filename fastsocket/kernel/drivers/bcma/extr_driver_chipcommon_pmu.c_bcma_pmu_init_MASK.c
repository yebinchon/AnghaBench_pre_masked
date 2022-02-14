
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct bcma_drv_cc {TYPE_1__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcma_drv_cc*,int ,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int ) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 int FUNC_3 (struct bcma_drv_cc*) ;

void FUNC_4(struct bcma_drv_cc *VAR_2)
{
 if (VAR_2->pmu.rev == 1)
  FUNC_0(VAR_2, VAR_0,
         ~VAR_1);
 else
  FUNC_1(VAR_2, VAR_0,
        VAR_1);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
}
