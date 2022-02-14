
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {char* fw_version; scalar_t__ regdump_len; int bus_info; int version; int driver; } ;
struct au1000_private {int mac_id; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 struct au1000_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2, struct ethtool_drvinfo *VAR_3)
{
 struct au1000_private *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_3->driver, VAR_0);
 FUNC_2(VAR_3->version, VAR_1);
 VAR_3->fw_version[0] = '\0';
 FUNC_1(VAR_3->bus_info, "%s %d", VAR_0, VAR_4->mac_id);
 VAR_3->regdump_len = 0;
}
