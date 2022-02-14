
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct b43_rxhdr_fw4 {int frame_len; } ;
struct b43_dmaring {scalar_t__ rx_buffersize; scalar_t__ frameoffset; TYPE_1__* dev; struct b43_dma_ops* ops; } ;
struct b43_dmadesc_meta {int dmaaddr; struct sk_buff* skb; } ;
struct b43_dmadesc_generic {int dummy; } ;
struct b43_dma_ops {struct b43_dmadesc_generic* (* idx2desc ) (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;} ;
typedef scalar_t__ s32 ;
typedef int dma_addr_t ;
struct TYPE_2__ {int wl; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_dmaring*,struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,struct b43_rxhdr_fw4*) ;
 int FUNC_2 (struct b43_dmaring*,struct sk_buff*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct b43_dmaring*,int) ;
 int FUNC_8 (struct b43_dmaring*,struct b43_dmadesc_generic*,struct b43_dmadesc_meta*,int ) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 struct b43_dmadesc_generic* FUNC_11 (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;
 struct b43_dmadesc_generic* FUNC_12 (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;
 int FUNC_13 (struct b43_dmaring*,int ,scalar_t__) ;
 int FUNC_14 (struct b43_dmaring*,int ,scalar_t__) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct b43_dmaring*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_18(struct b43_dmaring *VAR_1, int *VAR_2)
{
 const struct b43_dma_ops *VAR_3 = VAR_1->ops;
 struct b43_dmadesc_generic *VAR_4;
 struct b43_dmadesc_meta *VAR_5;
 struct b43_rxhdr_fw4 *VAR_6;
 struct sk_buff *VAR_7;
 u16 VAR_8;
 int VAR_9;
 dma_addr_t VAR_10;

 VAR_4 = VAR_3->idx2desc(VAR_1, *VAR_2, &VAR_5);

 FUNC_13(VAR_1, VAR_5->dmaaddr, VAR_1->rx_buffersize);
 VAR_7 = VAR_5->skb;

 VAR_6 = (struct b43_rxhdr_fw4 *)VAR_7->data;
 VAR_8 = FUNC_6(VAR_6->frame_len);
 if (VAR_8 == 0) {
  int VAR_11 = 0;

  do {
   FUNC_15(2);
   FUNC_5();
   VAR_8 = FUNC_6(VAR_6->frame_len);
  } while (VAR_8 == 0 && VAR_11++ < 5);
  if (FUNC_16(VAR_8 == 0)) {
   VAR_10 = VAR_5->dmaaddr;
   goto drop_recycle_buffer;
  }
 }
 if (FUNC_16(FUNC_2(VAR_1, VAR_7))) {


  FUNC_3(VAR_1->dev->wl, "DMA RX: Dropping poisoned buffer.\n");
  VAR_10 = VAR_5->dmaaddr;
  goto drop_recycle_buffer;
 }
 if (FUNC_16(VAR_8 + VAR_1->frameoffset > VAR_1->rx_buffersize)) {





  int VAR_12 = 0;
  s32 VAR_13 = VAR_8;

  while (1) {
   VAR_4 = VAR_3->idx2desc(VAR_1, *VAR_2, &VAR_5);

   FUNC_0(VAR_1, VAR_5->skb);
   FUNC_14(VAR_1, VAR_5->dmaaddr,
         VAR_1->rx_buffersize);
   *VAR_2 = FUNC_7(VAR_1, *VAR_2);
   VAR_12++;
   VAR_13 -= VAR_1->rx_buffersize;
   if (VAR_13 <= 0)
    break;
  }
  FUNC_4(VAR_1->dev->wl, "DMA RX buffer too small "
         "(len: %u, buffer: %u, nr-dropped: %d)\n",
         VAR_8, VAR_1->rx_buffersize, VAR_12);
  goto drop;
 }

 VAR_10 = VAR_5->dmaaddr;
 VAR_9 = FUNC_8(VAR_1, VAR_4, VAR_5, VAR_0);
 if (FUNC_16(VAR_9)) {
  FUNC_3(VAR_1->dev->wl, "DMA RX: setup_rx_descbuffer() failed\n");
  goto drop_recycle_buffer;
 }

 FUNC_17(VAR_1, VAR_10, VAR_1->rx_buffersize, 0);
 FUNC_10(VAR_7, VAR_8 + VAR_1->frameoffset);
 FUNC_9(VAR_7, VAR_1->frameoffset);

 FUNC_1(VAR_1->dev, VAR_7, VAR_6);
drop:
 return;

drop_recycle_buffer:

 FUNC_0(VAR_1, VAR_7);
 FUNC_14(VAR_1, VAR_10, VAR_1->rx_buffersize);
}
