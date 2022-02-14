
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int sniffer_enabled; int vif_list; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_hw *VAR_5,
          unsigned int VAR_6,
          unsigned int *VAR_7)
{
 struct mwl8k_priv *VAR_8 = VAR_5->priv;






 if (!FUNC_0(&VAR_8->vif_list)) {
  if (FUNC_2())
   FUNC_3(VAR_5->wiphy,
       "not enabling sniffer mode because STA interface is active\n");
  return 0;
 }

 if (!VAR_8->sniffer_enabled) {
  if (FUNC_1(VAR_5, 1))
   return 0;
  VAR_8->sniffer_enabled = 1;
 }

 *VAR_7 &= VAR_4 | VAR_0 |
   VAR_1 | VAR_2 |
   VAR_3;

 return 1;
}
