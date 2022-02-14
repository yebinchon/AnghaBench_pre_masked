
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;
struct bmac_data {TYPE_2__* mdev; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ ofdev; } ;


 char* FUNC_0 (int *) ;
 struct bmac_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct ethtool_drvinfo *VAR_1)
{
 struct bmac_data *VAR_2 = FUNC_1(VAR_0);
 FUNC_2(VAR_1->driver, "bmac");
 FUNC_2(VAR_1->bus_info, FUNC_0(&VAR_2->mdev->ofdev.dev));
}
