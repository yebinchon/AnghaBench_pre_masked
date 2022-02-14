
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pkt_addr; } ;
union ixgbe_adv_rx_desc {TYPE_1__ read; } ;
struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct ixgbevf_rx_buffer {int dma; struct sk_buff* skb; } ;
struct ixgbevf_ring {unsigned int next_to_use; unsigned int count; struct ixgbevf_rx_buffer* rx_buffer_info; int rx_buf_len; int netdev; } ;
struct ixgbevf_adapter {int hw; int alloc_rx_buff_failed; struct pci_dev* pdev; } ;


 int VAR_0 ;
 union ixgbe_adv_rx_desc* FUNC_0 (struct ixgbevf_ring*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct ixgbevf_ring*,unsigned int) ;
 struct sk_buff* FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ixgbevf_adapter *VAR_1,
         struct ixgbevf_ring *VAR_2,
         int VAR_3)
{
 struct pci_dev *VAR_4 = VAR_1->pdev;
 union ixgbe_adv_rx_desc *VAR_5;
 struct ixgbevf_rx_buffer *VAR_6;
 unsigned int VAR_7 = VAR_2->next_to_use;

 VAR_6 = &VAR_2->rx_buffer_info[VAR_7];

 while (VAR_3--) {
  VAR_5 = FUNC_0(VAR_2, VAR_7);

  if (!VAR_6->skb) {
   struct sk_buff *VAR_8;

   VAR_8 = FUNC_7(VAR_2->netdev,
       VAR_2->rx_buf_len);
   if (!VAR_8) {
    VAR_1->alloc_rx_buff_failed++;
    goto no_buffers;
   }
   VAR_6->skb = VAR_8;

   VAR_6->dma = FUNC_4(&VAR_4->dev, VAR_8->data,
       VAR_2->rx_buf_len,
       VAR_0);
   if (FUNC_5(&VAR_4->dev, VAR_6->dma)) {
    FUNC_3(VAR_8);
    VAR_6->skb = ((void*)0);
    FUNC_2(&VAR_4->dev, "RX DMA map failed\n");
    break;
   }
  }
  VAR_5->read.pkt_addr = FUNC_1(VAR_6->dma);

  VAR_7++;
  if (VAR_7 == VAR_2->count)
   VAR_7 = 0;
  VAR_6 = &VAR_2->rx_buffer_info[VAR_7];
 }

no_buffers:
 if (VAR_2->next_to_use != VAR_7) {
  VAR_2->next_to_use = VAR_7;
  FUNC_6(&VAR_1->hw, VAR_2, VAR_7);
 }
}
