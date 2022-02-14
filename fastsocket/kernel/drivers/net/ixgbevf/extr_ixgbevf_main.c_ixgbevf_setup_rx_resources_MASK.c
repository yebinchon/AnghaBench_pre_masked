
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct pci_dev {int dev; } ;
struct ixgbevf_rx_buffer {int dummy; } ;
struct ixgbevf_ring {int count; int size; scalar_t__ next_to_use; scalar_t__ next_to_clean; int * rx_buffer_info; int desc; int dma; } ;
struct ixgbevf_adapter {struct pci_dev* pdev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

int FUNC_4(struct ixgbevf_adapter *VAR_2,
          struct ixgbevf_ring *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pdev;
 int VAR_5;

 VAR_5 = sizeof(struct ixgbevf_rx_buffer) * VAR_3->count;
 VAR_3->rx_buffer_info = FUNC_3(VAR_5);
 if (!VAR_3->rx_buffer_info)
  goto alloc_failed;


 VAR_3->size = VAR_3->count * sizeof(union ixgbe_adv_rx_desc);
 VAR_3->size = FUNC_0(VAR_3->size, 4096);

 VAR_3->desc = FUNC_1(&VAR_4->dev, VAR_3->size,
        &VAR_3->dma, VAR_1);

 if (!VAR_3->desc) {
  FUNC_2(VAR_3->rx_buffer_info);
  VAR_3->rx_buffer_info = ((void*)0);
  goto alloc_failed;
 }

 VAR_3->next_to_clean = 0;
 VAR_3->next_to_use = 0;

 return 0;
alloc_failed:
 return -VAR_0;
}
