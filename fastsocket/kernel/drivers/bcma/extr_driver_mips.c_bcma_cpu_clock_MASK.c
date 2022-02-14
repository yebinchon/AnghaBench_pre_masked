
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_mips {TYPE_1__* core; } ;
struct TYPE_4__ {int capabilities; } ;
struct bcma_bus {TYPE_2__ drv_cc; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_bus*,char*) ;
 int FUNC_1 (TYPE_2__*) ;

u32 FUNC_2(struct bcma_drv_mips *VAR_1)
{
 struct bcma_bus *VAR_2 = VAR_1->core->bus;

 if (VAR_2->drv_cc.capabilities & VAR_0)
  return FUNC_1(&VAR_2->drv_cc);

 FUNC_0(VAR_2, "No PMU available, need this to get the cpu clock\n");
 return 0;
}
