
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {int tx_ring_num; int rx_ring_num; TYPE_2__* rx_ring; TYPE_1__* tx_ring; int port_stats; int pkstats; int pstats; int stats; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ packets; scalar_t__ bytes; } ;
struct TYPE_3__ {scalar_t__ packets; scalar_t__ bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (struct mlx4_en_dev*,int ,int) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_3(VAR_1);
 struct mlx4_en_dev *VAR_3 = VAR_2->mdev;
 int VAR_4;

 if (FUNC_2(VAR_3, VAR_2->port, 1))
  FUNC_0(VAR_0, VAR_2, "Failed dumping statistics\n");

 FUNC_1(&VAR_2->stats, 0, sizeof(VAR_2->stats));
 FUNC_1(&VAR_2->pstats, 0, sizeof(VAR_2->pstats));
 FUNC_1(&VAR_2->pkstats, 0, sizeof(VAR_2->pkstats));
 FUNC_1(&VAR_2->port_stats, 0, sizeof(VAR_2->port_stats));

 for (VAR_4 = 0; VAR_4 < VAR_2->tx_ring_num; VAR_4++) {
  VAR_2->tx_ring[VAR_4].bytes = 0;
  VAR_2->tx_ring[VAR_4].packets = 0;
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->rx_ring_num; VAR_4++) {
  VAR_2->rx_ring[VAR_4].bytes = 0;
  VAR_2->rx_ring[VAR_4].packets = 0;
 }
}
