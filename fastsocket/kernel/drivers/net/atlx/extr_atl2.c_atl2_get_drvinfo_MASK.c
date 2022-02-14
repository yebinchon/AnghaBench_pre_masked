
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; scalar_t__ testinfo_len; scalar_t__ n_stats; int bus_info; int fw_version; int version; int driver; } ;
struct atl2_adapter {int pdev; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct atl2_adapter* FUNC_2 (struct net_device*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
 struct ethtool_drvinfo *VAR_3)
{
 struct atl2_adapter *VAR_4 = FUNC_2(VAR_2);

 FUNC_4(VAR_3->driver, VAR_0, 32);
 FUNC_4(VAR_3->version, VAR_1, 32);
 FUNC_4(VAR_3->fw_version, "L2", 32);
 FUNC_4(VAR_3->bus_info, FUNC_3(VAR_4->pdev), 32);
 VAR_3->n_stats = 0;
 VAR_3->testinfo_len = 0;
 VAR_3->regdump_len = FUNC_1(VAR_2);
 VAR_3->eedump_len = FUNC_0(VAR_2);
}
