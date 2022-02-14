
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int udev; TYPE_1__* driver_info; int driver_name; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_2__ {int description; } ;


 int VAR_0 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1, struct ethtool_drvinfo *VAR_2)
{
 struct usbnet *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->driver, VAR_3->driver_name, sizeof(VAR_2->driver));
 FUNC_1(VAR_2->version, VAR_0, sizeof(VAR_2->version));
 FUNC_1(VAR_2->fw_version, VAR_3->driver_info->description,
  sizeof(VAR_2->fw_version));
 FUNC_2(VAR_3->udev, VAR_2->bus_info, sizeof(VAR_2->bus_info));
}
