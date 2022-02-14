
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int softmac_features; int dev; int (* stop_send_beacons ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_device *VAR_1)
{
 if(VAR_1->stop_send_beacons)
  VAR_1->stop_send_beacons(VAR_1->dev);
 if (VAR_1->softmac_features & VAR_0)
  FUNC_0(VAR_1);
}
