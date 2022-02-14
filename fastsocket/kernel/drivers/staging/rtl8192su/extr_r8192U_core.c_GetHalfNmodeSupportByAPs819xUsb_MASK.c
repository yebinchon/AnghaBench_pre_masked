
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_device {int bHalfWirelessN24GMode; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

bool FUNC_1(struct net_device* VAR_0)
{
 bool VAR_1;
 struct r8192_priv* VAR_2 = FUNC_0(VAR_0);
 struct ieee80211_device* VAR_3 = VAR_2->ieee80211;


 return 0;

 if(VAR_3->bHalfWirelessN24GMode == 1)
  VAR_1 = 1;
 else
  VAR_1 = 0;

 return VAR_1;
}
