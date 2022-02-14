
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct ieee80211_rate {int hw_value; } ;
struct b43legacy_wldev {TYPE_1__* wl; } ;
struct b43legacy_plcp_hdr4 {scalar_t__ data; } ;
typedef int __le16 ;
struct TYPE_2__ {int vif; int hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43legacy_plcp_hdr4*,scalar_t__,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,struct ieee80211_rate*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct b43legacy_wldev *VAR_3,
         u16 VAR_4, u16 VAR_5,
         struct ieee80211_rate *VAR_6)
{
 struct b43legacy_plcp_hdr4 VAR_7;
 u32 VAR_8;
 __le16 VAR_9;

 VAR_7.data = 0;
 FUNC_0(&VAR_7, VAR_5 + VAR_1, VAR_6->hw_value);
 VAR_9 = FUNC_2(VAR_3->wl->hw,
            VAR_3->wl->vif,
            VAR_2,
            VAR_5,
            VAR_6);

 VAR_8 = FUNC_4(VAR_7.data);
 FUNC_1(VAR_3, VAR_0, VAR_4,
         VAR_8 & 0xFFFF);
 FUNC_1(VAR_3, VAR_0, VAR_4 + 2,
         VAR_8 >> 16);
 FUNC_1(VAR_3, VAR_0, VAR_4 + 6,
         FUNC_3(VAR_9));
}
