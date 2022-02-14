
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_enet_priv {int rx_lock; } ;


 int FUNC_0 (struct net_device*) ;
 struct bcm_enet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct net_device *VAR_1;
 struct bcm_enet_priv *VAR_2;

 VAR_1 = (struct net_device *)VAR_0;
 VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->rx_lock);
 FUNC_0((struct net_device *)VAR_0);
 FUNC_3(&VAR_2->rx_lock);
}
