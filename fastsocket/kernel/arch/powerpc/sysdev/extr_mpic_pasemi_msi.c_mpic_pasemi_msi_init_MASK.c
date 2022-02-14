
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpic {TYPE_1__* irqhost; } ;
struct TYPE_4__ {int msi_check_device; int teardown_msi_irqs; int setup_msi_irqs; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mpic*) ;
 struct mpic* VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (char*) ;

int FUNC_4(struct mpic *VAR_6)
{
 int VAR_7;

 if (!VAR_6->irqhost->of_node ||
     !FUNC_2(VAR_6->irqhost->of_node,
         "pasemi,pwrficient-openpic"))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_3("pasemi_msi: Error allocating bitmap!\n");
  return VAR_7;
 }

 FUNC_3("pasemi_msi: Registering PA Semi MPIC MSI callbacks\n");

 VAR_1 = VAR_6;
 FUNC_0(VAR_5.setup_msi_irqs);
 VAR_5.setup_msi_irqs = VAR_3;
 VAR_5.teardown_msi_irqs = VAR_4;
 VAR_5.msi_check_device = VAR_2;

 return 0;
}
