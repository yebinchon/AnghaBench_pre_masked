
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igb_adapter {int pdev; int fw_version; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; int testinfo_len; int n_stats; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct igb_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4,
       struct ethtool_drvinfo *VAR_5)
{
 struct igb_adapter *VAR_6 = FUNC_2(VAR_4);

 FUNC_4(VAR_5->driver, VAR_2, sizeof(VAR_5->driver));
 FUNC_4(VAR_5->version, VAR_3, sizeof(VAR_5->version));




 FUNC_4(VAR_5->fw_version, VAR_6->fw_version,
  sizeof(VAR_5->fw_version));
 FUNC_4(VAR_5->bus_info, FUNC_3(VAR_6->pdev),
  sizeof(VAR_5->bus_info));
 VAR_5->n_stats = VAR_0;
 VAR_5->testinfo_len = VAR_1;
 VAR_5->regdump_len = FUNC_1(VAR_4);
 VAR_5->eedump_len = FUNC_0(VAR_4);
}
