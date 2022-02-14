
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; int lock; int state; } ;
struct device {int driver; } ;
struct TYPE_2__ {int (* remove ) (struct phy_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phy_device*) ;
 struct phy_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct phy_device *VAR_2;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_0(&VAR_2->lock);
 VAR_2->state = VAR_0;
 FUNC_1(&VAR_2->lock);

 if (VAR_2->drv->remove)
  VAR_2->drv->remove(VAR_2);

 FUNC_2(VAR_1->driver);
 VAR_2->drv = ((void*)0);

 return 0;
}
