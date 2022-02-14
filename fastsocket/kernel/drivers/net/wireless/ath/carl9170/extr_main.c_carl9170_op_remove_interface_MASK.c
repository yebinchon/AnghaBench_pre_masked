
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct carl9170_vif_info {int active; unsigned int id; int enable_beacon; int * beacon; int list; } ;
struct TYPE_4__ {int off_override; } ;
struct ar9170 {int vifs; int mutex; TYPE_2__ ps; int vif_bitmap; int beacon_lock; TYPE_1__* vif_priv; } ;
struct TYPE_3__ {int vif; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned int,int ) ;
 int FUNC_4 (struct ar9170*,unsigned int) ;
 struct ieee80211_vif* FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*,struct ieee80211_vif*) ;
 int FUNC_7 (struct ar9170*,unsigned int,int *) ;
 int FUNC_8 (struct ar9170*) ;
 int FUNC_9 (struct ar9170*) ;
 int FUNC_10 (struct ar9170*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

__attribute__((used)) static void FUNC_20(struct ieee80211_hw *VAR_1,
      struct ieee80211_vif *VAR_2)
{
 struct carl9170_vif_info *VAR_3 = (void *) VAR_2->drv_priv;
 struct ieee80211_vif *VAR_4;
 struct ar9170 *VAR_5 = VAR_1->priv;
 unsigned int VAR_6;

 FUNC_13(&VAR_5->mutex);

 if (FUNC_2(!VAR_3->active))
  goto unlock;

 VAR_5->vifs--;

 FUNC_15();
 VAR_4 = FUNC_5(VAR_5);

 VAR_6 = VAR_3->id;

 VAR_3->active = 0;
 FUNC_1(VAR_3->enable_beacon);
 VAR_3->enable_beacon = 0;
 FUNC_12(&VAR_3->list);
 FUNC_0(VAR_5->vif_priv[VAR_6].vif, ((void*)0));

 if (VAR_2 == VAR_4) {
  FUNC_16();

  if (VAR_5->vifs) {
   FUNC_1(FUNC_6(VAR_5,
     FUNC_5(VAR_5)));
  } else {
   FUNC_9(VAR_5);
  }
 } else {
  FUNC_16();

  FUNC_1(FUNC_7(VAR_5, VAR_6, ((void*)0)));
 }

 FUNC_10(VAR_5, 0);
 FUNC_4(VAR_5, VAR_6);

 FUNC_17(&VAR_5->beacon_lock);
 FUNC_11(VAR_3->beacon);
 VAR_3->beacon = ((void*)0);
 FUNC_18(&VAR_5->beacon_lock);

 FUNC_3(&VAR_5->vif_bitmap, VAR_6, 0);

 FUNC_8(VAR_5);

 if (VAR_5->vifs == 1)
  VAR_5->ps.off_override &= ~VAR_0;

unlock:
 FUNC_14(&VAR_5->mutex);

 FUNC_19();
}
