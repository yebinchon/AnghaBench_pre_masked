
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mdio_write; } ;
struct usbnet {TYPE_1__* driver_info; TYPE_2__ mii; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct TYPE_3__ {int (* link_reset ) (struct usbnet*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct ethtool_cmd*) ;
 struct usbnet* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct usbnet*) ;

int FUNC_3 (struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (!VAR_3->mii.mdio_write)
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_3->mii, VAR_2);


 if (VAR_3->driver_info->link_reset)
  VAR_3->driver_info->link_reset(VAR_3);

 return VAR_4;

}
