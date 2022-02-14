
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skge_port {TYPE_1__* hw; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_2__ {int pdev; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 struct skge_port *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->driver, VAR_0);
 FUNC_2(VAR_3->version, VAR_1);
 FUNC_2(VAR_3->fw_version, "N/A");
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_4->hw->pdev));
}
