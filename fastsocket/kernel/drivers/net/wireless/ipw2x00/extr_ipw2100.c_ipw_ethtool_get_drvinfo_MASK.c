
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucode_ver ;
struct net_device {int dummy; } ;
struct ipw2100_priv {int eeprom_version; int pci_dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
typedef int fw_ver ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw2100_priv*,char*,int) ;
 int FUNC_1 (struct ipw2100_priv*,char*,int) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,char*,int,char*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2,
        struct ethtool_drvinfo *VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_2(VAR_2);
 char VAR_5[64], VAR_6[64];

 FUNC_5(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_5(VAR_3->version, VAR_1, sizeof(VAR_3->version));

 FUNC_0(VAR_4, VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_4, VAR_6, sizeof(VAR_6));

 FUNC_4(VAR_3->fw_version, sizeof(VAR_3->fw_version), "%s:%d:%s",
   VAR_5, VAR_4->eeprom_version, VAR_6);

 FUNC_5(VAR_3->bus_info, FUNC_3(VAR_4->pci_dev),
  sizeof(VAR_3->bus_info));
}
