
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct net_device {int mtu; } ;
struct mlx4_en_tx_ring {int buf_size; scalar_t__ buf; } ;
struct TYPE_6__ {int indir_qp; } ;
struct mlx4_en_priv {int port_up; size_t* ethtool_rules; int rx_ring_num; size_t port; int tx_ring_num; int num_tx_rings_p_up; int flags; TYPE_5__* rx_ring; struct mlx4_en_cq* rx_cq; struct mlx4_en_cq* tx_cq; struct mlx4_en_tx_ring* tx_ring; int stats_bitmap; int rx_mode_task; int broadcast_id; TYPE_1__ rss_map; int base_qpn; TYPE_4__* prof; scalar_t__ rx_skb_size; int max_mtu; int ethtool_list; int curr_list; int mc_list; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; int workqueue; scalar_t__* mac_removed; } ;
struct TYPE_8__ {int cqn; } ;
struct mlx4_en_cq {int size; TYPE_3__ mcq; TYPE_2__* buf; } ;
struct ethtool_flow_id {int dummy; } ;
struct TYPE_10__ {int cqn; } ;
struct TYPE_9__ {int rx_ppp; int rx_pause; int tx_ppp; int tx_pause; } ;
struct TYPE_7__ {int wqe_index; int owner_sr_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_3 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_4 (size_t*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,size_t) ;
 int FUNC_7 (int ,size_t,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_8 (int ,size_t,int ,int ) ;
 int FUNC_9 (struct mlx4_en_priv*,struct mlx4_en_cq*,int) ;
 int FUNC_10 (struct mlx4_en_priv*) ;
 int FUNC_11 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int ,int) ;
 int FUNC_12 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct mlx4_en_priv*) ;
 int FUNC_15 (struct mlx4_en_priv*) ;
 int FUNC_16 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_17 (struct mlx4_en_priv*,TYPE_5__*) ;
 int FUNC_18 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*) ;
 int FUNC_19 (struct mlx4_en_priv*) ;
 int FUNC_20 (struct mlx4_en_priv*) ;
 int FUNC_21 (struct mlx4_en_priv*) ;
 int FUNC_22 (struct mlx4_en_priv*) ;
 int FUNC_23 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 scalar_t__ FUNC_24 (int ,int *,size_t*,size_t,int ,int ,int *) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (struct mlx4_en_dev*,char*) ;
 struct mlx4_en_priv* FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct net_device*) ;
 int FUNC_29 (struct net_device*) ;
 int FUNC_30 (int ,int *) ;

