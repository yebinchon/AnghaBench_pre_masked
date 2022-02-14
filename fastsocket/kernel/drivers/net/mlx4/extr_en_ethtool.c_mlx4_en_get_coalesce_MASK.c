
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int adaptive_rx_coal; int sample_interval; int rx_usecs_high; int pkt_rate_high; int rx_usecs_low; int pkt_rate_low; int rx_frames; int rx_usecs; int tx_frames; int tx_usecs; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; int rate_sample_interval; int rx_coalesce_usecs_high; int pkt_rate_high; int rx_coalesce_usecs_low; int pkt_rate_low; int rx_max_coalesced_frames; int rx_coalesce_usecs; int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_coalesce_usecs = VAR_2->tx_usecs;
 VAR_1->tx_max_coalesced_frames = VAR_2->tx_frames;
 VAR_1->rx_coalesce_usecs = VAR_2->rx_usecs;
 VAR_1->rx_max_coalesced_frames = VAR_2->rx_frames;

 VAR_1->pkt_rate_low = VAR_2->pkt_rate_low;
 VAR_1->rx_coalesce_usecs_low = VAR_2->rx_usecs_low;
 VAR_1->pkt_rate_high = VAR_2->pkt_rate_high;
 VAR_1->rx_coalesce_usecs_high = VAR_2->rx_usecs_high;
 VAR_1->rate_sample_interval = VAR_2->sample_interval;
 VAR_1->use_adaptive_rx_coalesce = VAR_2->adaptive_rx_coal;
 return 0;
}
