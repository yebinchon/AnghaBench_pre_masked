
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pci_dev {int dev; } ;
struct ixgbevf_rx_buffer {struct sk_buff* skb; scalar_t__ dma; } ;
struct ixgbevf_ring {unsigned int count; unsigned long size; scalar_t__ tail; scalar_t__ head; scalar_t__ next_to_use; scalar_t__ next_to_clean; struct ixgbevf_rx_buffer* desc; struct ixgbevf_rx_buffer* rx_buffer_info; int rx_buf_len; } ;
struct TYPE_3__ {scalar_t__ hw_addr; } ;
struct ixgbevf_adapter {TYPE_1__ hw; struct pci_dev* pdev; } ;
struct TYPE_4__ {struct sk_buff* prev; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ixgbevf_rx_buffer*,int ,unsigned long) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ixgbevf_adapter *VAR_1,
      struct ixgbevf_ring *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;
 unsigned long VAR_4;
 unsigned int VAR_5;

 if (!VAR_2->rx_buffer_info)
  return;


 for (VAR_5 = 0; VAR_5 < VAR_2->count; VAR_5++) {
  struct ixgbevf_rx_buffer *VAR_6;

  VAR_6 = &VAR_2->rx_buffer_info[VAR_5];
  if (VAR_6->dma) {
   FUNC_2(&VAR_3->dev, VAR_6->dma,
      VAR_2->rx_buf_len,
      VAR_0);
   VAR_6->dma = 0;
  }
  if (VAR_6->skb) {
   struct sk_buff *VAR_7 = VAR_6->skb;
   VAR_6->skb = ((void*)0);
   do {
    struct sk_buff *VAR_8 = VAR_7;
    VAR_7 = FUNC_0(VAR_7)->prev;
    FUNC_1(VAR_8);
   } while (VAR_7);
  }
 }

 VAR_4 = sizeof(struct ixgbevf_rx_buffer) * VAR_2->count;
 FUNC_3(VAR_2->rx_buffer_info, 0, VAR_4);


 FUNC_3(VAR_2->desc, 0, VAR_2->size);

 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;

 if (VAR_2->head)
  FUNC_4(0, VAR_1->hw.hw_addr + VAR_2->head);
 if (VAR_2->tail)
  FUNC_4(0, VAR_1->hw.hw_addr + VAR_2->tail);
}
