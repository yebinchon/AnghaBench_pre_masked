
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_adapter {int pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int regdump_len; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,int,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_6, struct ethtool_drvinfo *VAR_7)
{
 struct netxen_adapter *VAR_8 = FUNC_1(VAR_6);
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;

 FUNC_5(VAR_7->driver, VAR_5,
  sizeof(VAR_7->driver));
 FUNC_5(VAR_7->version, VAR_3,
  sizeof(VAR_7->version));
 VAR_9 = FUNC_0(VAR_8, VAR_0);
 VAR_10 = FUNC_0(VAR_8, VAR_1);
 VAR_11 = FUNC_0(VAR_8, VAR_2);
 FUNC_4(VAR_7->fw_version, sizeof(VAR_7->fw_version),
  "%d.%d.%d", VAR_9, VAR_10, VAR_11);

 FUNC_5(VAR_7->bus_info, FUNC_3(VAR_8->pdev),
  sizeof(VAR_7->bus_info));
 VAR_7->regdump_len = VAR_4;
 VAR_7->eedump_len = FUNC_2(VAR_6);
}
