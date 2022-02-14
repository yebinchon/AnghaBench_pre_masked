
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct brcms_info* priv; } ;
struct brcms_info {int lock; TYPE_2__* wlc; } ;
struct TYPE_4__ {TYPE_1__* hw; } ;
struct TYPE_3__ {int d11core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_info*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_0)
{
 struct brcms_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_3(VAR_0);

 if (VAR_1->wlc == ((void*)0))
  return;

 FUNC_4(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_1->wlc->hw->d11core);
 FUNC_5(&VAR_1->lock);
 if (!VAR_2) {
  FUNC_2(VAR_1->wlc->hw->d11core,
     "wl: brcms_ops_stop: chipmatch failed\n");
  return;
 }


 FUNC_4(&VAR_1->lock);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_1->lock);
}
