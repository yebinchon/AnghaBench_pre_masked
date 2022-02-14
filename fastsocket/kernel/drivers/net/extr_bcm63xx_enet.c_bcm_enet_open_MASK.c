
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sockaddr {int sa_data; } ;
struct sk_buff {int dummy; } ;
struct phy_device {int supported; int advertising; TYPE_2__* drv; int addr; } ;
struct net_device {int irq; int dev_addr; int name; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int old_duplex; int old_pause; int rx_ring_size; int rx_desc_dma; unsigned int rx_desc_alloc_size; int tx_ring_size; int tx_desc_dma; unsigned int tx_desc_alloc_size; int tx_desc_count; struct phy_device* phydev; int irq_rx; int irq_tx; struct bcm_enet_desc* rx_desc_cpu; struct bcm_enet_desc* tx_desc_cpu; int * tx_skb; int * rx_skb; int rx_skb_size; scalar_t__ has_phy; int tx_chan; int rx_chan; int napi; int hw_mtu; scalar_t__ rx_curr_desc; scalar_t__ rx_dirty_desc; scalar_t__ rx_desc_count; int tx_lock; scalar_t__ tx_curr_desc; scalar_t__ tx_dirty_desc; scalar_t__ old_link; scalar_t__ pause_tx; scalar_t__ pause_rx; scalar_t__ pause_auto; int phy_id; scalar_t__ mac_id; TYPE_1__* pdev; } ;
struct bcm_enet_desc {int address; } ;
typedef int phy_id ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_13 (struct phy_device*) ;
 int VAR_21 ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_14 (struct phy_device*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_15 (struct net_device*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*,struct sockaddr*) ;
 int FUNC_18 (struct device*,char*,...) ;
 int FUNC_19 (struct device*,char*,int ,int ) ;
 void* FUNC_20 (struct device*,unsigned int,int*,int ) ;
 int FUNC_21 (struct device*,unsigned int,struct bcm_enet_desc*,int) ;
 int FUNC_22 (struct device*,int ,int ,int ) ;
 int FUNC_23 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_24 (struct bcm_enet_priv*,int ,int ) ;
 int FUNC_25 (int ,struct net_device*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (int,int ) ;
 int FUNC_29 (int ,int ,int ) ;
 int FUNC_30 (void*,int ,unsigned int) ;
 int FUNC_31 (int *) ;
 struct bcm_enet_priv* FUNC_32 (struct net_device*) ;
 int FUNC_33 (struct net_device*) ;
 struct phy_device* FUNC_34 (struct net_device*,char*,int *,int ,int ) ;
 int FUNC_35 (struct phy_device*) ;
 int FUNC_36 (struct phy_device*) ;
 int FUNC_37 (int ,int ,int,int ,struct net_device*) ;
 int FUNC_38 (char*,int,char*,char*,int ) ;
 int FUNC_39 (int *) ;
 int FUNC_40 () ;

__attribute__((used)) static int FUNC_41(struct net_device *VAR_34)
{
 struct bcm_enet_priv *VAR_35;
 struct sockaddr VAR_36;
 struct device *VAR_37;
 struct phy_device *VAR_38;
 int VAR_39, VAR_40;
 unsigned int VAR_41;
 char VAR_42[VAR_21 + 3];
 void *VAR_43;
 u32 VAR_44;

 VAR_35 = FUNC_32(VAR_34);
 VAR_37 = &VAR_35->pdev->dev;

 if (VAR_35->has_phy) {

  FUNC_38(VAR_42, sizeof(VAR_42), VAR_22,
    VAR_35->mac_id ? "1" : "0", VAR_35->phy_id);

  VAR_38 = FUNC_34(VAR_34, VAR_42, &VAR_31, 0,
         VAR_23);

  if (FUNC_13(VAR_38)) {
   FUNC_18(VAR_37, "could not attach to PHY\n");
   return FUNC_14(VAR_38);
  }


  VAR_38->supported &= (VAR_27 |
          VAR_26 |
          VAR_25 |
          VAR_24 |
          VAR_28 |
          VAR_30 |
          VAR_29);
  VAR_38->advertising = VAR_38->supported;

  if (VAR_35->pause_auto && VAR_35->pause_rx && VAR_35->pause_tx)
   VAR_38->advertising |= VAR_30;
  else
   VAR_38->advertising &= ~VAR_30;

  FUNC_19(VAR_37, "attached PHY at address %d [%s]\n",
    VAR_38->addr, VAR_38->drv->name);

  VAR_35->old_link = 0;
  VAR_35->old_duplex = -1;
  VAR_35->old_pause = -1;
  VAR_35->phydev = VAR_38;
 }


 FUNC_24(VAR_35, 0, VAR_10);
 FUNC_23(VAR_35, 0, FUNC_4(VAR_35->rx_chan));
 FUNC_23(VAR_35, 0, FUNC_4(VAR_35->tx_chan));

 VAR_40 = FUNC_37(VAR_34->irq, VAR_33, 0, VAR_34->name, VAR_34);
 if (VAR_40)
  goto out_phy_disconnect;

 VAR_40 = FUNC_37(VAR_35->irq_rx, VAR_32,
     VAR_20 | VAR_19, VAR_34->name, VAR_34);
 if (VAR_40)
  goto out_freeirq;

 VAR_40 = FUNC_37(VAR_35->irq_tx, VAR_32,
     VAR_19, VAR_34->name, VAR_34);
 if (VAR_40)
  goto out_freeirq_rx;


 for (VAR_39 = 0; VAR_39 < 4; VAR_39++) {
  FUNC_24(VAR_35, 0, FUNC_12(VAR_39));
  FUNC_24(VAR_35, 0, FUNC_11(VAR_39));
 }


 FUNC_29(VAR_36.sa_data, VAR_34->dev_addr, VAR_17);
 FUNC_17(VAR_34, &VAR_36);


 VAR_41 = VAR_35->rx_ring_size * sizeof(struct bcm_enet_desc);
 VAR_43 = FUNC_20(VAR_37, VAR_41, &VAR_35->rx_desc_dma, VAR_18);
 if (!VAR_43) {
  FUNC_18(VAR_37, "cannot allocate rx ring %u\n", VAR_41);
  VAR_40 = -VAR_16;
  goto out_freeirq_tx;
 }

 FUNC_30(VAR_43, 0, VAR_41);
 VAR_35->rx_desc_alloc_size = VAR_41;
 VAR_35->rx_desc_cpu = VAR_43;


 VAR_41 = VAR_35->tx_ring_size * sizeof(struct bcm_enet_desc);
 VAR_43 = FUNC_20(VAR_37, VAR_41, &VAR_35->tx_desc_dma, VAR_18);
 if (!VAR_43) {
  FUNC_18(VAR_37, "cannot allocate tx ring\n");
  VAR_40 = -VAR_16;
  goto out_free_rx_ring;
 }

 FUNC_30(VAR_43, 0, VAR_41);
 VAR_35->tx_desc_alloc_size = VAR_41;
 VAR_35->tx_desc_cpu = VAR_43;

 VAR_35->tx_skb = FUNC_28(sizeof(struct sk_buff *) * VAR_35->tx_ring_size,
          VAR_18);
 if (!VAR_35->tx_skb) {
  FUNC_18(VAR_37, "cannot allocate rx skb queue\n");
  VAR_40 = -VAR_16;
  goto out_free_tx_ring;
 }

 VAR_35->tx_desc_count = VAR_35->tx_ring_size;
 VAR_35->tx_dirty_desc = 0;
 VAR_35->tx_curr_desc = 0;
 FUNC_39(&VAR_35->tx_lock);


 VAR_35->rx_skb = FUNC_28(sizeof(struct sk_buff *) * VAR_35->rx_ring_size,
          VAR_18);
 if (!VAR_35->rx_skb) {
  FUNC_18(VAR_37, "cannot allocate rx skb queue\n");
  VAR_40 = -VAR_16;
  goto out_free_tx_skb;
 }

 VAR_35->rx_desc_count = 0;
 VAR_35->rx_dirty_desc = 0;
 VAR_35->rx_curr_desc = 0;


 FUNC_23(VAR_35, VAR_3 | 0,
   FUNC_0(VAR_35->rx_chan));

 if (FUNC_16(VAR_34)) {
  FUNC_18(VAR_37, "cannot allocate rx skb queue\n");
  VAR_40 = -VAR_16;
  goto out;
 }


 FUNC_23(VAR_35, VAR_35->rx_desc_dma,
   FUNC_7(VAR_35->rx_chan));
 FUNC_23(VAR_35, VAR_35->tx_desc_dma,
   FUNC_7(VAR_35->tx_chan));


 FUNC_23(VAR_35, 0, FUNC_8(VAR_35->rx_chan));
 FUNC_23(VAR_35, 0, FUNC_8(VAR_35->tx_chan));
 FUNC_23(VAR_35, 0, FUNC_9(VAR_35->rx_chan));
 FUNC_23(VAR_35, 0, FUNC_9(VAR_35->tx_chan));
 FUNC_23(VAR_35, 0, FUNC_10(VAR_35->rx_chan));
 FUNC_23(VAR_35, 0, FUNC_10(VAR_35->tx_chan));


 FUNC_24(VAR_35, VAR_35->hw_mtu, VAR_13);
 FUNC_24(VAR_35, VAR_35->hw_mtu, VAR_14);


 FUNC_23(VAR_35, VAR_0,
   FUNC_6(VAR_35->rx_chan));
 FUNC_23(VAR_35, VAR_0,
   FUNC_6(VAR_35->tx_chan));


 FUNC_24(VAR_35, VAR_1, VAR_15);


 VAR_44 = VAR_35->rx_ring_size / 3;
 FUNC_23(VAR_35, VAR_44, FUNC_3(VAR_35->rx_chan));
 VAR_44 = (VAR_35->rx_ring_size * 2) / 3;
 FUNC_23(VAR_35, VAR_44, FUNC_2(VAR_35->rx_chan));



 FUNC_40();
 FUNC_24(VAR_35, VAR_8, VAR_9);
 FUNC_23(VAR_35, VAR_4, VAR_5);
 FUNC_23(VAR_35, VAR_6,
   FUNC_1(VAR_35->rx_chan));


 FUNC_24(VAR_35, VAR_11, VAR_12);
 FUNC_24(VAR_35, VAR_11, VAR_10);


 FUNC_23(VAR_35, VAR_7,
   FUNC_5(VAR_35->rx_chan));
 FUNC_23(VAR_35, VAR_7,
   FUNC_5(VAR_35->tx_chan));


 FUNC_31(&VAR_35->napi);

 FUNC_23(VAR_35, VAR_7,
   FUNC_4(VAR_35->rx_chan));
 FUNC_23(VAR_35, VAR_7,
   FUNC_4(VAR_35->tx_chan));

 if (VAR_35->has_phy)
  FUNC_36(VAR_35->phydev);
 else
  FUNC_15(VAR_34);

 FUNC_33(VAR_34);
 return 0;

out:
 for (VAR_39 = 0; VAR_39 < VAR_35->rx_ring_size; VAR_39++) {
  struct bcm_enet_desc *VAR_45;

  if (!VAR_35->rx_skb[VAR_39])
   continue;

  VAR_45 = &VAR_35->rx_desc_cpu[VAR_39];
  FUNC_22(VAR_37, VAR_45->address, VAR_35->rx_skb_size,
     VAR_2);
  FUNC_27(VAR_35->rx_skb[VAR_39]);
 }
 FUNC_26(VAR_35->rx_skb);

out_free_tx_skb:
 FUNC_26(VAR_35->tx_skb);

out_free_tx_ring:
 FUNC_21(VAR_37, VAR_35->tx_desc_alloc_size,
     VAR_35->tx_desc_cpu, VAR_35->tx_desc_dma);

out_free_rx_ring:
 FUNC_21(VAR_37, VAR_35->rx_desc_alloc_size,
     VAR_35->rx_desc_cpu, VAR_35->rx_desc_dma);

out_freeirq_tx:
 FUNC_25(VAR_35->irq_tx, VAR_34);

out_freeirq_rx:
 FUNC_25(VAR_35->irq_rx, VAR_34);

out_freeirq:
 FUNC_25(VAR_34->irq, VAR_34);

out_phy_disconnect:
 FUNC_35(VAR_35->phydev);

 return VAR_40;
}
