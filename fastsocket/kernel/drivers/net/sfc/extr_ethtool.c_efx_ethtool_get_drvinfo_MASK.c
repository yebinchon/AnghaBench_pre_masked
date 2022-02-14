
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct efx_nic {int pci_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,int ,int) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3,
        struct ethtool_drvinfo *VAR_4)
{
 struct efx_nic *VAR_5 = FUNC_2(VAR_3);

 FUNC_4(VAR_4->driver, VAR_2, sizeof(VAR_4->driver));
 FUNC_4(VAR_4->version, VAR_0, sizeof(VAR_4->version));
 if (FUNC_1(VAR_5) >= VAR_1)
  FUNC_0(VAR_5, VAR_4->fw_version,
         sizeof(VAR_4->fw_version));
 FUNC_4(VAR_4->bus_info, FUNC_3(VAR_5->pci_dev), sizeof(VAR_4->bus_info));
}
