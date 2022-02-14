
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int dummy; } ;
struct mii_bus {int dummy; } ;


 struct phy_device* FUNC_0 (int) ;
 int FUNC_1 (struct mii_bus*,int,int*) ;
 struct phy_device* FUNC_2 (struct mii_bus*,int,int) ;

struct phy_device * FUNC_3(struct mii_bus *VAR_0, int VAR_1)
{
 struct phy_device *VAR_2 = ((void*)0);
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);


 if ((VAR_3 & 0x1fffffff) == 0x1fffffff)
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_3);

 return VAR_2;
}
