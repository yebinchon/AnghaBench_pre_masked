
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wbsoft_priv {int sHwData; } ;
struct ieee80211_if_init_conf {TYPE_2__* vif; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;
struct TYPE_3__ {int beacon_int; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0,
    struct ieee80211_if_init_conf *VAR_1)
{
 struct wbsoft_priv *VAR_2 = VAR_0->priv;

 FUNC_0(&VAR_2->sHwData, VAR_1->vif->bss_conf.beacon_int);

 return 0;
}
