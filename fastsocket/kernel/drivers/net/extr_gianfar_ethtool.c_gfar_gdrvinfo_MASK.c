
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {scalar_t__ eedump_len; scalar_t__ regdump_len; int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct
       ethtool_drvinfo *VAR_4)
{
 FUNC_0(VAR_4->driver, VAR_0, VAR_1);
 FUNC_0(VAR_4->version, VAR_2, VAR_1);
 FUNC_0(VAR_4->fw_version, "N/A", VAR_1);
 FUNC_0(VAR_4->bus_info, "N/A", VAR_1);
 VAR_4->regdump_len = 0;
 VAR_4->eedump_len = 0;
}
