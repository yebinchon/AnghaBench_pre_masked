
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_devcmd_fw_info {int fw_version; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct enic {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enic*,struct vnic_devcmd_fw_info**) ;
 struct enic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
 struct ethtool_drvinfo *VAR_3)
{
 struct enic *VAR_4 = FUNC_1(VAR_2);
 struct vnic_devcmd_fw_info *VAR_5;

 FUNC_0(VAR_4, &VAR_5);

 FUNC_3(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_3(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_3(VAR_3->fw_version, VAR_5->fw_version,
  sizeof(VAR_3->fw_version));
 FUNC_3(VAR_3->bus_info, FUNC_2(VAR_4->pdev),
  sizeof(VAR_3->bus_info));
}
