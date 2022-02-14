
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umc_driver {int (* remove ) (struct umc_dev*) ;} ;
struct umc_dev {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct umc_dev*) ;
 struct umc_dev* FUNC_2 (struct device*) ;
 struct umc_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct umc_dev *VAR_1;
 struct umc_driver *VAR_2;

 VAR_2 = FUNC_3(VAR_0->driver);
 VAR_1 = FUNC_2(VAR_0);

 VAR_2->remove(VAR_1);
 FUNC_0(VAR_0);
 return 0;
}
