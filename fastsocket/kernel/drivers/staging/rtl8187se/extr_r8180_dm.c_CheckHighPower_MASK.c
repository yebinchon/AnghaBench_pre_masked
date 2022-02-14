
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int bRegHighPowerMechanism; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_device {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;

bool FUNC_1(struct net_device *VAR_1)
{
 struct r8180_priv *VAR_2 = FUNC_0(VAR_1);
 struct ieee80211_device *VAR_3 = VAR_2->ieee80211;

 if(!VAR_2->bRegHighPowerMechanism)
 {
  return 0;
 }

 if(VAR_3->state == VAR_0)
 {
  return 0;
 }

 return 1;
}
