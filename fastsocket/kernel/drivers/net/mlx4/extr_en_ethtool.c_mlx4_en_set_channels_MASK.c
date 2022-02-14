
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int num_tx_rings_p_up; int tx_ring_num; scalar_t__ rx_ring_num; scalar_t__ port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;
struct ethtool_channels {int tx_count; scalar_t__ rx_count; scalar_t__ combined_count; scalar_t__ other_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,scalar_t__) ;
 int FUNC_2 (struct mlx4_en_priv*) ;
 int FUNC_3 (struct mlx4_en_priv*) ;
 int FUNC_4 (struct mlx4_en_priv*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct mlx4_en_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,scalar_t__) ;
 int FUNC_12 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_4,
    struct ethtool_channels *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_10(VAR_4);
 struct mlx4_en_dev *VAR_7 = VAR_6->mdev;
 int VAR_8;
 int VAR_9 = 0;

 if (VAR_5->other_count || VAR_5->combined_count ||
     VAR_5->tx_count > VAR_2 ||
     VAR_5->rx_count > VAR_1 ||
     !VAR_5->tx_count || !VAR_5->rx_count)
  return -VAR_0;

 FUNC_8(&VAR_7->state_lock);
 if (VAR_6->port_up) {
  VAR_8 = 1;
  FUNC_7(VAR_4, 1);
 }

 FUNC_3(VAR_6);

 VAR_6->num_tx_rings_p_up = VAR_5->tx_count;
 VAR_6->tx_ring_num = VAR_5->tx_count * VAR_3;
 VAR_6->rx_ring_num = VAR_5->rx_count;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_6, "Failed reallocating port resources\n");
  goto out;
 }

 FUNC_12(VAR_4, VAR_6->tx_ring_num);
 FUNC_11(VAR_4, VAR_6->rx_ring_num);

 FUNC_5(VAR_4, VAR_3);

 FUNC_1(VAR_6, "Using %d TX rings\n", VAR_6->tx_ring_num);
 FUNC_1(VAR_6, "Using %d RX rings\n", VAR_6->rx_ring_num);

 if (VAR_8) {
  VAR_9 = FUNC_6(VAR_4);
  if (VAR_9)
   FUNC_0(VAR_6, "Failed starting port\n");
 }

 VAR_9 = FUNC_4(VAR_6);

out:
 FUNC_9(&VAR_7->state_lock);
 return VAR_9;
}
