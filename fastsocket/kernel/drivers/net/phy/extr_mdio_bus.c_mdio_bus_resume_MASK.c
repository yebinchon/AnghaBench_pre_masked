
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_driver {int (* resume ) (struct phy_device*) ;} ;
struct phy_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 struct phy_device* FUNC_2 (struct device*) ;
 struct phy_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device * VAR_0)
{
 struct phy_driver *VAR_1 = FUNC_3(VAR_0->driver);
 struct phy_device *VAR_2 = FUNC_2(VAR_0);

 if (!FUNC_0(VAR_2))
  return 0;
 return VAR_1->resume(VAR_2);
}
