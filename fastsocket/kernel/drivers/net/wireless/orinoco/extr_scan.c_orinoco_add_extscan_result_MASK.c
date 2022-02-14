
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct orinoco_private {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct agere_ext_scan_info {int* data; int bssid; int level; int beacon_interval; int capabilities; int timestamp; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int* FUNC_1 (int ,int*,size_t) ;
 struct cfg80211_bss* FUNC_2 (struct wiphy*,struct ieee80211_channel*,int ,int ,int ,int ,int const*,size_t,int ,int ) ;
 int FUNC_3 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_4 (int) ;
 struct ieee80211_channel* FUNC_5 (struct wiphy*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct wiphy* FUNC_8 (struct orinoco_private*) ;

void FUNC_9(struct orinoco_private *VAR_2,
    struct agere_ext_scan_info *VAR_3,
    size_t VAR_4)
{
 struct wiphy *VAR_5 = FUNC_8(VAR_2);
 struct ieee80211_channel *VAR_6;
 struct cfg80211_bss *VAR_7;
 const u8 *VAR_8;
 u64 VAR_9;
 s32 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = VAR_4 - sizeof(*VAR_3);
 VAR_8 = FUNC_1(VAR_1, VAR_3->data, VAR_13);
 VAR_14 = VAR_8 ? VAR_8[2] : 0;
 VAR_15 = FUNC_4(VAR_14);
 VAR_6 = FUNC_5(VAR_5, VAR_15);

 VAR_9 = FUNC_7(VAR_3->timestamp);
 VAR_11 = FUNC_6(VAR_3->capabilities);
 VAR_12 = FUNC_6(VAR_3->beacon_interval);
 VAR_8 = VAR_3->data;
 VAR_10 = FUNC_0(VAR_3->level);

 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_3->bssid, VAR_9,
       VAR_11, VAR_12, VAR_8, VAR_13,
       VAR_10, VAR_0);
 FUNC_3(VAR_5, VAR_7);
}
