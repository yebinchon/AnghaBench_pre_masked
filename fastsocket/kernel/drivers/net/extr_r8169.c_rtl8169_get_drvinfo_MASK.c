
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_fw {int version; } ;
struct rtl8169_private {int pci_dev; struct rtl_fw* rtl_fw; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int fw_version; int bus_info; int version; int driver; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl_fw*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rtl8169_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
    struct ethtool_drvinfo *VAR_3)
{
 struct rtl8169_private *VAR_4 = FUNC_2(VAR_2);
 struct rtl_fw *VAR_5 = VAR_4->rtl_fw;

 FUNC_4(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_4(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_4(VAR_3->bus_info, FUNC_3(VAR_4->pci_dev), sizeof(VAR_3->bus_info));
 FUNC_0(sizeof(VAR_3->fw_version) < sizeof(VAR_5->version));
 if (!FUNC_1(VAR_5))
  FUNC_4(VAR_3->fw_version, VAR_5->version,
   sizeof(VAR_3->fw_version));
}
