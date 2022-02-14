
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {int device_flags; int txic; int rxic; int * phydev; } ;
struct ethtool_coalesce {unsigned long rx_max_coalesced_frames; unsigned long tx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; void* tx_coalesce_usecs; void* rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 void* FUNC_2 (struct gfar_private*,unsigned long) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ethtool_coalesce *VAR_4)
{
 struct gfar_private *VAR_5 = FUNC_3(VAR_3);
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 if (!(VAR_5->device_flags & VAR_2))
  return -VAR_1;

 if (((void*)0) == VAR_5->phydev)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5->rxic);
 VAR_7 = FUNC_0(VAR_5->rxic);
 VAR_8 = FUNC_1(VAR_5->txic);
 VAR_9 = FUNC_0(VAR_5->txic);
 VAR_4->rx_coalesce_usecs = FUNC_2(VAR_5, VAR_6);
 VAR_4->rx_max_coalesced_frames = VAR_7;

 VAR_4->tx_coalesce_usecs = FUNC_2(VAR_5, VAR_8);
 VAR_4->tx_max_coalesced_frames = VAR_9;

 VAR_4->use_adaptive_rx_coalesce = 0;
 VAR_4->use_adaptive_tx_coalesce = 0;

 VAR_4->pkt_rate_low = 0;
 VAR_4->rx_coalesce_usecs_low = 0;
 VAR_4->rx_max_coalesced_frames_low = 0;
 VAR_4->tx_coalesce_usecs_low = 0;
 VAR_4->tx_max_coalesced_frames_low = 0;
 VAR_4->pkt_rate_high = 0;
 VAR_4->rx_coalesce_usecs_high = 0;
 VAR_4->rx_max_coalesced_frames_high = 0;
 VAR_4->tx_coalesce_usecs_high = 0;
 VAR_4->tx_max_coalesced_frames_high = 0;




 VAR_4->rate_sample_interval = 0;

 return 0;
}
