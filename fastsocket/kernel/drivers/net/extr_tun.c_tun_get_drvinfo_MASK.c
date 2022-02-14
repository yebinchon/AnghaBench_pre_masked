
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 char* VAR_0 ;
 char* VAR_1 ;


 int VAR_2 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct tun_struct *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->driver, VAR_0);
 FUNC_1(VAR_4->version, VAR_1);
 FUNC_1(VAR_4->fw_version, "N/A");

 switch (VAR_5->flags & VAR_2) {
 case 128:
  FUNC_1(VAR_4->bus_info, "tun");
  break;
 case 129:
  FUNC_1(VAR_4->bus_info, "tap");
  break;
 }
}
