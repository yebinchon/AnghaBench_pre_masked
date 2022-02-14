
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct igbvf_ring {unsigned int count; unsigned long size; scalar_t__ tail; scalar_t__ head; scalar_t__ next_to_use; scalar_t__ next_to_clean; struct igbvf_buffer* desc; struct igbvf_buffer* buffer_info; struct igbvf_adapter* adapter; } ;
struct igbvf_buffer {scalar_t__ page_offset; scalar_t__ page_dma; int * page; int * skb; scalar_t__ dma; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct igbvf_adapter {TYPE_1__ hw; scalar_t__ rx_buffer_len; scalar_t__ rx_ps_hdr_size; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int,int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct igbvf_buffer*,int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct igbvf_ring *VAR_2)
{
 struct igbvf_adapter *VAR_3 = VAR_2->adapter;
 struct igbvf_buffer *VAR_4;
 struct pci_dev *VAR_5 = VAR_3->pdev;
 unsigned long VAR_6;
 unsigned int VAR_7;

 if (!VAR_2->buffer_info)
  return;


 for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7++) {
  VAR_4 = &VAR_2->buffer_info[VAR_7];
  if (VAR_4->dma) {
   if (VAR_3->rx_ps_hdr_size){
    FUNC_2(&VAR_5->dev, VAR_4->dma,
                     VAR_3->rx_ps_hdr_size,
       VAR_0);
   } else {
    FUNC_2(&VAR_5->dev, VAR_4->dma,
                     VAR_3->rx_buffer_len,
       VAR_0);
   }
   VAR_4->dma = 0;
  }

  if (VAR_4->skb) {
   FUNC_0(VAR_4->skb);
   VAR_4->skb = ((void*)0);
  }

  if (VAR_4->page) {
   if (VAR_4->page_dma)
    FUNC_1(&VAR_5->dev,
            VAR_4->page_dma,
                   VAR_1 / 2,
            VAR_0);
   FUNC_4(VAR_4->page);
   VAR_4->page = ((void*)0);
   VAR_4->page_dma = 0;
   VAR_4->page_offset = 0;
  }
 }

 VAR_6 = sizeof(struct igbvf_buffer) * VAR_2->count;
 FUNC_3(VAR_2->buffer_info, 0, VAR_6);


 FUNC_3(VAR_2->desc, 0, VAR_2->size);

 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;

 FUNC_5(0, VAR_3->hw.hw_addr + VAR_2->head);
 FUNC_5(0, VAR_3->hw.hw_addr + VAR_2->tail);
}
