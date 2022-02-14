
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct bnad_tx_unmap {int nvecs; int * vectors; struct sk_buff* skb; } ;
struct bnad {TYPE_1__* pcidev; } ;
struct TYPE_6__ {TYPE_2__* frags; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {int dev; } ;


 int BFI_TX_MAX_VECTORS_PER_WI ;
 int BNA_QE_INDX_INC (size_t,size_t) ;
 int DMA_TO_DEVICE ;
 int dma_addr ;
 int dma_unmap_addr (int *,int ) ;
 int dma_unmap_addr_set (int *,int ,int ) ;
 int dma_unmap_page (int *,int ,int ,int ) ;
 int dma_unmap_single (int *,int ,int ,int ) ;
 int skb_headlen (struct sk_buff*) ;
 TYPE_3__* skb_shinfo (struct sk_buff*) ;

__attribute__((used)) static u32
bnad_tx_buff_unmap(struct bnad *bnad,
         struct bnad_tx_unmap *unmap_q,
         u32 q_depth, u32 index)
{
 struct bnad_tx_unmap *unmap;
 struct sk_buff *skb;
 int vector, nvecs;

 unmap = &unmap_q[index];
 nvecs = unmap->nvecs;

 skb = unmap->skb;
 unmap->skb = ((void*)0);
 unmap->nvecs = 0;
 dma_unmap_single(&bnad->pcidev->dev,
  dma_unmap_addr(&unmap->vectors[0], dma_addr),
  skb_headlen(skb), DMA_TO_DEVICE);
 dma_unmap_addr_set(&unmap->vectors[0], dma_addr, 0);
 nvecs--;

 vector = 0;
 while (nvecs) {
  vector++;
  if (vector == BFI_TX_MAX_VECTORS_PER_WI) {
   vector = 0;
   BNA_QE_INDX_INC(index, q_depth);
   unmap = &unmap_q[index];
  }

  dma_unmap_page(&bnad->pcidev->dev,
   dma_unmap_addr(&unmap->vectors[vector], dma_addr),
   skb_shinfo(skb)->frags[nvecs].size, DMA_TO_DEVICE);
  dma_unmap_addr_set(&unmap->vectors[vector], dma_addr, 0);
  nvecs--;
 }

 BNA_QE_INDX_INC(index, q_depth);

 return index;
}
