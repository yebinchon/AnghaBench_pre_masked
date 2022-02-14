
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_driver {int (* remove ) (struct hv_device*) ;} ;
struct hv_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct device*) ;
 struct hv_device* FUNC_1 (struct device*) ;
 struct hv_driver* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct hv_device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct hv_driver *VAR_1 = FUNC_2(VAR_0->driver);
 struct hv_device *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1->remove)
  VAR_1->remove(VAR_2);
 else
  FUNC_3("remove not set for driver %s\n",
   FUNC_0(VAR_0));

 return 0;
}
