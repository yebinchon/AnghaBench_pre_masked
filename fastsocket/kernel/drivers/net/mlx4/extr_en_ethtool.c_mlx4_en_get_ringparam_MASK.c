
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_2__* tx_ring; TYPE_1__* rx_ring; scalar_t__ port_up; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {int size; int actual_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethtool_ringparam*,int ,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
      struct ethtool_ringparam *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_pending = VAR_4->port_up ?
  VAR_4->rx_ring[0].actual_size : VAR_4->rx_ring[0].size;
 VAR_3->tx_pending = VAR_4->tx_ring[0].size;
}
