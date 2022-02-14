
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct rndis_wlan_private {scalar_t__ last_cqm_event_rssi; int cqm_rssi_hyst; int cqm_rssi_thold; } ;
struct net_device {int dummy; } ;
typedef int s32 ;


 struct rndis_wlan_private* FUNC_0 (struct wiphy*) ;

__attribute__((used)) static int FUNC_1(struct wiphy *VAR_0,
     struct net_device *VAR_1,
     s32 VAR_2, u32 VAR_3)
{
 struct rndis_wlan_private *VAR_4 = FUNC_0(VAR_0);

 VAR_4->cqm_rssi_thold = VAR_2;
 VAR_4->cqm_rssi_hyst = VAR_3;
 VAR_4->last_cqm_event_rssi = 0;

 return 0;
}
