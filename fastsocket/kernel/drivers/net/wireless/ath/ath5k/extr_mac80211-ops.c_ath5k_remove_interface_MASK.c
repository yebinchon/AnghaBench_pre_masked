
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_vif {scalar_t__ opmode; TYPE_1__* bbuf; } ;
struct ath5k_hw {int lock; int num_mesh_vifs; int num_adhoc_vifs; int num_ap_vifs; struct ieee80211_vif** bslot; int bcbuf; int nvifs; } ;
struct TYPE_2__ {int list; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath5k_hw*,TYPE_1__*) ;
 int FUNC_1 (struct ath5k_hw*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_hw *VAR_4,
         struct ieee80211_vif *VAR_5)
{
 struct ath5k_hw *VAR_6 = VAR_4->priv;
 struct ath5k_vif *VAR_7 = (void *)VAR_5->drv_priv;
 unsigned int VAR_8;

 FUNC_3(&VAR_6->lock);
 VAR_6->nvifs--;

 if (VAR_7->bbuf) {
  FUNC_0(VAR_6, VAR_7->bbuf);
  FUNC_2(&VAR_7->bbuf->list, &VAR_6->bcbuf);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   if (VAR_6->bslot[VAR_8] == VAR_5) {
    VAR_6->bslot[VAR_8] = ((void*)0);
    break;
   }
  }
  VAR_7->bbuf = ((void*)0);
 }
 if (VAR_7->opmode == VAR_2)
  VAR_6->num_ap_vifs--;
 else if (VAR_7->opmode == VAR_1)
  VAR_6->num_adhoc_vifs--;
 else if (VAR_7->opmode == VAR_3)
  VAR_6->num_mesh_vifs--;

 FUNC_1(VAR_6, ((void*)0));
 FUNC_4(&VAR_6->lock);
}