int FUNC_31(struct net_device *VAR_10)
{
 struct mlx4_en_priv *VAR_11 = FUNC_27(VAR_10);
 struct mlx4_en_dev *VAR_12 = VAR_11->mdev;
 struct mlx4_en_cq *VAR_13;
 struct mlx4_en_tx_ring *VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18;
 int VAR_19;
 u8 VAR_20[16] = {0};

 if (VAR_11->port_up) {
  FUNC_2(VAR_0, VAR_11, "start port called while port already up\n");
  return 0;
 }

 FUNC_0(&VAR_11->mc_list);
 FUNC_0(&VAR_11->curr_list);
 FUNC_0(&VAR_11->ethtool_list);
 FUNC_4(&VAR_11->ethtool_rules[0], 0,
        sizeof(struct ethtool_flow_id) * VAR_4);


 VAR_10->mtu = FUNC_5(VAR_10->mtu, VAR_11->max_mtu);
 FUNC_13(VAR_10);
 FUNC_2(VAR_0, VAR_11, "Rx buf size:%d\n", VAR_11->rx_skb_size);


 VAR_17 = FUNC_10(VAR_11);
 if (VAR_17) {
  FUNC_3(VAR_11, "Failed to activate RX rings\n");
  return VAR_17;
 }
 for (VAR_18 = 0; VAR_18 < VAR_11->rx_ring_num; VAR_18++) {
  VAR_13 = &VAR_11->rx_cq[VAR_18];

  VAR_17 = FUNC_9(VAR_11, VAR_13, VAR_18);
  if (VAR_17) {
   FUNC_3(VAR_11, "Failed activating Rx CQ\n");
   goto cq_err;
  }
  for (VAR_19 = 0; VAR_19 < VAR_13->size; VAR_19++)
   VAR_13->buf[VAR_19].owner_sr_opcode = VAR_5;
  VAR_17 = FUNC_23(VAR_11, VAR_13);
  if (VAR_17) {
   FUNC_3(VAR_11, "Failed setting cq moderation parameters");
   FUNC_16(VAR_11, VAR_13);
   goto cq_err;
  }
  FUNC_12(VAR_11, VAR_13);
  VAR_11->rx_ring[VAR_18].cqn = VAR_13->mcq.cqn;
  ++VAR_15;
 }


 FUNC_2(VAR_0, VAR_11, "Getting qp number for port %d\n", VAR_11->port);
 VAR_17 = FUNC_20(VAR_11);
 if (VAR_17) {
  FUNC_3(VAR_11, "Failed getting eth qp\n");
  goto cq_err;
 }
 VAR_12->mac_removed[VAR_11->port] = 0;

 VAR_17 = FUNC_14(VAR_11);
 if (VAR_17) {
  FUNC_3(VAR_11, "Failed configuring rss steering\n");
  goto mac_err;
 }

 VAR_17 = FUNC_15(VAR_11);
 if (VAR_17)
  goto rss_err;


 for (VAR_18 = 0; VAR_18 < VAR_11->tx_ring_num; VAR_18++) {

  VAR_13 = &VAR_11->tx_cq[VAR_18];
  VAR_17 = FUNC_9(VAR_11, VAR_13, VAR_18);
  if (VAR_17) {
   FUNC_3(VAR_11, "Failed allocating Tx CQ\n");
   goto tx_err;
  }
  VAR_17 = FUNC_23(VAR_11, VAR_13);
  if (VAR_17) {
   FUNC_3(VAR_11, "Failed setting cq moderation parameters");
   FUNC_16(VAR_11, VAR_13);
   goto tx_err;
  }
  FUNC_2(VAR_0, VAR_11, "Resetting index of collapsed CQ:%d to -1\n", VAR_18);
  VAR_13->buf->wqe_index = FUNC_1(0xffff);


  VAR_14 = &VAR_11->tx_ring[VAR_18];
  VAR_17 = FUNC_11(VAR_11, VAR_14, VAR_13->mcq.cqn,
   VAR_18 / VAR_11->num_tx_rings_p_up);
  if (VAR_17) {
   FUNC_3(VAR_11, "Failed allocating Tx ring\n");
   FUNC_16(VAR_11, VAR_13);
   goto tx_err;
  }


  FUNC_12(VAR_11, VAR_13);


  for (VAR_19 = 0; VAR_19 < VAR_14->buf_size; VAR_19 += VAR_9)
   *((u32 *) (VAR_14->buf + VAR_19)) = 0xffffffff;
  ++VAR_16;
 }


 VAR_17 = FUNC_7(VAR_12->dev, VAR_11->port,
        VAR_11->rx_skb_size + VAR_2,
        VAR_11->prof->tx_pause,
        VAR_11->prof->tx_ppp,
        VAR_11->prof->rx_pause,
        VAR_11->prof->rx_ppp);
 if (VAR_17) {
  FUNC_3(VAR_11, "Failed setting port general configurations for port %d, with error %d\n",
         VAR_11->port, VAR_17);
  goto tx_err;
 }

 VAR_17 = FUNC_8(VAR_12->dev, VAR_11->port, VAR_11->base_qpn, 0);
 if (VAR_17) {
  FUNC_3(VAR_11, "Failed setting default qp numbers\n");
  goto tx_err;
 }


 FUNC_2(VAR_3, VAR_11, "Initializing port\n");
 VAR_17 = FUNC_6(VAR_12->dev, VAR_11->port);
 if (VAR_17) {
  FUNC_3(VAR_11, "Failed Initializing port\n");
  goto tx_err;
 }


 FUNC_4(&VAR_20[10], 0xff, VAR_1);
 VAR_20[5] = VAR_11->port;
 if (FUNC_24(VAR_12->dev, &VAR_11->rss_map.indir_qp, VAR_20,
      VAR_11->port, 0, VAR_8,
      &VAR_11->broadcast_id))
  FUNC_26(VAR_12, "Failed Attaching Broadcast\n");


 VAR_11->flags &= ~(VAR_7 | VAR_6);


 FUNC_30(VAR_12->workqueue, &VAR_11->rx_mode_task);

 FUNC_25(VAR_12->dev, &VAR_11->stats_bitmap);

 VAR_11->port_up = 1;
 FUNC_29(VAR_10);
 FUNC_28(VAR_10);

 return 0;

tx_err:
 while (VAR_16--) {
  FUNC_18(VAR_11, &VAR_11->tx_ring[VAR_16]);
  FUNC_16(VAR_11, &VAR_11->tx_cq[VAR_16]);
 }
 FUNC_19(VAR_11);
rss_err:
 FUNC_22(VAR_11);
mac_err:
 FUNC_21(VAR_11);
cq_err:
 while (VAR_15--)
  FUNC_16(VAR_11, &VAR_11->rx_cq[VAR_15]);
 for (VAR_18 = 0; VAR_18 < VAR_11->rx_ring_num; VAR_18++)
  FUNC_17(VAR_11, &VAR_11->rx_ring[VAR_18]);

 return VAR_17;
}
