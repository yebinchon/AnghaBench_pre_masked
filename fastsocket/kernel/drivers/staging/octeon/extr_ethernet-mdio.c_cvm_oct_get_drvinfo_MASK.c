
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
    struct ethtool_drvinfo *VAR_2)
{
 FUNC_0(VAR_2->driver, "cavium-ethernet");
 FUNC_0(VAR_2->version, VAR_0);
 FUNC_0(VAR_2->bus_info, "Builtin");
}
