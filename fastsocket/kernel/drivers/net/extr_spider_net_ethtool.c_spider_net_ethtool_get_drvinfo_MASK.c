
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethtool_drvinfo*,int ,int) ;
 struct spider_net_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_2,
          struct ethtool_drvinfo *VAR_3)
{
 struct spider_net_card *VAR_4;
 VAR_4 = FUNC_1(VAR_2);


 FUNC_0(VAR_3, 0, sizeof(struct ethtool_drvinfo));
 FUNC_4(VAR_3->driver, VAR_1, 32);
 FUNC_4(VAR_3->version, VAR_0, 32);
 FUNC_3(VAR_3->fw_version, "no information");
 FUNC_4(VAR_3->bus_info, FUNC_2(VAR_4->pdev), 32);
}
