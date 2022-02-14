
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_driver {int suspend; } ;
struct TYPE_3__ {struct device_driver* driver; } ;
struct phy_device {struct net_device* attached_dev; TYPE_1__ dev; } ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct device_driver {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 struct phy_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static bool FUNC_2(struct phy_device *VAR_0)
{
 struct device_driver *VAR_1 = VAR_0->dev.driver;
 struct phy_driver *VAR_2 = FUNC_1(VAR_1);
 struct net_device *VAR_3 = VAR_0->attached_dev;

 if (!VAR_1 || !VAR_2->suspend)
  return 0;


 if (!VAR_3)
  return 1;





 if (VAR_3->dev.parent && FUNC_0(VAR_3->dev.parent))
  return 0;






 if (FUNC_0(&VAR_3->dev))
  return 0;

 return 1;
}
