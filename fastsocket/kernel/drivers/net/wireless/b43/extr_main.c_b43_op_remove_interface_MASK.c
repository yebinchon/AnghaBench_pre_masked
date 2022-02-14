
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int operating; int mutex; int mac_addr; struct ieee80211_vif* vif; struct b43_wldev* current_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wl*,char*,int ) ;
 struct b43_wl* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2)
{
 struct b43_wl *VAR_3 = FUNC_4(VAR_1);
 struct b43_wldev *VAR_4 = VAR_3->current_dev;

 FUNC_3(VAR_3, "Removing Interface type %d\n", VAR_2->type);

 FUNC_6(&VAR_3->mutex);

 FUNC_0(!VAR_3->operating);
 FUNC_0(VAR_3->vif != VAR_2);
 VAR_3->vif = ((void*)0);

 VAR_3->operating = 0;

 FUNC_1(VAR_4);
 FUNC_5(VAR_3->mac_addr, 0, VAR_0);
 FUNC_2(VAR_4);

 FUNC_7(&VAR_3->mutex);
}
