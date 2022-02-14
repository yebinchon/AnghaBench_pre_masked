
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ board_info_t ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
          struct ethtool_drvinfo *VAR_3)
{
 board_info_t *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->driver, VAR_0);
 FUNC_0(VAR_3->version, VAR_1);
 FUNC_0(VAR_3->bus_info, FUNC_2(VAR_4->dev)->name);
}
