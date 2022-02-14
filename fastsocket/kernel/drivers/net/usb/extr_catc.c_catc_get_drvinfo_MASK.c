
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct catc {int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct catc* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
        struct ethtool_drvinfo *VAR_4)
{
 struct catc *VAR_5 = FUNC_0(VAR_3);
 FUNC_1(VAR_4->driver, VAR_2, VAR_1);
 FUNC_1(VAR_4->version, VAR_0, VAR_1);
 FUNC_2 (VAR_5->usbdev, VAR_4->bus_info, sizeof VAR_4->bus_info);
}
