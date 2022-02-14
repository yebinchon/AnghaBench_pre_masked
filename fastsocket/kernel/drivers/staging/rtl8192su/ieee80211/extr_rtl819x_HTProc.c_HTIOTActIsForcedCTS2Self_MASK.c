
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_network {scalar_t__ marvell_cap_exist; } ;



u8 FUNC_0(struct ieee80211_network *VAR_0)
{
 u8 VAR_1 = 0;

 if(VAR_0->marvell_cap_exist)
 {
  VAR_1 = 1;
 }

 return VAR_1;
}
