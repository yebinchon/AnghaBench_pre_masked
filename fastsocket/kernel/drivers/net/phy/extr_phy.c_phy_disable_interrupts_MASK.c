
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*) ;

int FUNC_3(struct phy_device *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, VAR_0);

 if (VAR_2)
  goto phy_err;


 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  goto phy_err;

 return 0;

phy_err:
 FUNC_2(VAR_1);

 return VAR_2;
}
