
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int dev_addr; } ;
struct macvlan_dev {TYPE_1__* port; struct net_device* lowerdev; } ;
struct TYPE_2__ {scalar_t__ passthru; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct macvlan_dev*) ;
 struct macvlan_dev* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct macvlan_dev *VAR_2 = FUNC_5(VAR_1);
 struct net_device *VAR_3 = VAR_2->lowerdev;

 FUNC_0(VAR_3, VAR_1);
 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_3, -1);

 if (VAR_2->port->passthru) {
  FUNC_2(VAR_3, -1);
  goto hash_del;
 }

 FUNC_3(VAR_3, VAR_1->dev_addr);

hash_del:
 FUNC_4(VAR_2);
 return 0;
}
