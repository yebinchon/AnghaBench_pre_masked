
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
typedef struct ata_port_info {int pio_mask; int mwdma_mask; int * port_ops; int udma_mask; int flags; } const ata_port_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,struct ata_port_info const**,int *,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 int VAR_6;
 struct ata_port_info VAR_7 = {
  .flags = VAR_0,

  .pio_mask = 0x1f,
  .mwdma_mask = 0x07,
  .udma_mask = VAR_1,

  .port_ops = &VAR_2,
 };
 const struct ata_port_info *VAR_8[] = { &VAR_7, ((void*)0) };

 VAR_6 = FUNC_0(VAR_4, VAR_8, &VAR_3, ((void*)0));

 FUNC_1(&VAR_4->dev, "phison_init_one(), ret = %x\n", VAR_6);

 return VAR_6;
}
