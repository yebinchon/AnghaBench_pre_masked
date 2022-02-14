
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct nes_vnic {TYPE_1__* nesdev; } ;
struct nes_adapter {int firmware_version; } ;
struct ethtool_drvinfo {scalar_t__ regdump_len; scalar_t__ eedump_len; scalar_t__ testinfo_len; int n_stats; int version; int fw_version; int bus_info; int driver; } ;
struct TYPE_2__ {int pcidev; struct nes_adapter* nesadapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct nes_vnic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
  struct ethtool_drvinfo *VAR_3)
{
 struct nes_vnic *VAR_4 = FUNC_1(VAR_2);
 struct nes_adapter *VAR_5 = VAR_4->nesdev->nesadapter;

 FUNC_4(VAR_3->driver, VAR_0);
 FUNC_4(VAR_3->bus_info, FUNC_2(VAR_4->nesdev->pcidev));
 FUNC_3(VAR_3->fw_version, "%u.%u", VAR_5->firmware_version>>16,
    VAR_5->firmware_version & 0x000000ff);
 FUNC_4(VAR_3->version, VAR_1);
 VAR_3->n_stats = FUNC_0(VAR_2);
 VAR_3->testinfo_len = 0;
 VAR_3->eedump_len = 0;
 VAR_3->regdump_len = 0;
}
