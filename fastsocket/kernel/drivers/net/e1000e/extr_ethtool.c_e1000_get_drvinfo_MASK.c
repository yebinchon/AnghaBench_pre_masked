
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; int bus_info; int fw_version; int version; int driver; } ;
struct e1000_adapter {int eeprom_vers; int pdev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,int,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2,
         struct ethtool_drvinfo *VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_2(VAR_2);

 FUNC_5(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_5(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));




 FUNC_4(VAR_3->fw_version, sizeof(VAR_3->fw_version),
  "%d.%d-%d",
  (VAR_4->eeprom_vers & 0xF000) >> 12,
  (VAR_4->eeprom_vers & 0x0FF0) >> 4,
  (VAR_4->eeprom_vers & 0x000F));

 FUNC_5(VAR_3->bus_info, FUNC_3(VAR_4->pdev),
  sizeof(VAR_3->bus_info));
 VAR_3->regdump_len = FUNC_1(VAR_2);
 VAR_3->eedump_len = FUNC_0(VAR_2);
}
