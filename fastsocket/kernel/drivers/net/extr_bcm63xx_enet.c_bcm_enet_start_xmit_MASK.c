
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct net_device {int trans_start; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct bcm_enet_priv {size_t tx_curr_desc; size_t tx_ring_size; int tx_lock; TYPE_2__ stats; int tx_desc_count; int tx_chan; TYPE_1__* pdev; struct sk_buff** tx_skb; struct bcm_enet_desc* tx_desc_cpu; } ;
struct bcm_enet_desc {int len_stat; int address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (struct bcm_enet_priv*,int ,int ) ;
 int VAR_10 ;
 struct bcm_enet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct bcm_enet_priv *VAR_13;
 struct bcm_enet_desc *VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = FUNC_4(VAR_12);


 FUNC_6(&VAR_13->tx_lock);



 if (FUNC_8(!VAR_13->tx_desc_count)) {
  FUNC_5(VAR_12);
  FUNC_1(&VAR_13->pdev->dev, "xmit called with no tx desc "
   "available?\n");
  VAR_16 = VAR_8;
  goto out_unlock;
 }


 VAR_14 = &VAR_13->tx_desc_cpu[VAR_13->tx_curr_desc];
 VAR_13->tx_skb[VAR_13->tx_curr_desc] = VAR_11;


 VAR_14->address = FUNC_2(&VAR_13->pdev->dev, VAR_11->data, VAR_11->len,
           VAR_6);

 VAR_15 = (VAR_11->len << VAR_3) & VAR_2;
 VAR_15 |= VAR_1 |
  VAR_0 |
  VAR_4;

 VAR_13->tx_curr_desc++;
 if (VAR_13->tx_curr_desc == VAR_13->tx_ring_size) {
  VAR_13->tx_curr_desc = 0;
  VAR_15 |= VAR_5;
 }
 VAR_13->tx_desc_count--;



 FUNC_9();
 VAR_14->len_stat = VAR_15;
 FUNC_9();


 FUNC_3(VAR_13, VAR_7,
   FUNC_0(VAR_13->tx_chan));


 if (!VAR_13->tx_desc_count)
  FUNC_5(VAR_12);

 VAR_13->stats.tx_bytes += VAR_11->len;
 VAR_13->stats.tx_packets++;
 VAR_12->trans_start = VAR_10;
 VAR_16 = VAR_9;

out_unlock:
 FUNC_7(&VAR_13->tx_lock);
 return VAR_16;
}
