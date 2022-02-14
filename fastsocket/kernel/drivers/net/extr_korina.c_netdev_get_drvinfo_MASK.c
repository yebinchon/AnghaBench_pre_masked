
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct korina_private {TYPE_1__* dev; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct korina_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
   struct ethtool_drvinfo *VAR_3)
{
 struct korina_private *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->driver, VAR_0);
 FUNC_1(VAR_3->version, VAR_1);
 FUNC_1(VAR_3->bus_info, VAR_4->dev->name);
}
