
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vers ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ipw_priv {int pci_dev; } ;
struct ethtool_drvinfo {int eedump_len; int bus_info; int fw_version; int version; int driver; } ;
typedef int date ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipw_priv*,int ,char*,int*) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5,
        struct ethtool_drvinfo *VAR_6)
{
 struct ipw_priv *VAR_7 = FUNC_1(VAR_5);
 char VAR_8[64];
 char VAR_9[32];
 u32 VAR_10;

 FUNC_4(VAR_6->driver, VAR_0, sizeof(VAR_6->driver));
 FUNC_4(VAR_6->version, VAR_1, sizeof(VAR_6->version));

 VAR_10 = sizeof(VAR_8);
 FUNC_0(VAR_7, VAR_4, VAR_8, &VAR_10);
 VAR_10 = sizeof(VAR_9);
 FUNC_0(VAR_7, VAR_3, VAR_9, &VAR_10);

 FUNC_3(VAR_6->fw_version, sizeof(VAR_6->fw_version), "%s (%s)",
   VAR_8, VAR_9);
 FUNC_4(VAR_6->bus_info, FUNC_2(VAR_7->pci_dev),
  sizeof(VAR_6->bus_info));
 VAR_6->eedump_len = VAR_2;
}
