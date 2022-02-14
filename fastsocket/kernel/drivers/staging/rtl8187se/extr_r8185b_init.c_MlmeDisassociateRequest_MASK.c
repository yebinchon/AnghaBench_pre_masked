
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
struct TYPE_5__ {TYPE_1__ current_network; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (TYPE_2__*,int*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int*,int*,int) ;
 int VAR_0 ;

void
FUNC_5(
 struct net_device *VAR_1,
 u8* VAR_2,
 u8 VAR_3
 )
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_3(VAR_1);
 u8 VAR_5;

 FUNC_1(VAR_4->ieee80211, VAR_2, VAR_3 );

 if( FUNC_4(VAR_4->ieee80211->current_network.bssid, VAR_2, 6 ) == 0 ){


  FUNC_0(VAR_1, VAR_0);



  for(VAR_5=0;VAR_5<6;VAR_5++) VAR_4->ieee80211->current_network.bssid[VAR_5] = 0x22;



  FUNC_2(VAR_4->ieee80211);


 }

}
