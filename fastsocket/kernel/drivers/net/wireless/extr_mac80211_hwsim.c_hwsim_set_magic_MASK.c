
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct hwsim_vif_priv {int magic; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ieee80211_vif *VAR_1)
{
 struct hwsim_vif_priv *VAR_2 = (void *)VAR_1->drv_priv;
 VAR_2->magic = VAR_0;
}
