
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int phytest_on; } ;



bool FUNC_0(struct brcms_phy_pub *VAR_0)
{
 struct brcms_phy *VAR_1 = (struct brcms_phy *) VAR_0;

 return VAR_1->phytest_on;
}
