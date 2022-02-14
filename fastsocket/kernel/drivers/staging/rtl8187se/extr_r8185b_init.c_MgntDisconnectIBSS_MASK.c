
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct r8180_priv {TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int* bssid; } ;
struct TYPE_5__ {int (* link_change ) (struct net_device*) ;int state; TYPE_1__ current_network; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_1 ;

void
FUNC_5(
 struct net_device *VAR_2
)
{
 struct r8180_priv *VAR_3 = (struct r8180_priv *)FUNC_1(VAR_2);
 u8 VAR_4;



 FUNC_0(VAR_2, VAR_1);


 for(VAR_4=0;VAR_4<6;VAR_4++) VAR_3->ieee80211->current_network.bssid[VAR_4] = 0x55;

 VAR_3->ieee80211->state = VAR_0;
 FUNC_2(VAR_3->ieee80211);

 VAR_3->ieee80211->link_change(VAR_2);
 FUNC_3(VAR_3->ieee80211);





}
