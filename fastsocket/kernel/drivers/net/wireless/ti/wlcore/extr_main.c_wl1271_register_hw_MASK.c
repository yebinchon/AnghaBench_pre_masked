
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wl1271 {int mac80211_registered; int nvs_len; scalar_t__ fuse_oui_addr; scalar_t__ fuse_nic_addr; int hw; scalar_t__ nvs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_0)
{
 int VAR_1;
 u32 VAR_2 = 0, VAR_3 = 0;

 if (VAR_0->mac80211_registered)
  return 0;

 if (VAR_0->nvs_len >= 12) {




  u8 *VAR_4 = (u8 *)VAR_0->nvs;

  VAR_2 =
   (VAR_4[11] << 16) + (VAR_4[10] << 8) + VAR_4[6];
  VAR_3 =
   (VAR_4[5] << 16) + (VAR_4[4] << 8) + VAR_4[3];
 }


 if (VAR_2 == 0 && VAR_3 == 0) {
  VAR_2 = VAR_0->fuse_oui_addr;

  VAR_3 = VAR_0->fuse_nic_addr + 1;
 }

 FUNC_4(VAR_0, VAR_2, VAR_3);

 VAR_1 = FUNC_0(VAR_0->hw);
 if (VAR_1 < 0) {
  FUNC_2("unable to register mac80211 hw: %d", VAR_1);
  goto out;
 }

 VAR_0->mac80211_registered = 1;

 FUNC_1(VAR_0);

 FUNC_3("loaded");

out:
 return VAR_1;
}
