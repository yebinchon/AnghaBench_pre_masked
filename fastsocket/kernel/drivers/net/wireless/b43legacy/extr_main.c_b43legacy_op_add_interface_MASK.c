
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int addr; int type; } ;
struct ieee80211_hw {int dummy; } ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_wl {int operating; int mutex; int irq_lock; int mac_addr; int if_type; struct ieee80211_vif* vif; struct b43legacy_wldev* current_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wl*,char*,int ) ;
 struct b43legacy_wl* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_6,
          struct ieee80211_vif *VAR_7)
{
 struct b43legacy_wl *VAR_8 = FUNC_5(VAR_6);
 struct b43legacy_wldev *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = -VAR_0;



 if (VAR_7->type != VAR_3 &&
     VAR_7->type != VAR_4 &&
     VAR_7->type != VAR_5 &&
     VAR_7->type != VAR_2)
  return -VAR_0;

 FUNC_7(&VAR_8->mutex);
 if (VAR_8->operating)
  goto out_mutex_unlock;

 FUNC_4(VAR_8, "Adding Interface type %d\n", VAR_7->type);

 VAR_9 = VAR_8->current_dev;
 VAR_8->operating = 1;
 VAR_8->vif = VAR_7;
 VAR_8->if_type = VAR_7->type;
 FUNC_6(VAR_8->mac_addr, VAR_7->addr, VAR_1);

 FUNC_9(&VAR_8->irq_lock, VAR_10);
 FUNC_0(VAR_9);
 FUNC_1(VAR_9);
 FUNC_2(VAR_9, 0);
 FUNC_3(VAR_9);
 FUNC_10(&VAR_8->irq_lock, VAR_10);

 VAR_11 = 0;
 out_mutex_unlock:
 FUNC_8(&VAR_8->mutex);

 return VAR_11;
}
