
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int ucode_boot; int pci_dev; int ucode_init_data; int ucode_init; int ucode_data_backup; int ucode_data; int ucode_code; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct il_priv *VAR_0)
{
 FUNC_0(VAR_0->pci_dev, &VAR_0->ucode_code);
 FUNC_0(VAR_0->pci_dev, &VAR_0->ucode_data);
 FUNC_0(VAR_0->pci_dev, &VAR_0->ucode_data_backup);
 FUNC_0(VAR_0->pci_dev, &VAR_0->ucode_init);
 FUNC_0(VAR_0->pci_dev, &VAR_0->ucode_init_data);
 FUNC_0(VAR_0->pci_dev, &VAR_0->ucode_boot);
}
