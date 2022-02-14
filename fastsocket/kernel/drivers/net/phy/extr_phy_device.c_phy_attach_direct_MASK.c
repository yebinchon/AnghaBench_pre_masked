
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct device {TYPE_1__* driver; } ;
struct phy_device {TYPE_2__* drv; int interface; int dev_flags; struct net_device* attached_dev; struct device dev; } ;
struct net_device {int dev; } ;
typedef int phy_interface_t ;
struct TYPE_4__ {int (* probe ) (struct device*) ;} ;
struct TYPE_6__ {TYPE_1__ driver; } ;
struct TYPE_5__ {int (* config_init ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct device*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct phy_device*) ;

int FUNC_5(struct net_device *VAR_2, struct phy_device *VAR_3,
        u32 VAR_4, phy_interface_t VAR_5)
{
 struct device *VAR_6 = &VAR_3->dev;



 if (((void*)0) == VAR_6->driver) {
  int VAR_7;
  VAR_6->driver = &VAR_1.driver;

  VAR_7 = VAR_6->driver->probe(VAR_6);
  if (VAR_7 >= 0)
   VAR_7 = FUNC_1(VAR_6);

  if (VAR_7)
   return VAR_7;
 }

 if (VAR_3->attached_dev) {
  FUNC_0(&VAR_2->dev, "PHY already attached\n");
  return -VAR_0;
 }

 VAR_3->attached_dev = VAR_2;

 VAR_3->dev_flags = VAR_4;

 VAR_3->interface = VAR_5;




 if (VAR_3->drv->config_init) {
  int VAR_8;

  VAR_8 = FUNC_2(VAR_3);

  if (VAR_8 < 0)
   return VAR_8;

  VAR_8 = VAR_3->drv->config_init(VAR_3);

  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
