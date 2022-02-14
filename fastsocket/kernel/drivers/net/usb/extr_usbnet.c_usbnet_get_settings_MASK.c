
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdio_read; } ;
struct usbnet {TYPE_1__ mii; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct ethtool_cmd*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;

int FUNC_2 (struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3->mii.mdio_read)
  return -VAR_0;

 return FUNC_0(&VAR_3->mii, VAR_2);
}
