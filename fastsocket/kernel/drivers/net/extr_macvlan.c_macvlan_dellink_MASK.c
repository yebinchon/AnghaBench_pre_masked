
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct macvlan_port {int dev; int vlans; } ;
struct macvlan_dev {int list; struct macvlan_port* port; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct macvlan_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct macvlan_dev *VAR_1 = FUNC_3(VAR_0);
 struct macvlan_port *VAR_2 = VAR_1->port;

 FUNC_0(&VAR_1->list);
 FUNC_4(VAR_0);

 if (FUNC_1(&VAR_2->vlans))
  FUNC_2(VAR_2->dev);
}
