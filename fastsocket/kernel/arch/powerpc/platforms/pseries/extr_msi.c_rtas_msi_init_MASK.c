
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pci_irq_fixup; int msi_check_device; int teardown_msi_irqs; int setup_msi_irqs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_3 = FUNC_2("ibm,query-interrupt-source-number");
 VAR_1 = FUNC_2("ibm,change-msi");

 if ((VAR_3 == VAR_0) ||
   (VAR_1 == VAR_0)) {
  FUNC_1("rtas_msi: no RTAS tokens, no MSI support.\n");
  return -1;
 }

 FUNC_1("rtas_msi: Registering RTAS MSI callbacks.\n");

 FUNC_0(VAR_2.setup_msi_irqs);
 VAR_2.setup_msi_irqs = VAR_6;
 VAR_2.teardown_msi_irqs = VAR_7;
 VAR_2.msi_check_device = VAR_4;

 FUNC_0(VAR_2.pci_irq_fixup);
 VAR_2.pci_irq_fixup = VAR_5;

 return 0;
}
