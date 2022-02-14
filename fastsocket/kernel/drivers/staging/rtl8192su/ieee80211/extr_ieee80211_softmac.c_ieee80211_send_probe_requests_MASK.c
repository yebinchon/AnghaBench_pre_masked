
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int softmac_features; scalar_t__ active_scan; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_device*) ;

void FUNC_1(struct ieee80211_device *VAR_1)
{
 if (VAR_1->active_scan && (VAR_1->softmac_features & VAR_0)){
  FUNC_0(VAR_1);
  FUNC_0(VAR_1);
 }
}
