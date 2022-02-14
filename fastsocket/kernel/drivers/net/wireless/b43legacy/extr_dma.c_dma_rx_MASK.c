
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct b43legacy_rxhdr_fw3 {int frame_len; } ;
struct b43legacy_hwtxstatus {scalar_t__ cookie; } ;
struct b43legacy_dmaring {scalar_t__ rx_buffersize; int index; scalar_t__ frameoffset; TYPE_1__* dev; } ;
struct b43legacy_dmadesc_meta {int dmaaddr; struct sk_buff* skb; } ;
struct b43legacy_dmadesc32 {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int dma_addr_t ;
struct TYPE_3__ {int wl; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct b43legacy_hwtxstatus*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,struct b43legacy_rxhdr_fw3*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct b43legacy_dmaring*,int) ;
 struct b43legacy_dmadesc32* FUNC_7 (struct b43legacy_dmaring*,int,struct b43legacy_dmadesc_meta**) ;
 int FUNC_8 (struct b43legacy_dmaring*,struct b43legacy_dmadesc32*,struct b43legacy_dmadesc_meta*,int ) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct b43legacy_dmaring*,int ,scalar_t__) ;
 int FUNC_12 (struct b43legacy_dmaring*,int ,scalar_t__) ;
 int FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct b43legacy_dmaring*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_16(struct b43legacy_dmaring *VAR_1,
     int *VAR_2)
{
 struct b43legacy_dmadesc32 *VAR_3;
 struct b43legacy_dmadesc_meta *VAR_4;
 struct b43legacy_rxhdr_fw3 *VAR_5;
 struct sk_buff *VAR_6;
 u16 VAR_7;
 int VAR_8;
 dma_addr_t VAR_9;

 VAR_3 = FUNC_7(VAR_1, *VAR_2, &VAR_4);

 FUNC_11(VAR_1, VAR_4->dmaaddr, VAR_1->rx_buffersize);
 VAR_6 = VAR_4->skb;

 if (VAR_1->index == 3) {

  struct b43legacy_hwtxstatus *VAR_10 =
    (struct b43legacy_hwtxstatus *)VAR_6->data;
  int VAR_11 = 0;

  while (VAR_10->cookie == 0) {
   if (VAR_11 > 100)
    break;
   VAR_11++;
   FUNC_13(2);
   FUNC_4();
  }
  FUNC_0(VAR_1->dev, VAR_10);

  FUNC_12(VAR_1, VAR_4->dmaaddr,
        VAR_1->rx_buffersize);

  return;
 }
 VAR_5 = (struct b43legacy_rxhdr_fw3 *)VAR_6->data;
 VAR_7 = FUNC_5(VAR_5->frame_len);
 if (VAR_7 == 0) {
  int VAR_12 = 0;

  do {
   FUNC_13(2);
   FUNC_4();
   VAR_7 = FUNC_5(VAR_5->frame_len);
  } while (VAR_7 == 0 && VAR_12++ < 5);
  if (FUNC_14(VAR_7 == 0)) {

   FUNC_12(VAR_1, VAR_4->dmaaddr,
         VAR_1->rx_buffersize);
   goto drop;
  }
 }
 if (FUNC_14(VAR_7 > VAR_1->rx_buffersize)) {





  int VAR_13 = 0;
  s32 VAR_14 = VAR_7;

  while (1) {
   VAR_3 = FUNC_7(VAR_1, *VAR_2, &VAR_4);

   FUNC_12(VAR_1, VAR_4->dmaaddr,
         VAR_1->rx_buffersize);
   *VAR_2 = FUNC_6(VAR_1, *VAR_2);
   VAR_13++;
   VAR_14 -= VAR_1->rx_buffersize;
   if (VAR_14 <= 0)
    break;
  }
  FUNC_3(VAR_1->dev->wl, "DMA RX buffer too small "
         "(len: %u, buffer: %u, nr-dropped: %d)\n",
         VAR_7, VAR_1->rx_buffersize, VAR_13);
  goto drop;
 }

 VAR_9 = VAR_4->dmaaddr;
 VAR_8 = FUNC_8(VAR_1, VAR_3, VAR_4, VAR_0);
 if (FUNC_14(VAR_8)) {
  FUNC_2(VAR_1->dev->wl, "DMA RX: setup_rx_descbuffer()"
        " failed\n");
  FUNC_12(VAR_1, VAR_9,
        VAR_1->rx_buffersize);
  goto drop;
 }

 FUNC_15(VAR_1, VAR_9, VAR_1->rx_buffersize, 0);
 FUNC_10(VAR_6, VAR_7 + VAR_1->frameoffset);
 FUNC_9(VAR_6, VAR_1->frameoffset);

 FUNC_1(VAR_1->dev, VAR_6, VAR_5);
drop:
 return;
}
