
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int update_beacon_wq; int priv_wq; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct ieee80211_beacon {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct r8192_priv*,int,struct ieee80211_network*) ;

__attribute__((used)) static int FUNC_3(struct net_device * VAR_0,
                              struct ieee80211_beacon * VAR_1,
                              struct ieee80211_network * VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_3,1,VAR_2);

 FUNC_1(VAR_3->priv_wq, &VAR_3->update_beacon_wq, 0);
 return 0;

}
