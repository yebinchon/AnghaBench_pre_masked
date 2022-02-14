
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int stats_bitmap; int tx_ring_num; int rx_ring_num; int stats_lock; TYPE_2__* rx_ring; TYPE_1__* tx_ring; int port_stats; int stats; int pkstats; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {unsigned long packets; unsigned long bytes; } ;
struct TYPE_3__ {unsigned long packets; unsigned long bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
  struct ethtool_stats *VAR_4, uint64_t *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = 0;
 int VAR_8, VAR_9 = 0;

 FUNC_1(&VAR_6->stats_lock);

 if (!(VAR_6->stats_bitmap)) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_5[VAR_7++] =
    ((unsigned long *) &VAR_6->stats)[VAR_8];
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   VAR_5[VAR_7++] =
    ((unsigned long *) &VAR_6->port_stats)[VAR_8];
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   VAR_5[VAR_7++] =
    ((unsigned long *) &VAR_6->pkstats)[VAR_8];
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   if ((VAR_6->stats_bitmap >> VAR_9) & 1)
    VAR_5[VAR_7++] =
    ((unsigned long *) &VAR_6->stats)[VAR_8];
   VAR_9++;
  }
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if ((VAR_6->stats_bitmap >> VAR_9) & 1)
    VAR_5[VAR_7++] =
    ((unsigned long *) &VAR_6->port_stats)[VAR_8];
   VAR_9++;
  }
 }
 for (VAR_8 = 0; VAR_8 < VAR_6->tx_ring_num; VAR_8++) {
  VAR_5[VAR_7++] = VAR_6->tx_ring[VAR_8].packets;
  VAR_5[VAR_7++] = VAR_6->tx_ring[VAR_8].bytes;
 }
 for (VAR_8 = 0; VAR_8 < VAR_6->rx_ring_num; VAR_8++) {
  VAR_5[VAR_7++] = VAR_6->rx_ring[VAR_8].packets;
  VAR_5[VAR_7++] = VAR_6->rx_ring[VAR_8].bytes;
 }
 FUNC_2(&VAR_6->stats_lock);

}
