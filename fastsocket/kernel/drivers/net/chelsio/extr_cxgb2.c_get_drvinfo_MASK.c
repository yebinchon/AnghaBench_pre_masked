
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct adapter* ml_priv; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct adapter {int pdev; } ;


 char* DRV_NAME ;
 char* DRV_VERSION ;
 char* pci_name (int ) ;
 int strcpy (int ,char*) ;

__attribute__((used)) static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
{
 struct adapter *adapter = dev->ml_priv;

 strcpy(info->driver, DRV_NAME);
 strcpy(info->version, DRV_VERSION);
 strcpy(info->fw_version, "N/A");
 strcpy(info->bus_info, pci_name(adapter->pdev));
}
