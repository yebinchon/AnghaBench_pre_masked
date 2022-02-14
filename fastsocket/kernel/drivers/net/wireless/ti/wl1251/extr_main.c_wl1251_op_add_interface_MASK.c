
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int mutex; int mac_addr; int hw; int bss_type; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int driver_flags; int type; int addr; } ;
struct ieee80211_hw {struct wl1251* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_8,
       struct ieee80211_vif *VAR_9)
{
 struct wl1251 *VAR_10 = VAR_8->priv;
 int VAR_11 = 0;

 VAR_9->driver_flags |= VAR_6 |
        VAR_7;

 FUNC_6(VAR_2, "mac80211 add interface type %d mac %pM",
       VAR_9->type, VAR_9->addr);

 FUNC_3(&VAR_10->mutex);
 if (VAR_10->vif) {
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_10->vif = VAR_9;

 switch (VAR_9->type) {
 case 128:
  VAR_10->bss_type = VAR_1;
  break;
 case 129:
  VAR_10->bss_type = VAR_0;
  break;
 default:
  VAR_11 = -VAR_4;
  goto out;
 }

 if (FUNC_1(VAR_10->mac_addr, VAR_9->addr, VAR_5)) {
  FUNC_2(VAR_10->mac_addr, VAR_9->addr, VAR_5);
  FUNC_0(VAR_10->hw, VAR_10->mac_addr);
  VAR_11 = FUNC_5(VAR_10);
  if (VAR_11 < 0)
   goto out;
 }

out:
 FUNC_4(&VAR_10->mutex);
 return VAR_11;
}
