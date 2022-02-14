
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_chanctx_conf {scalar_t__ drv_priv; } ;
struct hwsim_chanctx_priv {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct ieee80211_chanctx_conf *VAR_1)
{
 struct hwsim_chanctx_priv *VAR_2 = (void *)VAR_1->drv_priv;
 FUNC_0(VAR_2->magic != VAR_0);
}
