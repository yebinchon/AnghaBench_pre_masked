
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct e1000_rx_ring {unsigned int next_to_use; unsigned int count; scalar_t__ rdt; struct e1000_buffer* buffer_info; } ;
struct e1000_rx_desc {int buffer_addr; } ;
struct e1000_buffer {scalar_t__ dma; struct sk_buff* skb; int * page; int length; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct e1000_adapter {TYPE_1__ hw; int alloc_rx_buff_failed; int rx_buffer_len; struct pci_dev* pdev; struct net_device* netdev; } ;


 int VAR_0 ;
 struct e1000_rx_desc* FUNC_0 (struct e1000_rx_ring,unsigned int) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct e1000_adapter*,int ,unsigned int) ;
 int FUNC_7 (int ,char*,unsigned int,int ) ;
 scalar_t__ FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (struct net_device*,unsigned int) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_15(struct e1000_adapter *VAR_3,
                             struct e1000_rx_ring *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 struct pci_dev *VAR_7 = VAR_3->pdev;
 struct e1000_rx_desc *VAR_8;
 struct e1000_buffer *VAR_9;
 struct sk_buff *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12 = 256 - 16 ;

 VAR_11 = VAR_4->next_to_use;
 VAR_9 = &VAR_4->buffer_info[VAR_11];

 while (VAR_5--) {
  VAR_10 = VAR_9->skb;
  if (VAR_10) {
   FUNC_11(VAR_10, 0);
   goto check_page;
  }

  VAR_10 = FUNC_9(VAR_6, VAR_12);
  if (FUNC_12(!VAR_10)) {

   VAR_3->alloc_rx_buff_failed++;
   break;
  }


  if (!FUNC_6(VAR_3, VAR_10->data, VAR_12)) {
   struct sk_buff *VAR_13 = VAR_10;
   FUNC_7(VAR_2, "skb align check failed: %u bytes at "
         "%p\n", VAR_12, VAR_10->data);

   VAR_10 = FUNC_9(VAR_6, VAR_12);

   if (!VAR_10) {
    FUNC_3(VAR_13);
    VAR_3->alloc_rx_buff_failed++;
    break;
   }

   if (!FUNC_6(VAR_3, VAR_10->data, VAR_12)) {

    FUNC_3(VAR_10);
    FUNC_3(VAR_13);
    break;
   }


   FUNC_3(VAR_13);
  }
  VAR_9->skb = VAR_10;
  VAR_9->length = VAR_3->rx_buffer_len;
check_page:

  if (!VAR_9->page) {
   VAR_9->page = FUNC_1(VAR_1);
   if (FUNC_12(!VAR_9->page)) {
    VAR_3->alloc_rx_buff_failed++;
    break;
   }
  }

  if (!VAR_9->dma) {
   VAR_9->dma = FUNC_4(&VAR_7->dev,
                                   VAR_9->page, 0,
       VAR_9->length,
       VAR_0);
   if (FUNC_5(&VAR_7->dev, VAR_9->dma)) {
    FUNC_10(VAR_9->page);
    FUNC_3(VAR_10);
    VAR_9->page = ((void*)0);
    VAR_9->skb = ((void*)0);
    VAR_9->dma = 0;
    VAR_3->alloc_rx_buff_failed++;
    break;
   }
  }

  VAR_8 = FUNC_0(*VAR_4, VAR_11);
  VAR_8->buffer_addr = FUNC_2(VAR_9->dma);

  if (FUNC_12(++VAR_11 == VAR_4->count))
   VAR_11 = 0;
  VAR_9 = &VAR_4->buffer_info[VAR_11];
 }

 if (FUNC_8(VAR_4->next_to_use != VAR_11)) {
  VAR_4->next_to_use = VAR_11;
  if (FUNC_12(VAR_11-- == 0))
   VAR_11 = (VAR_4->count - 1);





  FUNC_13();
  FUNC_14(VAR_11, VAR_3->hw.hw_addr + VAR_4->rdt);
 }
}
