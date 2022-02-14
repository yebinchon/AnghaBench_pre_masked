
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct pch_gbe_rx_ring {unsigned int next_to_use; unsigned int count; scalar_t__ dma; struct pch_gbe_buffer* buffer_info; } ;
struct pch_gbe_rx_desc {int gbec_status; scalar_t__ buffer_addr; } ;
struct pch_gbe_hw {TYPE_2__* reg; } ;
struct pch_gbe_buffer {int mapped; int length; scalar_t__ dma; struct sk_buff* skb; int rx_buffer; } ;
struct TYPE_3__ {int rx_alloc_buff_failed; } ;
struct pch_gbe_adapter {unsigned int rx_buffer_len; TYPE_1__ stats; struct pci_dev* pdev; struct pch_gbe_hw hw; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int RX_DSC_SW_P; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct pch_gbe_rx_desc* FUNC_0 (struct pch_gbe_rx_ring,unsigned int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (struct net_device*,unsigned int) ;
 int FUNC_7 (char*,unsigned int,unsigned long long,int ) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct pch_gbe_adapter *VAR_3,
    struct pch_gbe_rx_ring *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 struct pci_dev *VAR_7 = VAR_3->pdev;
 struct pch_gbe_hw *VAR_8 = &VAR_3->hw;
 struct pch_gbe_rx_desc *VAR_9;
 struct pch_gbe_buffer *VAR_10;
 struct sk_buff *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;

 VAR_13 = VAR_3->rx_buffer_len + VAR_2;
 VAR_12 = VAR_4->next_to_use;

 while ((VAR_5--)) {
  VAR_10 = &VAR_4->buffer_info[VAR_12];
  VAR_11 = FUNC_6(VAR_6, VAR_13);
  if (FUNC_9(!VAR_11)) {

   VAR_3->stats.rx_alloc_buff_failed++;
   break;
  }

  FUNC_8(VAR_11, VAR_2);
  VAR_10->skb = VAR_11;

  VAR_10->dma = FUNC_2(&VAR_7->dev,
        VAR_10->rx_buffer,
        VAR_10->length,
        VAR_0);
  if (FUNC_3(&VAR_3->pdev->dev, VAR_10->dma)) {
   FUNC_1(VAR_11);
   VAR_10->skb = ((void*)0);
   VAR_10->dma = 0;
   VAR_3->stats.rx_alloc_buff_failed++;
   break;
  }
  VAR_10->mapped = 1;
  VAR_9 = FUNC_0(*VAR_4, VAR_12);
  VAR_9->buffer_addr = (VAR_10->dma);
  VAR_9->gbec_status = VAR_1;

  FUNC_7("i = %d  buffer_info->dma = 0x08%llx  buffer_info->length = 0x%x\n",
    VAR_12, (unsigned long long)VAR_10->dma,
    VAR_10->length);

  if (FUNC_9(++VAR_12 == VAR_4->count))
   VAR_12 = 0;
 }
 if (FUNC_5(VAR_4->next_to_use != VAR_12)) {
  VAR_4->next_to_use = VAR_12;
  if (FUNC_9(VAR_12-- == 0))
   VAR_12 = (VAR_4->count - 1);
  FUNC_4(VAR_4->dma +
     (int)sizeof(struct pch_gbe_rx_desc) * VAR_12,
     &VAR_8->reg->RX_DSC_SW_P);
 }
 return;
}
