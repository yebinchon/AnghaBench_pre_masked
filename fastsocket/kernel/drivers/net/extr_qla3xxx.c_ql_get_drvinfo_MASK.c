
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {scalar_t__ eedump_len; scalar_t__ regdump_len; int bus_info; int fw_version; int version; int driver; } ;


 struct ql3_adapter* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
      struct ethtool_drvinfo *VAR_3)
{
 struct ql3_adapter *VAR_4 = FUNC_0(VAR_2);
 FUNC_2(VAR_3->driver, VAR_0, 32);
 FUNC_2(VAR_3->version, VAR_1, 32);
 FUNC_2(VAR_3->fw_version, "N/A", 32);
 FUNC_2(VAR_3->bus_info, FUNC_1(VAR_4->pdev), 32);
 VAR_3->regdump_len = 0;
 VAR_3->eedump_len = 0;
}
