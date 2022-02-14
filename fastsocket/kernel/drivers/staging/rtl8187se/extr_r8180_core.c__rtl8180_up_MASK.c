
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {int up; TYPE_1__* ieee80211; scalar_t__ bSwAntennaDiverity; scalar_t__ bInactivePs; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 struct r8180_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;

int FUNC_10(struct net_device *VAR_1)
{
 struct r8180_priv *VAR_2 = FUNC_3(VAR_1);

 VAR_2->up=1;

 FUNC_0("Bringing up iface");
 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 FUNC_7(VAR_1);
 if(VAR_2->bInactivePs){
  if(VAR_2->ieee80211->iw_mode == VAR_0)
   FUNC_1(VAR_1);
 }



 FUNC_9((unsigned long)VAR_1);




 FUNC_4(VAR_2->ieee80211);

 return 0;
}
