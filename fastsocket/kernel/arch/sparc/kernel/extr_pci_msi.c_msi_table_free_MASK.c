
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {int * msi_irq_table; int * msiq_irq_cookies; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pci_pbm_info *VAR_0)
{
 FUNC_0(VAR_0->msiq_irq_cookies);
 VAR_0->msiq_irq_cookies = ((void*)0);

 FUNC_0(VAR_0->msi_irq_table);
 VAR_0->msi_irq_table = ((void*)0);
}
