
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct ccwgroup_driver {int (* remove ) (struct ccwgroup_device*) ;} ;
struct ccwgroup_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 struct ccwgroup_device* FUNC_2 (struct device*) ;
 struct ccwgroup_driver* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (struct device *VAR_2)
{
 struct ccwgroup_device *VAR_3;
 struct ccwgroup_driver *VAR_4;

 FUNC_0(VAR_2, &VAR_0);
 FUNC_0(VAR_2, &VAR_1);

 if (!VAR_2->driver)
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2->driver);

 if (VAR_4->remove)
  VAR_4->remove(VAR_3);

 return 0;
}
