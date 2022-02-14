
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {void* hw_addr0; void* hw_addr1; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,int,int ) ;
 unsigned long FUNC_8 (struct pci_dev*,int) ;
 unsigned long FUNC_9 (struct pci_dev*,int) ;
 scalar_t__ FUNC_10 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_13(struct vmxnet3_adapter *VAR_2, bool *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5, VAR_6;
 struct pci_dev *VAR_7 = VAR_2->pdev;

 VAR_4 = FUNC_5(VAR_7);
 if (VAR_4) {
  FUNC_1(&VAR_7->dev, "Failed to enable adapter: error %d\n", VAR_4);
  return VAR_4;
 }

 if (FUNC_11(VAR_7, FUNC_0(64)) == 0) {
  if (FUNC_10(VAR_7, FUNC_0(64)) != 0) {
   FUNC_1(&VAR_7->dev,
    "pci_set_consistent_dma_mask failed\n");
   VAR_4 = -VAR_0;
   goto err_set_mask;
  }
  *VAR_3 = 1;
 } else {
  if (FUNC_11(VAR_7, FUNC_0(32)) != 0) {
   FUNC_1(&VAR_7->dev,
    "pci_set_dma_mask failed\n");
   VAR_4 = -VAR_0;
   goto err_set_mask;
  }
  *VAR_3 = 0;
 }

 VAR_4 = FUNC_7(VAR_7, (1 << 2) - 1,
        VAR_1);
 if (VAR_4) {
  FUNC_1(&VAR_7->dev,
   "Failed to request region for adapter: error %d\n", VAR_4);
  goto err_set_mask;
 }

 FUNC_12(VAR_7);

 VAR_5 = FUNC_9(VAR_7, 0);
 VAR_6 = FUNC_8(VAR_7, 0);
 VAR_2->hw_addr0 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_2->hw_addr0) {
  FUNC_1(&VAR_7->dev, "Failed to map bar0\n");
  VAR_4 = -VAR_0;
  goto err_ioremap;
 }

 VAR_5 = FUNC_9(VAR_7, 1);
 VAR_6 = FUNC_8(VAR_7, 1);
 VAR_2->hw_addr1 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_2->hw_addr1) {
  FUNC_1(&VAR_7->dev, "Failed to map bar1\n");
  VAR_4 = -VAR_0;
  goto err_bar1;
 }
 return 0;

err_bar1:
 FUNC_3(VAR_2->hw_addr0);
err_ioremap:
 FUNC_6(VAR_7, (1 << 2) - 1);
err_set_mask:
 FUNC_4(VAR_7);
 return VAR_4;
}
