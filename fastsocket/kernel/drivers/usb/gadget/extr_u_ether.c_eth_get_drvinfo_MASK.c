
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct eth_dev {TYPE_1__* gadget; } ;
struct TYPE_2__ {char* name; int dev; } ;


 char* VAR_0 ;
 char* FUNC_0 (int *) ;
 struct eth_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, struct ethtool_drvinfo *VAR_2)
{
 struct eth_dev *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_2->driver, "g_ether", sizeof VAR_2->driver);
 FUNC_2(VAR_2->version, VAR_0, sizeof VAR_2->version);
 FUNC_2(VAR_2->fw_version, VAR_3->gadget->name, sizeof VAR_2->fw_version);
 FUNC_2(VAR_2->bus_info, FUNC_0(&VAR_3->gadget->dev), sizeof VAR_2->bus_info);
}
