
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct rndis_wlan_private {int cqm_rssi_thold; scalar_t__ infra_mode; int last_cqm_event_rssi; int cqm_rssi_hyst; } ;
typedef int s32 ;
typedef enum nl80211_cqm_rssi_threshold_event { ____Placeholder_nl80211_cqm_rssi_threshold_event } nl80211_cqm_rssi_threshold_event ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 struct rndis_wlan_private* FUNC_1 (struct usbnet*) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_4, s32 VAR_5)
{
 struct rndis_wlan_private *VAR_6 = FUNC_1(VAR_4);
 enum nl80211_cqm_rssi_threshold_event VAR_7;
 int VAR_8, VAR_9, VAR_10;

 if (VAR_6->cqm_rssi_thold >= 0 || VAR_5 >= 0)
  return;
 if (VAR_6->infra_mode != VAR_1)
  return;

 VAR_10 = VAR_6->last_cqm_event_rssi;
 VAR_8 = VAR_6->cqm_rssi_thold;
 VAR_9 = VAR_6->cqm_rssi_hyst;

 if (VAR_5 < VAR_8 && (VAR_10 == 0 || VAR_5 < VAR_10 - VAR_9))
  VAR_7 = VAR_3;
 else if (VAR_5 > VAR_8 && (VAR_10 == 0 || VAR_5 > VAR_10 + VAR_9))
  VAR_7 = VAR_2;
 else
  return;

 VAR_6->last_cqm_event_rssi = VAR_5;
 FUNC_0(VAR_4->net, VAR_7, VAR_0);
}
