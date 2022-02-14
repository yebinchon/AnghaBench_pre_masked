
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ rx_frames; scalar_t__ rx_usecs; scalar_t__ tx_usecs; scalar_t__ tx_frames; int adaptive_rx_coal; int sample_interval; int rx_usecs_high; int pkt_rate_high; int rx_usecs_low; int pkt_rate_low; } ;
struct ethtool_coalesce {scalar_t__ rx_max_coalesced_frames; scalar_t__ rx_coalesce_usecs; scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; int use_adaptive_rx_coalesce; int rate_sample_interval; int rx_coalesce_usecs_high; int pkt_rate_high; int rx_coalesce_usecs_low; int pkt_rate_low; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
         struct ethtool_coalesce *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_1(VAR_3);

 VAR_5->rx_frames = (VAR_4->rx_max_coalesced_frames ==
      VAR_0) ?
    VAR_1 :
    VAR_4->rx_max_coalesced_frames;
 VAR_5->rx_usecs = (VAR_4->rx_coalesce_usecs ==
     VAR_0) ?
    VAR_2 :
    VAR_4->rx_coalesce_usecs;


 if (VAR_4->tx_coalesce_usecs != VAR_5->tx_usecs ||
     VAR_4->tx_max_coalesced_frames != VAR_5->tx_frames) {
  VAR_5->tx_usecs = VAR_4->tx_coalesce_usecs;
  VAR_5->tx_frames = VAR_4->tx_max_coalesced_frames;
 }


 VAR_5->pkt_rate_low = VAR_4->pkt_rate_low;
 VAR_5->rx_usecs_low = VAR_4->rx_coalesce_usecs_low;
 VAR_5->pkt_rate_high = VAR_4->pkt_rate_high;
 VAR_5->rx_usecs_high = VAR_4->rx_coalesce_usecs_high;
 VAR_5->sample_interval = VAR_4->rate_sample_interval;
 VAR_5->adaptive_rx_coal = VAR_4->use_adaptive_rx_coalesce;

 return FUNC_0(VAR_5);
}
