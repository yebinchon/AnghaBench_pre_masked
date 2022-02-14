
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
     struct ethtool_drvinfo *VAR_3)
{
 FUNC_1(VAR_3->driver, VAR_0);
 FUNC_1(VAR_3->version, VAR_1);
 FUNC_1(VAR_3->fw_version, "N/A");
 FUNC_1(VAR_3->bus_info, FUNC_0(&VAR_2->dev));
}
