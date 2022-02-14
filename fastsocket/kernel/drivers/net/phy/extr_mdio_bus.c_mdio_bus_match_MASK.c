
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_driver {int phy_id; int phy_id_mask; } ;
struct phy_device {int phy_id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct phy_device* FUNC_0 (struct device*) ;
 struct phy_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct phy_device *VAR_2 = FUNC_0(VAR_0);
 struct phy_driver *VAR_3 = FUNC_1(VAR_1);

 return ((VAR_3->phy_id & VAR_3->phy_id_mask) ==
  (VAR_2->phy_id & VAR_3->phy_id_mask));
}
