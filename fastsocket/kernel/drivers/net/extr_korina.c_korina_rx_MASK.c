
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; int protocol; } ;
struct TYPE_3__ {int multicast; int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_length_errors; int rx_frame_errors; int rx_over_errors; int rx_crc_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct korina_private {size_t rx_next_done; struct sk_buff** rx_skb; int dma_halt_cnt; TYPE_2__* rx_dma_regs; struct dma_desc* rd_ring; } ;
struct dma_desc {scalar_t__ devcs; int control; void* ca; } ;
struct TYPE_4__ {int dmas; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct korina_private*,struct dma_desc*) ;
 struct sk_buff* FUNC_7 (struct net_device*,int) ;
 struct korina_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_16, int VAR_17)
{
 struct korina_private *VAR_18 = FUNC_8(VAR_16);
 struct dma_desc *VAR_19 = &VAR_18->rd_ring[VAR_18->rx_next_done];
 struct sk_buff *VAR_20, *VAR_21;
 u8 *VAR_22;
 u32 VAR_23, VAR_24, VAR_25;
 int VAR_26;

 FUNC_3((u32)VAR_19, sizeof(*VAR_19));

 for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++) {
  VAR_20 = VAR_18->rx_skb[VAR_18->rx_next_done];
  VAR_21 = ((void*)0);

  VAR_23 = VAR_19->devcs;

  if ((VAR_14 - (u32)FUNC_1(VAR_19->control)) == 0)
   break;


  if (VAR_23 & VAR_6)
   VAR_16->stats.rx_crc_errors++;
  if (VAR_23 & VAR_10)
   VAR_16->stats.rx_length_errors++;
  if (VAR_23 & VAR_9)
   VAR_16->stats.rx_length_errors++;
  if (VAR_23 & VAR_12)
   VAR_16->stats.rx_over_errors++;
  if (VAR_23 & VAR_7)
   VAR_16->stats.rx_frame_errors++;
  if (VAR_23 & VAR_5)
   VAR_16->stats.rx_length_errors++;
  if (VAR_23 & VAR_11)
   VAR_16->stats.multicast++;

  if ((VAR_23 & VAR_8) != VAR_8) {



   VAR_16->stats.rx_errors++;
   VAR_16->stats.rx_dropped++;
  } else if ((VAR_23 & VAR_13)) {
   VAR_24 = FUNC_2(VAR_23);



   VAR_22 = (u8 *)VAR_18->rx_skb[VAR_18->rx_next_done]->data;


   FUNC_3((unsigned long)VAR_22, VAR_24 - 4);


   VAR_21 = FUNC_7(VAR_16, VAR_14 + 2);

   if (!VAR_21)
    break;

   FUNC_11(VAR_20, VAR_24 - 4);
   VAR_20->protocol = FUNC_5(VAR_20, VAR_16);


   FUNC_9(VAR_20);
   VAR_16->stats.rx_packets++;
   VAR_16->stats.rx_bytes += VAR_24;


   if (VAR_23 & VAR_11)
    VAR_16->stats.multicast++;


   FUNC_12(VAR_21, 2);

   VAR_18->rx_skb[VAR_18->rx_next_done] = VAR_21;
  }

  VAR_19->devcs = 0;


  if (VAR_21)
   VAR_19->ca = FUNC_0(VAR_21->data);
  else
   VAR_19->ca = FUNC_0(VAR_20->data);

  VAR_19->control = FUNC_1(VAR_14) |
   VAR_0 | VAR_1;
  VAR_18->rd_ring[(VAR_18->rx_next_done - 1) &
   VAR_15].control &=
   ~VAR_0;

  VAR_18->rx_next_done = (VAR_18->rx_next_done + 1) & VAR_15;
  FUNC_4((u32)VAR_19, sizeof(*VAR_19));
  VAR_19 = &VAR_18->rd_ring[VAR_18->rx_next_done];
  FUNC_13(~VAR_2, &VAR_18->rx_dma_regs->dmas);
 }

 VAR_25 = FUNC_10(&VAR_18->rx_dma_regs->dmas);

 if (VAR_25 & VAR_4) {
  FUNC_13(~(VAR_4 | VAR_3),
    &VAR_18->rx_dma_regs->dmas);

  VAR_18->dma_halt_cnt++;
  VAR_19->devcs = 0;
  VAR_20 = VAR_18->rx_skb[VAR_18->rx_next_done];
  VAR_19->ca = FUNC_0(VAR_20->data);
  FUNC_4((u32)VAR_19, sizeof(*VAR_19));
  FUNC_6(VAR_18, VAR_19);
 }

 return VAR_26;
}
