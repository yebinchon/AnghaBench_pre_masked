
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int n_stats; int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
     struct ethtool_drvinfo *VAR_4)
{
 FUNC_0(VAR_4->driver, VAR_1, 32);
 FUNC_0(VAR_4->version, VAR_2, 32);
 FUNC_0(VAR_4->fw_version, "N/A", 32);
 FUNC_0(VAR_4->bus_info, "bcm63xx", 32);
 VAR_4->n_stats = VAR_0;
}
