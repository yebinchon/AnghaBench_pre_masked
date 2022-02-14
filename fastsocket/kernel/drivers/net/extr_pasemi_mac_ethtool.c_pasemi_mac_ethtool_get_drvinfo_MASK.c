
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int FUNC_0 (struct ethtool_drvinfo*,int ,int) ;
 struct pasemi_mac* FUNC_1 (struct net_device*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0,
          struct ethtool_drvinfo *VAR_1)
{
 struct pasemi_mac *VAR_2;
 VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_1, 0, sizeof(struct ethtool_drvinfo));
 FUNC_4(VAR_1->driver, "pasemi_mac", 12);
 FUNC_3(VAR_1->version, "N/A");
 FUNC_3(VAR_1->fw_version, "N/A");
 FUNC_4(VAR_1->bus_info, FUNC_2(VAR_2->pdev), 32);
}
