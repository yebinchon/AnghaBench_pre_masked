
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_driver {int (* remove ) (struct rio_dev*) ;} ;
struct rio_dev {struct rio_driver* driver; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct rio_dev*) ;
 int FUNC_1 (struct rio_dev*) ;
 struct rio_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct rio_dev *VAR_1 = FUNC_2(VAR_0);
 struct rio_driver *VAR_2 = VAR_1->driver;

 if (VAR_2) {
  if (VAR_2->remove)
   VAR_2->remove(VAR_1);
  VAR_1->driver = ((void*)0);
 }

 FUNC_0(VAR_1);

 return 0;
}
