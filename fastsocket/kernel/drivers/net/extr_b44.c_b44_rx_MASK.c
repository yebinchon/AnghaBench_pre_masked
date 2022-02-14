
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int protocol; int ip_summed; scalar_t__ data; } ;
struct rx_header {int flags; int len; } ;
struct ring_info {int mapping; struct sk_buff* skb; } ;
struct dma_desc {int dummy; } ;
struct b44 {int rx_cons; int rx_prod; TYPE_3__* dev; TYPE_2__* sdev; int force_copybreak; struct ring_info* rx_buffers; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int rx_dropped; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;
struct TYPE_5__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct b44*,int,int) ;
 int FUNC_1 (struct b44*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct b44*,int ) ;
 int FUNC_4 (struct b44*,int ,int) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__,int ) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 (struct sk_buff*,TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct b44 *VAR_10, int VAR_11)
{
 int VAR_12;
 u32 VAR_13, VAR_14;

 VAR_12 = 0;
 VAR_14 = FUNC_3(VAR_10, VAR_1) & VAR_4;
 VAR_14 /= sizeof(struct dma_desc);
 VAR_13 = VAR_10->rx_cons;

 while (VAR_13 != VAR_14 && VAR_11 > 0) {
  struct ring_info *VAR_15 = &VAR_10->rx_buffers[VAR_13];
  struct sk_buff *VAR_16 = VAR_15->skb;
  dma_addr_t VAR_17 = VAR_15->mapping;
  struct rx_header *VAR_18;
  u16 VAR_19;

  FUNC_7(VAR_10->sdev->dma_dev, VAR_17,
     VAR_8,
     VAR_5);
  VAR_18 = (struct rx_header *) VAR_16->data;
  VAR_19 = FUNC_10(VAR_18->len);
  if ((VAR_19 > (VAR_8 - VAR_9)) ||
      (VAR_18->flags & FUNC_5(VAR_7))) {
  drop_it:
   FUNC_1(VAR_10, VAR_13, VAR_10->rx_prod);
  drop_it_no_recycle:
   VAR_10->dev->stats.rx_dropped++;
   goto next_pkt;
  }

  if (VAR_19 == 0) {
   int VAR_20 = 0;

   do {
    FUNC_16(2);
    FUNC_2();
    VAR_19 = FUNC_10(VAR_18->len);
   } while (VAR_19 == 0 && VAR_20++ < 5);
   if (VAR_19 == 0)
    goto drop_it;
  }


  VAR_19 -= 4;

  if (!VAR_10->force_copybreak && VAR_19 > VAR_6) {
   int VAR_21;
   VAR_21 = FUNC_0(VAR_10, VAR_13, VAR_10->rx_prod);
   if (VAR_21 < 0)
    goto drop_it;
   FUNC_8(VAR_10->sdev->dma_dev, VAR_17,
      VAR_21, VAR_5);

   FUNC_14(VAR_16, VAR_19 + VAR_9);
   FUNC_13(VAR_16, VAR_9);
  } else {
   struct sk_buff *VAR_22;

   FUNC_1(VAR_10, VAR_13, VAR_10->rx_prod);
   VAR_22 = FUNC_6(VAR_19 + 2);
   if (VAR_22 == ((void*)0))
    goto drop_it_no_recycle;

   FUNC_15(VAR_22, 2);
   FUNC_14(VAR_22, VAR_19);

   FUNC_12(VAR_16, VAR_9,
        VAR_22->data, VAR_19);
   VAR_16 = VAR_22;
  }
  VAR_16->ip_summed = VAR_3;
  VAR_16->protocol = FUNC_9(VAR_16, VAR_10->dev);
  FUNC_11(VAR_16);
  VAR_12++;
  VAR_11--;
 next_pkt:
  VAR_10->rx_prod = (VAR_10->rx_prod + 1) &
   (VAR_2 - 1);
  VAR_13 = (VAR_13 + 1) & (VAR_2 - 1);
 }

 VAR_10->rx_cons = VAR_13;
 FUNC_4(VAR_10, VAR_0, VAR_13 * sizeof(struct dma_desc));

 return VAR_12;
}
