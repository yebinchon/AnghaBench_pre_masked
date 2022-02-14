
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ autoneg; scalar_t__ state; int lock; int link_timeout; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* config_aneg ) (struct phy_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;

int FUNC_4(struct phy_device *VAR_7)
{
 int VAR_8;

 FUNC_0(&VAR_7->lock);

 if (VAR_0 == VAR_7->autoneg)
  FUNC_2(VAR_7);

 VAR_8 = VAR_7->drv->config_aneg(VAR_7);

 if (VAR_8 < 0)
  goto out_unlock;

 if (VAR_7->state != VAR_6) {
  if (VAR_1 == VAR_7->autoneg) {
   VAR_7->state = VAR_2;
   VAR_7->link_timeout = VAR_3;
  } else {
   VAR_7->state = VAR_5;
   VAR_7->link_timeout = VAR_4;
  }
 }

out_unlock:
 FUNC_1(&VAR_7->lock);
 return VAR_8;
}
