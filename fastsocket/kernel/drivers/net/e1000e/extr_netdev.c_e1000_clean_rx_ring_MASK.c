
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_ring {unsigned int count; int tail; struct e1000_adapter* adapter; int head; scalar_t__ next_to_use; scalar_t__ next_to_clean; int size; int desc; int * rx_skb_top; struct e1000_buffer* buffer_info; } ;
struct e1000_ps_page {int * page; scalar_t__ dma; } ;
struct e1000_buffer {struct e1000_ps_page* ps_pages; int * skb; int * page; scalar_t__ dma; } ;
struct e1000_adapter {scalar_t__ clean_rx; int flags2; int rx_ps_bsize0; int rx_buffer_len; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct e1000_ring*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct e1000_ring *VAR_8)
{
 struct e1000_adapter *VAR_9 = VAR_8->adapter;
 struct e1000_buffer *VAR_10;
 struct e1000_ps_page *VAR_11;
 struct pci_dev *VAR_12 = VAR_9->pdev;
 unsigned int VAR_13, VAR_14;


 for (VAR_13 = 0; VAR_13 < VAR_8->count; VAR_13++) {
  VAR_10 = &VAR_8->buffer_info[VAR_13];
  if (VAR_10->dma) {
   if (VAR_9->clean_rx == VAR_6)
    FUNC_2(&VAR_12->dev, VAR_10->dma,
       VAR_9->rx_buffer_len,
       VAR_0);
   else if (VAR_9->clean_rx == VAR_5)
    FUNC_1(&VAR_12->dev, VAR_10->dma,
            VAR_3, VAR_0);
   else if (VAR_9->clean_rx == VAR_7)
    FUNC_2(&VAR_12->dev, VAR_10->dma,
       VAR_9->rx_ps_bsize0,
       VAR_0);
   VAR_10->dma = 0;
  }

  if (VAR_10->page) {
   FUNC_5(VAR_10->page);
   VAR_10->page = ((void*)0);
  }

  if (VAR_10->skb) {
   FUNC_0(VAR_10->skb);
   VAR_10->skb = ((void*)0);
  }

  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   VAR_11 = &VAR_10->ps_pages[VAR_14];
   if (!VAR_11->page)
    break;
   FUNC_1(&VAR_12->dev, VAR_11->dma, VAR_3,
           VAR_0);
   VAR_11->dma = 0;
   FUNC_5(VAR_11->page);
   VAR_11->page = ((void*)0);
  }
 }


 if (VAR_8->rx_skb_top) {
  FUNC_0(VAR_8->rx_skb_top);
  VAR_8->rx_skb_top = ((void*)0);
 }


 FUNC_4(VAR_8->desc, 0, VAR_8->size);

 VAR_8->next_to_clean = 0;
 VAR_8->next_to_use = 0;
 VAR_9->flags2 &= ~VAR_1;

 FUNC_6(0, VAR_8->head);
 if (VAR_8->adapter->flags2 & VAR_2)
  FUNC_3(VAR_8, 0);
 else
  FUNC_6(0, VAR_8->tail);
}
