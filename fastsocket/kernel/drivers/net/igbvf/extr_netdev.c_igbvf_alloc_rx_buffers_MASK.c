
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* hdr_addr; void* pkt_addr; } ;
union e1000_adv_rx_desc {TYPE_1__ read; } ;
struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct igbvf_ring {unsigned int next_to_use; unsigned int count; scalar_t__ tail; struct igbvf_buffer* buffer_info; struct igbvf_adapter* adapter; } ;
struct igbvf_buffer {int page_offset; scalar_t__ dma; scalar_t__ page_dma; struct sk_buff* skb; int * page; } ;
struct TYPE_4__ {scalar_t__ hw_addr; } ;
struct igbvf_adapter {int rx_ps_hdr_size; int rx_buffer_len; TYPE_2__ hw; int alloc_rx_buff_failed; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 union e1000_adv_rx_desc* FUNC_0 (struct igbvf_ring,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int *,int *,int,int,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int,int ) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 struct sk_buff* FUNC_9 (struct net_device*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct igbvf_ring *VAR_3,
                                   int VAR_4)
{
 struct igbvf_adapter *VAR_5 = VAR_3->adapter;
 struct net_device *VAR_6 = VAR_5->netdev;
 struct pci_dev *VAR_7 = VAR_5->pdev;
 union e1000_adv_rx_desc *VAR_8;
 struct igbvf_buffer *VAR_9;
 struct sk_buff *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_11 = VAR_3->next_to_use;
 VAR_9 = &VAR_3->buffer_info[VAR_11];

 if (VAR_5->rx_ps_hdr_size)
  VAR_12 = VAR_5->rx_ps_hdr_size;
 else
  VAR_12 = VAR_5->rx_buffer_len;

 while (VAR_4--) {
  VAR_8 = FUNC_0(*VAR_3, VAR_11);

  if (VAR_5->rx_ps_hdr_size && !VAR_9->page_dma) {
   if (!VAR_9->page) {
    VAR_9->page = FUNC_2(VAR_1);
    if (!VAR_9->page) {
     VAR_5->alloc_rx_buff_failed++;
     goto no_buffers;
    }
    VAR_9->page_offset = 0;
   } else {
    VAR_9->page_offset ^= VAR_2 / 2;
   }
   VAR_9->page_dma =
    FUNC_6(&VAR_7->dev, VAR_9->page,
                 VAR_9->page_offset,
                 VAR_2 / 2,
          VAR_0);
   if (FUNC_8(&VAR_7->dev,
           VAR_9->page_dma)) {
    FUNC_1(VAR_9->page);
    VAR_9->page = ((void*)0);
    FUNC_4(&VAR_7->dev, "RX DMA map failed\n");
    break;
   }
  }

  if (!VAR_9->skb) {
   VAR_10 = FUNC_9(VAR_6, VAR_12);
   if (!VAR_10) {
    VAR_5->alloc_rx_buff_failed++;
    goto no_buffers;
   }

   VAR_9->skb = VAR_10;
   VAR_9->dma = FUNC_7(&VAR_7->dev, VAR_10->data,
                                     VAR_12,
         VAR_0);
   if (FUNC_8(&VAR_7->dev, VAR_9->dma)) {
    FUNC_5(VAR_9->skb);
    VAR_9->skb = ((void*)0);
    FUNC_4(&VAR_7->dev, "RX DMA map failed\n");
    goto no_buffers;
   }
  }


  if (VAR_5->rx_ps_hdr_size) {
   VAR_8->read.pkt_addr =
        FUNC_3(VAR_9->page_dma);
   VAR_8->read.hdr_addr = FUNC_3(VAR_9->dma);
  } else {
   VAR_8->read.pkt_addr =
        FUNC_3(VAR_9->dma);
   VAR_8->read.hdr_addr = 0;
  }

  VAR_11++;
  if (VAR_11 == VAR_3->count)
   VAR_11 = 0;
  VAR_9 = &VAR_3->buffer_info[VAR_11];
 }

no_buffers:
 if (VAR_3->next_to_use != VAR_11) {
  VAR_3->next_to_use = VAR_11;
  if (VAR_11 == 0)
   VAR_11 = (VAR_3->count - 1);
  else
   VAR_11--;





  FUNC_10();
  FUNC_11(VAR_11, VAR_5->hw.hw_addr + VAR_3->tail);
 }
}
