
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct ethtool_drvinfo {int fw_version; int driver; } ;
struct TYPE_2__ {int sta_fw_ver; } ;
typedef TYPE_1__ local_info_t ;


 struct hostap_interface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,char*,int,int,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
          struct ethtool_drvinfo *VAR_1)
{
 struct hostap_interface *VAR_2;
 local_info_t *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = VAR_2->local;

 FUNC_2(VAR_1->driver, "hostap", sizeof(VAR_1->driver));
 FUNC_1(VAR_1->fw_version, sizeof(VAR_1->fw_version),
   "%d.%d.%d", (VAR_3->sta_fw_ver >> 16) & 0xff,
   (VAR_3->sta_fw_ver >> 8) & 0xff,
   VAR_3->sta_fw_ver & 0xff);
}
