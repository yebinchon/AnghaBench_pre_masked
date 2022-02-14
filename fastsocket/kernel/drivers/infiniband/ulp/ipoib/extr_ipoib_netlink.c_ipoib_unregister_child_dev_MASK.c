
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int vlan_mutex; int list; struct net_device* parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1, *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = FUNC_3(VAR_1->parent);

 FUNC_1(&VAR_2->vlan_mutex);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_2->vlan_mutex);
}
