
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgb_adapter {int pdev; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; int n_stats; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct ixgb_adapter* FUNC_2 (struct net_device*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_3,
     struct ethtool_drvinfo *VAR_4)
{
 struct ixgb_adapter *VAR_5 = FUNC_2(VAR_3);

 FUNC_4(VAR_4->driver, VAR_1, 32);
 FUNC_4(VAR_4->version, VAR_2, 32);
 FUNC_4(VAR_4->fw_version, "N/A", 32);
 FUNC_4(VAR_4->bus_info, FUNC_3(VAR_5->pdev), 32);
 VAR_4->n_stats = VAR_0;
 VAR_4->regdump_len = FUNC_1(VAR_3);
 VAR_4->eedump_len = FUNC_0(VAR_3);
}
