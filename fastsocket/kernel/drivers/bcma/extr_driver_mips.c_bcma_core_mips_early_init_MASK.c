
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_drv_mips {int early_setup_done; TYPE_1__* core; } ;
struct bcma_bus {int drv_cc; } ;
struct TYPE_2__ {struct bcma_bus* bus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bcma_drv_mips*) ;

void FUNC_2(struct bcma_drv_mips *VAR_0)
{
 struct bcma_bus *VAR_1 = VAR_0->core->bus;

 if (VAR_0->early_setup_done)
  return;

 FUNC_0(&VAR_1->drv_cc);
 FUNC_1(VAR_0);

 VAR_0->early_setup_done = 1;
}
