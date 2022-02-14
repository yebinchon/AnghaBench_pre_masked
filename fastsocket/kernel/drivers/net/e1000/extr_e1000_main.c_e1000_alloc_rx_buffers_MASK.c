
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {void* data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct e1000_rx_ring {unsigned int next_to_use; unsigned int count; scalar_t__ rdt; struct e1000_buffer* buffer_info; } ;
struct e1000_rx_desc {int buffer_addr; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_buffer {unsigned int length; scalar_t__ dma; struct sk_buff* skb; } ;
struct e1000_adapter {unsigned int rx_buffer_len; int alloc_rx_buff_failed; struct pci_dev* pdev; struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 struct e1000_rx_desc* FUNC_0 (struct e1000_rx_ring,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *,void*,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,unsigned int,int ) ;
 int FUNC_6 (struct e1000_adapter*,void*,unsigned int) ;
 int FUNC_7 (int ,char*,unsigned int,void*) ;
 scalar_t__ FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (struct net_device*,unsigned int) ;
 int VAR_1 ;
 int FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct e1000_adapter *VAR_2,
       struct e1000_rx_ring *VAR_3,
       int VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_2->hw;
 struct net_device *VAR_6 = VAR_2->netdev;
 struct pci_dev *VAR_7 = VAR_2->pdev;
 struct e1000_rx_desc *VAR_8;
 struct e1000_buffer *VAR_9;
 struct sk_buff *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = VAR_2->rx_buffer_len;

 VAR_11 = VAR_3->next_to_use;
 VAR_9 = &VAR_3->buffer_info[VAR_11];

 while (VAR_4--) {
  VAR_10 = VAR_9->skb;
  if (VAR_10) {
   FUNC_10(VAR_10, 0);
   goto map_skb;
  }

  VAR_10 = FUNC_9(VAR_6, VAR_12);
  if (FUNC_11(!VAR_10)) {

   VAR_2->alloc_rx_buff_failed++;
   break;
  }


  if (!FUNC_6(VAR_2, VAR_10->data, VAR_12)) {
   struct sk_buff *VAR_13 = VAR_10;
   FUNC_7(VAR_1, "skb align check failed: %u bytes at "
         "%p\n", VAR_12, VAR_10->data);

   VAR_10 = FUNC_9(VAR_6, VAR_12);

   if (!VAR_10) {
    FUNC_2(VAR_13);
    VAR_2->alloc_rx_buff_failed++;
    break;
   }

   if (!FUNC_6(VAR_2, VAR_10->data, VAR_12)) {

    FUNC_2(VAR_10);
    FUNC_2(VAR_13);
    VAR_2->alloc_rx_buff_failed++;
    break;
   }


   FUNC_2(VAR_13);
  }
  VAR_9->skb = VAR_10;
  VAR_9->length = VAR_2->rx_buffer_len;
map_skb:
  VAR_9->dma = FUNC_3(&VAR_7->dev,
        VAR_10->data,
        VAR_9->length,
        VAR_0);
  if (FUNC_4(&VAR_7->dev, VAR_9->dma)) {
   FUNC_2(VAR_10);
   VAR_9->skb = ((void*)0);
   VAR_9->dma = 0;
   VAR_2->alloc_rx_buff_failed++;
   break;
  }







  if (!FUNC_6(VAR_2,
     (void *)(unsigned long)VAR_9->dma,
     VAR_2->rx_buffer_len)) {
   FUNC_7(VAR_1, "dma align check failed: %u bytes at "
         "%p\n", VAR_2->rx_buffer_len,
         (void *)(unsigned long)VAR_9->dma);
   FUNC_2(VAR_10);
   VAR_9->skb = ((void*)0);

   FUNC_5(&VAR_7->dev, VAR_9->dma,
      VAR_2->rx_buffer_len,
      VAR_0);
   VAR_9->dma = 0;

   VAR_2->alloc_rx_buff_failed++;
   break;
  }
  VAR_8 = FUNC_0(*VAR_3, VAR_11);
  VAR_8->buffer_addr = FUNC_1(VAR_9->dma);

  if (FUNC_11(++VAR_11 == VAR_3->count))
   VAR_11 = 0;
  VAR_9 = &VAR_3->buffer_info[VAR_11];
 }

 if (FUNC_8(VAR_3->next_to_use != VAR_11)) {
  VAR_3->next_to_use = VAR_11;
  if (FUNC_11(VAR_11-- == 0))
   VAR_11 = (VAR_3->count - 1);





  FUNC_12();
  FUNC_13(VAR_11, VAR_5->hw_addr + VAR_3->rdt);
 }
}
