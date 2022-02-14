
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer_addr; } ;
union e1000_rx_desc_extended {TYPE_1__ read; } ;
struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct e1000_ring {unsigned int next_to_use; unsigned int count; struct e1000_buffer* buffer_info; int tail; struct e1000_adapter* adapter; } ;
struct e1000_buffer {int dma; struct sk_buff* skb; } ;
struct e1000_adapter {unsigned int rx_buffer_len; int flags2; int rx_dma_failed; int alloc_rx_buff_failed; struct pci_dev* pdev; struct net_device* netdev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 union e1000_rx_desc_extended* FUNC_0 (struct e1000_ring,unsigned int) ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct net_device*,unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct e1000_ring*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_11(struct e1000_ring *VAR_3,
       int VAR_4, gfp_t VAR_5)
{
 struct e1000_adapter *VAR_6 = VAR_3->adapter;
 struct net_device *VAR_7 = VAR_6->netdev;
 struct pci_dev *VAR_8 = VAR_6->pdev;
 union e1000_rx_desc_extended *VAR_9;
 struct e1000_buffer *VAR_10;
 struct sk_buff *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13 = VAR_6->rx_buffer_len;

 VAR_12 = VAR_3->next_to_use;
 VAR_10 = &VAR_3->buffer_info[VAR_12];

 while (VAR_4--) {
  VAR_11 = VAR_10->skb;
  if (VAR_11) {
   FUNC_7(VAR_11, 0);
   goto map_skb;
  }

  VAR_11 = FUNC_1(VAR_7, VAR_13, VAR_5);
  if (!VAR_11) {

   VAR_6->alloc_rx_buff_failed++;
   break;
  }

  VAR_10->skb = VAR_11;
map_skb:
  VAR_10->dma = FUNC_4(&VAR_8->dev, VAR_11->data,
        VAR_6->rx_buffer_len,
        VAR_0);
  if (FUNC_5(&VAR_8->dev, VAR_10->dma)) {
   FUNC_3(&VAR_8->dev, "Rx DMA map failed\n");
   VAR_6->rx_dma_failed++;
   break;
  }

  VAR_9 = FUNC_0(*VAR_3, VAR_12);
  VAR_9->read.buffer_addr = FUNC_2(VAR_10->dma);

  if (FUNC_8(!(VAR_12 & (VAR_1 - 1)))) {





   FUNC_9();
   if (VAR_6->flags2 & VAR_2)
    FUNC_6(VAR_3, VAR_12);
   else
    FUNC_10(VAR_12, VAR_3->tail);
  }
  VAR_12++;
  if (VAR_12 == VAR_3->count)
   VAR_12 = 0;
  VAR_10 = &VAR_3->buffer_info[VAR_12];
 }

 VAR_3->next_to_use = VAR_12;
}
