
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int dev_addr; } ;
struct macvlan_dev {TYPE_1__* port; struct net_device* lowerdev; } ;
struct TYPE_2__ {scalar_t__ passthru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct macvlan_dev*) ;
 struct macvlan_dev* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct macvlan_dev *VAR_3 = FUNC_6(VAR_2);
 struct net_device *VAR_4 = VAR_3->lowerdev;
 int VAR_5;

 if (VAR_3->port->passthru) {
  FUNC_1(VAR_4, 1);
  goto hash_add;
 }

 VAR_5 = -VAR_0;
 if (FUNC_4(VAR_3->port, VAR_2->dev_addr))
  goto out;

 VAR_5 = FUNC_2(VAR_4, VAR_2->dev_addr);
 if (VAR_5 < 0)
  goto out;
 if (VAR_2->flags & VAR_1) {
  VAR_5 = FUNC_0(VAR_4, 1);
  if (VAR_5 < 0)
   goto del_unicast;
 }

hash_add:
 FUNC_5(VAR_3);
 return 0;

del_unicast:
 FUNC_3(VAR_4, VAR_2->dev_addr);
out:
 return VAR_5;
}
