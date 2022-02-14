
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int rev; } ;
struct bcma_drv_cc {TYPE_2__ pmu; TYPE_1__* core; } ;
struct TYPE_3__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (int ,char*,int,int) ;

void FUNC_2(struct bcma_drv_cc *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_2->pmu.rev = (VAR_3 & VAR_1);

 FUNC_1(VAR_2->core->bus, "Found rev %u PMU (capabilities 0x%08X)\n",
     VAR_2->pmu.rev, VAR_3);
}
