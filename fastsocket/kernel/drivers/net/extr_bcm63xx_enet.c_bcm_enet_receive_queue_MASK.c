
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; struct net_device* dev; int data; } ;
struct net_device {int last_rx; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int rx_bytes; int rx_packets; int rx_dropped; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; } ;
struct bcm_enet_priv {int rx_desc_count; int rx_curr_desc; int rx_ring_size; int rx_chan; TYPE_2__ stats; struct sk_buff** rx_skb; int rx_skb_size; TYPE_1__* pdev; struct bcm_enet_desc* rx_desc_cpu; } ;
struct bcm_enet_desc {int len_stat; int address; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct net_device*) ;
 unsigned int VAR_12 ;
 int FUNC_2 (struct device*,int ,unsigned int,int ) ;
 int FUNC_3 (struct device*,int ,unsigned int,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int VAR_13 ;
 int FUNC_7 (int ,int ,unsigned int) ;
 struct sk_buff* FUNC_8 (struct net_device*,scalar_t__) ;
 struct bcm_enet_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct sk_buff*,unsigned int) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_14, int VAR_15)
{
 struct bcm_enet_priv *VAR_16;
 struct device *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_9(VAR_14);
 VAR_17 = &VAR_16->pdev->dev;
 VAR_18 = 0;



 if (VAR_15 > VAR_16->rx_desc_count)
  VAR_15 = VAR_16->rx_desc_count;

 do {
  struct bcm_enet_desc *VAR_19;
  struct sk_buff *VAR_20;
  int VAR_21;
  u32 VAR_22;
  unsigned int VAR_23;

  VAR_21 = VAR_16->rx_curr_desc;
  VAR_19 = &VAR_16->rx_desc_cpu[VAR_21];



  FUNC_11();

  VAR_22 = VAR_19->len_stat;


  if (VAR_22 & VAR_7)
   break;

  VAR_18++;
  VAR_16->rx_curr_desc++;
  if (VAR_16->rx_curr_desc == VAR_16->rx_ring_size)
   VAR_16->rx_curr_desc = 0;
  VAR_16->rx_desc_count--;



  if ((VAR_22 & VAR_2) != VAR_2) {
   VAR_16->stats.rx_dropped++;
   continue;
  }


  if (FUNC_14(VAR_22 & VAR_1)) {
   VAR_16->stats.rx_errors++;

   if (VAR_22 & VAR_5)
    VAR_16->stats.rx_length_errors++;
   if (VAR_22 & VAR_0)
    VAR_16->stats.rx_crc_errors++;
   if (VAR_22 & VAR_8)
    VAR_16->stats.rx_frame_errors++;
   if (VAR_22 & VAR_6)
    VAR_16->stats.rx_fifo_errors++;
   continue;
  }


  VAR_20 = VAR_16->rx_skb[VAR_21];
  VAR_23 = (VAR_22 & VAR_3) >> VAR_4;

  VAR_23 -= 4;

  if (VAR_23 < VAR_12) {
   struct sk_buff *VAR_24;

   VAR_24 = FUNC_8(VAR_14, VAR_23 + VAR_11);
   if (!VAR_24) {

    VAR_16->stats.rx_dropped++;
    continue;
   }



   FUNC_13(VAR_24, VAR_11);
   FUNC_2(VAR_17, VAR_19->address,
      VAR_23, VAR_9);
   FUNC_7(VAR_24->data, VAR_20->data, VAR_23);
   FUNC_3(VAR_17, VAR_19->address,
         VAR_23, VAR_9);
   VAR_20 = VAR_24;
  } else {
   FUNC_4(&VAR_16->pdev->dev, VAR_19->address,
      VAR_16->rx_skb_size, VAR_9);
   VAR_16->rx_skb[VAR_21] = ((void*)0);
  }

  FUNC_12(VAR_20, VAR_23);
  VAR_20->dev = VAR_14;
  VAR_20->protocol = FUNC_6(VAR_20, VAR_14);
  VAR_16->stats.rx_packets++;
  VAR_16->stats.rx_bytes += VAR_23;
  VAR_14->last_rx = VAR_13;
  FUNC_10(VAR_20);

 } while (--VAR_15 > 0);

 if (VAR_18 || !VAR_16->rx_desc_count) {
  FUNC_1(VAR_14);


  FUNC_5(VAR_16, VAR_10,
    FUNC_0(VAR_16->rx_chan));
 }

 return VAR_18;
}
