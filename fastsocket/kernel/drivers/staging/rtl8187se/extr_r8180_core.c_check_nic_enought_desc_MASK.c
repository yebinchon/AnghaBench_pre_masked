
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8180_priv {int txbuffsize; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_header_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ QoS_Enable; } ;
struct ieee80211_device {TYPE_2__ current_network; } ;
struct TYPE_3__ {int fts; } ;


 int FUNC_0 (struct net_device*,int) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 struct ieee80211_device* FUNC_2 (struct net_device*) ;

short FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct r8180_priv *VAR_2 = FUNC_1(VAR_0);
 struct ieee80211_device *VAR_3 = FUNC_2(VAR_0);
 int VAR_4, VAR_5;

 VAR_4 = VAR_2->ieee80211->fts + sizeof(struct ieee80211_header_data);

 if (VAR_3->current_network.QoS_Enable)
  VAR_4 += 2;

 VAR_5 = VAR_4 / (VAR_2->txbuffsize-4);

 if (VAR_4 % VAR_2->txbuffsize)
  VAR_5++;





 return (VAR_5+2 < FUNC_0(VAR_0,VAR_1));
}
