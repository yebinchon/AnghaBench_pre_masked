
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {char* fw_version; scalar_t__ regdump_len; int bus_info; int version; int driver; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
         struct ethtool_drvinfo *VAR_2)
{
 FUNC_1(VAR_2->driver, "cpmac");
 FUNC_1(VAR_2->version, VAR_0);
 VAR_2->fw_version[0] = '\0';
 FUNC_0(VAR_2->bus_info, "%s", "cpmac");
 VAR_2->regdump_len = 0;
}
