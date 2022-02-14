
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct efx_nic {struct pci_dev* pci_dev; scalar_t__ membase_phys; int membase; TYPE_1__* type; int net_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int max_dma_mask; int mem_map_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,int ,char*) ;
 scalar_t__ FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_12(struct efx_nic *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->pci_dev;
 dma_addr_t VAR_6 = VAR_4->type->max_dma_mask;
 int VAR_7;

 FUNC_4(VAR_4, VAR_3, VAR_4->net_dev, "initialising I/O\n");

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7) {
  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev,
     "failed to enable PCI device\n");
  goto fail1;
 }

 FUNC_11(VAR_5);






 while (VAR_6 > 0x7fffffffUL) {
  if (FUNC_2(&VAR_5->dev, VAR_6)) {
   VAR_7 = FUNC_1(&VAR_5->dev, VAR_6);
   if (VAR_7 == 0)
    break;
  }
  VAR_6 >>= 1;
 }
 if (VAR_7) {
  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev,
     "could not find a suitable DMA mask\n");
  goto fail2;
 }
 FUNC_4(VAR_4, VAR_3, VAR_4->net_dev,
    "using DMA mask %llx\n", (unsigned long long) VAR_6);
 VAR_7 = FUNC_0(&VAR_5->dev, VAR_6);
 if (VAR_7) {




  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev,
     "failed to set consistent DMA mask\n");
  goto fail2;
 }

 VAR_4->membase_phys = FUNC_10(VAR_4->pci_dev, VAR_0);
 VAR_7 = FUNC_9(VAR_5, VAR_0, "sfc");
 if (VAR_7) {
  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev,
     "request for memory BAR failed\n");
  VAR_7 = -VAR_1;
  goto fail3;
 }
 VAR_4->membase = FUNC_3(VAR_4->membase_phys,
           VAR_4->type->mem_map_size);
 if (!VAR_4->membase) {
  FUNC_5(VAR_4, VAR_3, VAR_4->net_dev,
     "could not map memory BAR at %llx+%x\n",
     (unsigned long long)VAR_4->membase_phys,
     VAR_4->type->mem_map_size);
  VAR_7 = -VAR_2;
  goto fail4;
 }
 FUNC_4(VAR_4, VAR_3, VAR_4->net_dev,
    "memory BAR at %llx+%x (virtual %p)\n",
    (unsigned long long)VAR_4->membase_phys,
    VAR_4->type->mem_map_size, VAR_4->membase);

 return 0;

 fail4:
 FUNC_8(VAR_4->pci_dev, VAR_0);
 fail3:
 VAR_4->membase_phys = 0;
 fail2:
 FUNC_6(VAR_4->pci_dev);
 fail1:
 return VAR_7;
}
