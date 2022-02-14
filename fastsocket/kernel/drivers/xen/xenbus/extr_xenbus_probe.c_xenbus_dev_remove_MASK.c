
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_driver {int (* remove ) (struct xenbus_device*) ;} ;
struct xenbus_device {int nodename; } ;
struct device {int driver; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct xenbus_device*) ;
 int FUNC_2 (struct xenbus_device*) ;
 int FUNC_3 (struct xenbus_device*) ;
 struct xenbus_device* FUNC_4 (struct device*) ;
 struct xenbus_driver* FUNC_5 (int ) ;
 int FUNC_6 (struct xenbus_device*,int ) ;

int FUNC_7(struct device *VAR_1)
{
 struct xenbus_device *VAR_2 = FUNC_4(VAR_1);
 struct xenbus_driver *VAR_3 = FUNC_5(VAR_1->driver);

 FUNC_0("%s", VAR_2->nodename);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_3->remove)
  VAR_3->remove(VAR_2);

 FUNC_6(VAR_2, VAR_0);
 return 0;
}
