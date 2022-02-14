
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int tx_ring_num; int rx_ring_num; } ;
struct ethtool_channels {int tx_count; int rx_count; int max_tx; int max_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ethtool_channels*,int ,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
     struct ethtool_channels *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->max_rx = VAR_0;
 VAR_4->max_tx = VAR_1;

 VAR_4->rx_count = VAR_5->rx_ring_num;
 VAR_4->tx_count = VAR_5->tx_ring_num / VAR_2;
}
