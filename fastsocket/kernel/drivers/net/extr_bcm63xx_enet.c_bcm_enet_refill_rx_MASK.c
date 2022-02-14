
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct bcm_enet_priv {scalar_t__ rx_desc_count; scalar_t__ rx_ring_size; int rx_dirty_desc; int rx_skb_size; TYPE_2__ rx_timeout; TYPE_1__* pdev; int rx_chan; struct sk_buff** rx_skb; struct bcm_enet_desc* rx_desc_cpu; } ;
struct bcm_enet_desc {int len_stat; int address; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (struct bcm_enet_priv*,int,int ) ;
 scalar_t__ VAR_5 ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 struct bcm_enet_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6)
{
 struct bcm_enet_priv *VAR_7;

 VAR_7 = FUNC_6(VAR_6);

 while (VAR_7->rx_desc_count < VAR_7->rx_ring_size) {
  struct bcm_enet_desc *VAR_8;
  struct sk_buff *VAR_9;
  dma_addr_t VAR_10;
  int VAR_11;
  u32 VAR_12;

  VAR_11 = VAR_7->rx_dirty_desc;
  VAR_8 = &VAR_7->rx_desc_cpu[VAR_11];

  if (!VAR_7->rx_skb[VAR_11]) {
   VAR_9 = FUNC_5(VAR_6, VAR_7->rx_skb_size);
   if (!VAR_9)
    break;
   VAR_7->rx_skb[VAR_11] = VAR_9;

   VAR_10 = FUNC_3(&VAR_7->pdev->dev, VAR_9->data,
        VAR_7->rx_skb_size,
        VAR_3);
   VAR_8->address = VAR_10;
  }

  VAR_12 = VAR_7->rx_skb_size << VAR_0;
  VAR_12 |= VAR_1;
  if (VAR_7->rx_dirty_desc == VAR_7->rx_ring_size - 1) {
   VAR_12 |= VAR_2;
   VAR_7->rx_dirty_desc = 0;
  } else {
   VAR_7->rx_dirty_desc++;
  }
  FUNC_8();
  VAR_8->len_stat = VAR_12;

  VAR_7->rx_desc_count++;


  FUNC_4(VAR_7, 1, FUNC_0(VAR_7->rx_chan));
 }



 if (VAR_7->rx_desc_count == 0 && FUNC_7(VAR_6)) {
  FUNC_2(&VAR_7->pdev->dev, "unable to refill rx ring\n");
  VAR_7->rx_timeout.expires = VAR_5 + VAR_4;
  FUNC_1(&VAR_7->rx_timeout);
 }

 return 0;
}
