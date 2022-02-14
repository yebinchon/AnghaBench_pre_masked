
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dev_id; int features; int vlan_features; int watchdog_timeo; int * netdev_ops; int dev_addr; int addr_len; int * dcbnl_ops; } ;
struct mlx4_en_tx_ring {int dummy; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct TYPE_13__ {int rx_filter; int tx_type; scalar_t__ flags; } ;
struct mlx4_en_priv {int port; int port_up; int rx_csum; int cqe_factor; int mac_index; int allocated; int registered; int service_task; int stats_task; scalar_t__ rx_skb_size; struct net_device* dev; int rx_ring_num; int tx_ring_num; struct mlx4_en_dev* mdev; int res; TYPE_1__ hwtstamp_config; int filters_lock; int filters; int stride; int prev_mac; int max_mtu; int * mac_hash; int linkstate_task; int watchdog_task; int rx_mode_task; int stats_lock; int msg_enable; void* tx_cq; void* tx_ring; int num_tx_rings_p_up; int flags; struct mlx4_en_port_profile* prof; int * ddev; } ;
struct mlx4_en_port_profile {int rx_ppp; int rx_pause; int tx_ppp; int tx_pause; int rx_ring_num; int tx_ring_num; int flags; } ;
struct TYPE_18__ {scalar_t__ enable_tc; int num_tx_rings_p_up; } ;
struct mlx4_en_dev {int workqueue; TYPE_8__* dev; struct net_device** pndev; scalar_t__ LSO_support; TYPE_6__ profile; TYPE_5__* pdev; } ;
struct mlx4_en_cq {int dummy; } ;
struct TYPE_15__ {int cqe_size; int flags; scalar_t__ steering_mode; int flags2; int * def_mac; int * eth_mtu_cap; } ;
struct TYPE_20__ {TYPE_3__ caps; TYPE_4__* pdev; } ;
struct TYPE_14__ {int ndo_rx_flow_steer; } ;
struct TYPE_19__ {TYPE_2__ rfs_data; } ;
struct TYPE_17__ {int dev; } ;
struct TYPE_16__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (struct net_device*,int *) ;
 int VAR_32 ;
 struct net_device* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_8 (struct mlx4_en_priv*,char*) ;
 int FUNC_9 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct mlx4_en_priv*,int ,int) ;
 int FUNC_15 (TYPE_8__*,size_t) ;
 int FUNC_16 (TYPE_8__*,size_t,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_17 (TYPE_8__*,int *,int ,int ) ;
 int FUNC_18 (struct mlx4_en_priv*) ;
 int FUNC_19 (struct net_device*) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_20 (struct net_device*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_21 (int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_22 (struct mlx4_en_priv*) ;
 int FUNC_23 (struct net_device*,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (struct net_device*,int) ;
 int FUNC_26 (struct mlx4_en_dev*,char*) ;
 scalar_t__ FUNC_27 (TYPE_8__*) ;
 scalar_t__ FUNC_28 (TYPE_8__*) ;
 int VAR_43 ;
 int VAR_44 ;
 TYPE_7__* FUNC_29 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_30 (struct net_device*) ;
 int FUNC_31 (struct net_device*) ;
 int FUNC_32 (struct net_device*,int ) ;
 int FUNC_33 (struct net_device*,int ) ;
 int FUNC_34 (int ,int *,int ) ;
 int FUNC_35 (struct net_device*) ;
 int FUNC_36 (int) ;
 int FUNC_37 (struct net_device*,int *) ;
 int FUNC_38 (int *) ;

int FUNC_39(struct mlx4_en_dev *VAR_45, int VAR_46,
   struct mlx4_en_port_profile *VAR_47)
{
 struct net_device *VAR_48;
 struct mlx4_en_priv *VAR_49;
 int VAR_50;
 int VAR_51;
 u64 VAR_52;

 VAR_48 = FUNC_6(sizeof(struct mlx4_en_priv),
     VAR_9, VAR_8);
 if (VAR_48 == ((void*)0)) {
  FUNC_26(VAR_45, "Net device allocation failed\n");
  return -VAR_2;
 }

 FUNC_33(VAR_48, VAR_47->tx_ring_num);
 FUNC_32(VAR_48, VAR_47->rx_ring_num);

 FUNC_5(VAR_48, &VAR_45->dev->pdev->dev);
 VAR_48->dev_id = VAR_46 - 1;





 VAR_49 = FUNC_30(VAR_48);
 FUNC_14(VAR_49, 0, sizeof(struct mlx4_en_priv));
 VAR_49->dev = VAR_48;
 VAR_49->mdev = VAR_45;
 VAR_49->ddev = &VAR_45->pdev->dev;
 VAR_49->prof = VAR_47;
 VAR_49->port = VAR_46;
 VAR_49->port_up = 0;
 VAR_49->rx_csum = 1;
 VAR_49->flags = VAR_47->flags;
 VAR_49->num_tx_rings_p_up = VAR_45->profile.num_tx_rings_p_up;
 VAR_49->tx_ring_num = VAR_47->tx_ring_num;

 VAR_49->tx_ring = FUNC_12(sizeof(struct mlx4_en_tx_ring) * VAR_9,
    VAR_5);
 if (!VAR_49->tx_ring) {
  VAR_51 = -VAR_2;
  goto out;
 }
 VAR_49->tx_cq = FUNC_12(sizeof(struct mlx4_en_cq) * VAR_9,
         VAR_5);
 if (!VAR_49->tx_cq) {
  VAR_51 = -VAR_2;
  goto out;
 }
 VAR_49->rx_ring_num = VAR_47->rx_ring_num;
 VAR_49->cqe_factor = (VAR_45->dev->caps.cqe_size == 64) ? 1 : 0;
 VAR_49->mac_index = -1;
 VAR_49->msg_enable = VAR_14;
 FUNC_38(&VAR_49->stats_lock);
 FUNC_3(&VAR_49->rx_mode_task, VAR_36);
 FUNC_3(&VAR_49->watchdog_task, VAR_41);
 FUNC_3(&VAR_49->linkstate_task, VAR_40);
 FUNC_0(&VAR_49->stats_task, VAR_35);
 FUNC_0(&VAR_49->service_task, VAR_42);
 for (VAR_50 = 0; VAR_50 < VAR_12; ++VAR_50)
  FUNC_1(&VAR_49->mac_hash[VAR_50]);


 VAR_49->max_mtu = VAR_45->dev->caps.eth_mtu_cap[VAR_49->port];


 VAR_48->addr_len = VAR_3;
 FUNC_24(VAR_48->dev_addr, VAR_45->dev->caps.def_mac[VAR_49->port]);
 if (!FUNC_11(VAR_48->dev_addr)) {
  if (FUNC_28(VAR_49->mdev->dev)) {
   FUNC_10(VAR_48);
   FUNC_9(VAR_49, "Assigned random MAC address %pM\n", VAR_48->dev_addr);
   VAR_52 = FUNC_21(VAR_48->dev_addr);
   VAR_45->dev->caps.def_mac[VAR_49->port] = VAR_52;
  } else {
   FUNC_7(VAR_49, "Port: %d, invalid mac burned: %pM, quiting\n",
          VAR_49->port, VAR_48->dev_addr);
   VAR_51 = -VAR_1;
   goto out;
  }
 }

 FUNC_13(VAR_49->prev_mac, VAR_48->dev_addr, sizeof(VAR_49->prev_mac));

 VAR_49->stride = FUNC_36(sizeof(struct mlx4_en_rx_desc) +
       VAR_0 * VAR_13);
 VAR_51 = FUNC_18(VAR_49);
 if (VAR_51)
  goto out;







 VAR_49->hwtstamp_config.flags = 0;
 VAR_49->hwtstamp_config.tx_type = VAR_7;
 VAR_49->hwtstamp_config.rx_filter = VAR_6;


 VAR_51 = FUNC_17(VAR_45->dev, &VAR_49->res,
    VAR_16, VAR_16);
 if (VAR_51) {
  FUNC_7(VAR_49, "Failed to allocate page for rx qps\n");
  goto out;
 }
 VAR_49->allocated = 1;




 if (FUNC_27(VAR_49->mdev->dev))
  VAR_48->netdev_ops = &VAR_44;
 else
  VAR_48->netdev_ops = &VAR_43;
 VAR_48->watchdog_timeo = VAR_17;
 FUNC_33(VAR_48, VAR_49->tx_ring_num);
 FUNC_32(VAR_48, VAR_49->rx_ring_num);





 if (VAR_45->profile.enable_tc)
  FUNC_23(VAR_48, VAR_15);





 FUNC_4(VAR_48, &VAR_37);
 FUNC_37(VAR_48, &VAR_38);




 VAR_48->features |= VAR_28;
 VAR_48->vlan_features |= VAR_28;
 VAR_48->features |= VAR_25 | VAR_24;
 VAR_48->vlan_features |= VAR_25 | VAR_24;
 VAR_48->features |= VAR_27;
 VAR_48->features |= VAR_20;
 VAR_48->features |= VAR_23 |
    VAR_22 |
    VAR_21;
 VAR_48->features |= VAR_19;
 if (VAR_45->LSO_support) {
  VAR_48->features |= VAR_29;
  VAR_48->features |= VAR_30;
  VAR_48->vlan_features |= VAR_29;
  VAR_48->vlan_features |= VAR_30;
 }

 if (VAR_45->dev->caps.steering_mode ==
     VAR_18)
  VAR_48->features |= VAR_26;

 VAR_45->pndev[VAR_46] = VAR_48;

 FUNC_31(VAR_48);
 FUNC_22(VAR_49);

 VAR_51 = FUNC_35(VAR_48);
 if (VAR_51) {
  FUNC_7(VAR_49, "Netdev registration failed for port %d\n", VAR_46);
  goto out;
 }
 VAR_49->registered = 1;

 FUNC_9(VAR_49, "Using %d TX rings\n", VAR_47->tx_ring_num);
 FUNC_9(VAR_49, "Using %d RX rings\n", VAR_47->rx_ring_num);

 FUNC_25(VAR_49->dev, VAR_49->dev->features);


 FUNC_19(VAR_48);
 VAR_51 = FUNC_16(VAR_45->dev, VAR_49->port,
        VAR_49->rx_skb_size + VAR_4,
        VAR_47->tx_pause, VAR_47->tx_ppp,
        VAR_47->rx_pause, VAR_47->rx_ppp);
 if (VAR_51) {
  FUNC_7(VAR_49, "Failed setting port general configurations "
         "for port %d, with error %d\n", VAR_49->port, VAR_51);
  goto out;
 }


 FUNC_9(VAR_49, "Initializing port\n");
 VAR_51 = FUNC_15(VAR_45->dev, VAR_49->port);
 if (VAR_51) {
  FUNC_7(VAR_49, "Failed Initializing port\n");
  goto out;
 }
 FUNC_22(VAR_49);
 FUNC_34(VAR_45->workqueue, &VAR_49->stats_task, VAR_32);

 if (VAR_45->dev->caps.flags2 & VAR_10)
  FUNC_34(VAR_45->workqueue, &VAR_49->service_task,
       VAR_31);

 return 0;

out:
 FUNC_20(VAR_48);
 return VAR_51;
}
