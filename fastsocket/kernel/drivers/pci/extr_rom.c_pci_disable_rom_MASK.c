
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int rom_base_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;

void FUNC_2(struct pci_dev *VAR_1)
{
 u32 VAR_2;
 FUNC_0(VAR_1, VAR_1->rom_base_reg, &VAR_2);
 VAR_2 &= ~VAR_0;
 FUNC_1(VAR_1, VAR_1->rom_base_reg, VAR_2);
}
