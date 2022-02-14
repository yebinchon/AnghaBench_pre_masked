
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int pci_dev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netdev_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct netdev_private *VAR_5 = FUNC_0(VAR_3);
 FUNC_2(VAR_4->driver, VAR_0, VAR_2);
 FUNC_2(VAR_4->version, VAR_1, VAR_2);
 FUNC_2(VAR_4->bus_info, FUNC_1(VAR_5->pci_dev), VAR_2);
}
