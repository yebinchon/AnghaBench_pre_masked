
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct pch_gbe_tx_ring {int count; int size; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ dma; int desc; int tx_lock; int buffer_info; } ;
struct pch_gbe_tx_desc {int gbec_status; } ;
struct pch_gbe_buffer {int dummy; } ;
struct pch_gbe_adapter {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pch_gbe_tx_desc* FUNC_0 (struct pch_gbe_tx_ring,int) ;
 int FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int ,unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

int FUNC_8(struct pch_gbe_adapter *VAR_3,
    struct pch_gbe_tx_ring *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->pdev;
 struct pch_gbe_tx_desc *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = (int)sizeof(struct pch_gbe_buffer) * VAR_4->count;
 VAR_4->buffer_info = FUNC_7(VAR_7);
 if (!VAR_4->buffer_info) {
  FUNC_4("Unable to allocate memory for the buffer information\n");
  return -VAR_1;
 }

 VAR_4->size = VAR_4->count * (int)sizeof(struct pch_gbe_tx_desc);

 VAR_4->desc = FUNC_1(&VAR_5->dev, VAR_4->size,
        &VAR_4->dma, VAR_2);
 if (!VAR_4->desc) {
  FUNC_6(VAR_4->buffer_info);
  FUNC_4("Unable to allocate memory for the transmit descriptor ring\n");
  return -VAR_1;
 }
 FUNC_2(VAR_4->desc, 0, VAR_4->size);

 VAR_4->next_to_use = 0;
 VAR_4->next_to_clean = 0;
 FUNC_5(&VAR_4->tx_lock);

 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++) {
  VAR_6 = FUNC_0(*VAR_4, VAR_8);
  VAR_6->gbec_status = VAR_0;
 }
 FUNC_3("tx_ring->desc = 0x%p  tx_ring->dma = 0x%08llx\n"
   "next_to_clean = 0x%08x  next_to_use = 0x%08x\n",
   VAR_4->desc, (unsigned long long)VAR_4->dma,
   VAR_4->next_to_clean, VAR_4->next_to_use);
 return 0;
}
