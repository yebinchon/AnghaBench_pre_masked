
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hso_net {TYPE_1__* parent; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct TYPE_2__ {int usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hso_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct hso_net *VAR_5 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->driver, VAR_2, VAR_1);
 FUNC_1(VAR_4->version, VAR_0, VAR_1);
 FUNC_2(VAR_5->parent->usb, VAR_4->bus_info, sizeof VAR_4->bus_info);
}
