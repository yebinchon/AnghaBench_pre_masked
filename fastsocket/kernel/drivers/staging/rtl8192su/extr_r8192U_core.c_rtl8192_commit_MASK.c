
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {scalar_t__ up; int ieee80211; int watch_dog_timer; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct r8192_priv*) ;
 int FUNC_5 (struct net_device*) ;

void FUNC_6(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = 0;

 if (VAR_1->up == 0) return ;
 VAR_1->up = 0;

 FUNC_4(VAR_1);
 FUNC_1(&VAR_1->watch_dog_timer);


 FUNC_3(VAR_1->ieee80211);


 FUNC_5(VAR_0);
 VAR_2 = FUNC_0(VAR_0);

}
