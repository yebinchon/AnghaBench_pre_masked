
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int bss_conf; int addr; int type; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int operating; int mutex; int mac_addr; int if_type; struct ieee80211_vif* vif; struct b43_wldev* current_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,int *,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wl*,char*,int ) ;
 struct b43_wl* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_7,
    struct ieee80211_vif *VAR_8)
{
 struct b43_wl *VAR_9 = FUNC_6(VAR_7);
 struct b43_wldev *VAR_10;
 int VAR_11 = -VAR_0;



 if (VAR_8->type != VAR_3 &&
     VAR_8->type != VAR_4 &&
     VAR_8->type != VAR_5 &&
     VAR_8->type != VAR_6 &&
     VAR_8->type != VAR_2)
  return -VAR_0;

 FUNC_8(&VAR_9->mutex);
 if (VAR_9->operating)
  goto out_mutex_unlock;

 FUNC_5(VAR_9, "Adding Interface type %d\n", VAR_8->type);

 VAR_10 = VAR_9->current_dev;
 VAR_9->operating = 1;
 VAR_9->vif = VAR_8;
 VAR_9->if_type = VAR_8->type;
 FUNC_7(VAR_9->mac_addr, VAR_8->addr, VAR_1);

 FUNC_0(VAR_10);
 FUNC_2(VAR_10);
 FUNC_3(VAR_10, 0);
 FUNC_4(VAR_10);

 VAR_11 = 0;
 out_mutex_unlock:
 FUNC_9(&VAR_9->mutex);

 if (VAR_11 == 0)
  FUNC_1(VAR_7, VAR_8, &VAR_8->bss_conf, ~0);

 return VAR_11;
}
