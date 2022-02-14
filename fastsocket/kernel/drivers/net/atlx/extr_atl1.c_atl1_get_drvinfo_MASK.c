
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int bus_info; int fw_version; int version; int driver; } ;
struct atl1_adapter {int pdev; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 struct atl1_adapter* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
 struct ethtool_drvinfo *VAR_4)
{
 struct atl1_adapter *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_2(VAR_4->version, VAR_2,
  sizeof(VAR_4->version));
 FUNC_2(VAR_4->fw_version, "N/A", sizeof(VAR_4->fw_version));
 FUNC_2(VAR_4->bus_info, FUNC_1(VAR_5->pdev),
  sizeof(VAR_4->bus_info));
 VAR_4->eedump_len = VAR_0;
}
