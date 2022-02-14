
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int data; int ip_summed; struct net_device* dev; int tail; int protocol; } ;
struct sh_eth_rxdesc {int status; int addr; int buffer_length; scalar_t__ frame_length; } ;
struct TYPE_4__ {scalar_t__ rx_bytes; int rx_packets; int rx_over_errors; int rx_missed_errors; int rx_length_errors; int rx_frame_errors; int rx_crc_errors; int rx_errors; } ;
struct sh_eth_private {int cur_rx; int dirty_rx; int rx_buf_sz; struct sk_buff** rx_skbuff; struct sh_eth_rxdesc* rx_ring; TYPE_2__ stats; TYPE_1__* cd; } ;
struct net_device {scalar_t__ base_addr; int dev; } ;
struct TYPE_3__ {int hw_swap; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct sh_eth_private*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 struct sk_buff* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (struct sh_eth_private*,int) ;
 int FUNC_8 (struct sk_buff*,struct net_device*) ;
 struct sh_eth_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_16)
{
 struct sh_eth_private *VAR_17 = FUNC_9(VAR_16);
 struct sh_eth_rxdesc *VAR_18;

 int VAR_19 = VAR_17->cur_rx % VAR_15;
 int VAR_20 = (VAR_17->dirty_rx + VAR_15) - VAR_17->cur_rx;
 struct sk_buff *VAR_21;
 u16 VAR_22 = 0;
 u32 VAR_23;

 VAR_18 = &VAR_17->rx_ring[VAR_19];
 while (!(VAR_18->status & FUNC_2(VAR_17, VAR_5))) {
  VAR_23 = FUNC_7(VAR_17, VAR_18->status);
  VAR_22 = VAR_18->frame_length;

  if (--VAR_20 < 0)
   break;

  if (!(VAR_23 & VAR_4))
   VAR_17->stats.rx_length_errors++;

  if (VAR_23 & (VAR_8 | VAR_10 | VAR_11 | VAR_12 |
       VAR_13 | VAR_14 | VAR_9)) {
   VAR_17->stats.rx_errors++;
   if (VAR_23 & VAR_8)
    VAR_17->stats.rx_crc_errors++;
   if (VAR_23 & VAR_10)
    VAR_17->stats.rx_frame_errors++;
   if (VAR_23 & VAR_11)
    VAR_17->stats.rx_length_errors++;
   if (VAR_23 & VAR_12)
    VAR_17->stats.rx_length_errors++;
   if (VAR_23 & VAR_14)
    VAR_17->stats.rx_missed_errors++;
   if (VAR_23 & VAR_9)
    VAR_17->stats.rx_over_errors++;
  } else {
   if (!VAR_17->cd->hw_swap)
    FUNC_13(
     FUNC_11(FUNC_0(VAR_18->addr, 4)),
     VAR_22 + 2);
   VAR_21 = VAR_17->rx_skbuff[VAR_19];
   VAR_17->rx_skbuff[VAR_19] = ((void*)0);
   FUNC_14(VAR_21, VAR_22);
   VAR_21->protocol = FUNC_8(VAR_21, VAR_16);
   FUNC_10(VAR_21);
   VAR_17->stats.rx_packets++;
   VAR_17->stats.rx_bytes += VAR_22;
  }
  VAR_18->status |= FUNC_2(VAR_17, VAR_5);
  VAR_19 = (++VAR_17->cur_rx) % VAR_15;
  VAR_18 = &VAR_17->rx_ring[VAR_19];
 }


 for (; VAR_17->cur_rx - VAR_17->dirty_rx > 0; VAR_17->dirty_rx++) {
  VAR_19 = VAR_17->dirty_rx % VAR_15;
  VAR_18 = &VAR_17->rx_ring[VAR_19];

  VAR_18->buffer_length = FUNC_0(VAR_17->rx_buf_sz, 16);

  if (VAR_17->rx_skbuff[VAR_19] == ((void*)0)) {
   VAR_21 = FUNC_5(VAR_17->rx_buf_sz);
   VAR_17->rx_skbuff[VAR_19] = VAR_21;
   if (VAR_21 == ((void*)0))
    break;
   FUNC_6(&VAR_16->dev, VAR_21->tail, VAR_17->rx_buf_sz,
     VAR_1);
   VAR_21->dev = VAR_16;
   FUNC_12(VAR_21);

   VAR_21->ip_summed = VAR_0;
   VAR_18->addr = FUNC_15(FUNC_1(VAR_21->data, 4));
  }
  if (VAR_19 >= VAR_15 - 1)
   VAR_18->status |=
    FUNC_2(VAR_17, VAR_5 | VAR_7 | VAR_6);
  else
   VAR_18->status |=
    FUNC_2(VAR_17, VAR_5 | VAR_7);
 }



 if (!(FUNC_3(VAR_16->base_addr + VAR_2) & VAR_3))
  FUNC_4(VAR_3, VAR_16->base_addr + VAR_2);

 return 0;
}
