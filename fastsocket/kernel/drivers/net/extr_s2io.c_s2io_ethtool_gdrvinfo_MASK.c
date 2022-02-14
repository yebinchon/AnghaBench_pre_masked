
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (int ) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
      struct ethtool_drvinfo *VAR_5)
{
 struct s2io_nic *VAR_6 = FUNC_0(VAR_4);

 FUNC_2(VAR_5->driver, VAR_2, sizeof(VAR_5->driver));
 FUNC_2(VAR_5->version, VAR_3, sizeof(VAR_5->version));
 FUNC_2(VAR_5->fw_version, "", sizeof(VAR_5->fw_version));
 FUNC_2(VAR_5->bus_info, FUNC_1(VAR_6->pdev), sizeof(VAR_5->bus_info));
 VAR_5->regdump_len = VAR_1;
 VAR_5->eedump_len = VAR_0;
}
