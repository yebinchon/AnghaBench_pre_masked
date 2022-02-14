
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int eeprom_verh; int eeprom_verl; int pdev; } ;
struct ethtool_drvinfo {int regdump_len; int testinfo_len; int n_stats; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4,
                              struct ethtool_drvinfo *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7;

 FUNC_4(VAR_5->driver, VAR_2, sizeof(VAR_5->driver));
 FUNC_4(VAR_5->version, VAR_3,
  sizeof(VAR_5->version));

 VAR_7 = (VAR_6->eeprom_verh << 16) |
   VAR_6->eeprom_verl;
 FUNC_3(VAR_5->fw_version, sizeof(VAR_5->fw_version), "0x%08x",
   VAR_7);

 FUNC_4(VAR_5->bus_info, FUNC_2(VAR_6->pdev),
  sizeof(VAR_5->bus_info));
 VAR_5->n_stats = VAR_0;
 VAR_5->testinfo_len = VAR_1;
 VAR_5->regdump_len = FUNC_0(VAR_4);
}
