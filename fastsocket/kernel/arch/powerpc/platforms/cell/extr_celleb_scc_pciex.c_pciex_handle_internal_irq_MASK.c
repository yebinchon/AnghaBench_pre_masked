
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int * cfg_addr; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct pci_controller *VAR_3 = VAR_2;

 FUNC_2("PCIEX:pciex_handle_internal_irq(irq=%d)\n", VAR_1);

 FUNC_0(VAR_3->cfg_addr == ((void*)0));

 FUNC_1(VAR_3->cfg_addr);

 return VAR_0;
}
