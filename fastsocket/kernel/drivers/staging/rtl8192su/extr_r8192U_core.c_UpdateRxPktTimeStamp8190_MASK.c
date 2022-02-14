
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int LastRxDescTSFHigh; int LastRxDescTSFLow; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int * mac_time; int bFirstMPDU; scalar_t__ bIsAMPDU; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

void FUNC_1 (struct net_device *VAR_0, struct ieee80211_rx_stats *VAR_1)
{
 struct r8192_priv *VAR_2 = (struct r8192_priv *)FUNC_0(VAR_0);

 if(VAR_1->bIsAMPDU && !VAR_1->bFirstMPDU) {
  VAR_1->mac_time[0] = VAR_2->LastRxDescTSFLow;
  VAR_1->mac_time[1] = VAR_2->LastRxDescTSFHigh;
 } else {
  VAR_2->LastRxDescTSFLow = VAR_1->mac_time[0];
  VAR_2->LastRxDescTSFHigh = VAR_1->mac_time[1];
 }
}
