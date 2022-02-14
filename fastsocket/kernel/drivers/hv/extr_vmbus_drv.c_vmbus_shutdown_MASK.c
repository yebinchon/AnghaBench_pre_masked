
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_driver {int (* shutdown ) (struct hv_device*) ;} ;
struct hv_device {int dummy; } ;
struct device {int driver; } ;


 struct hv_device* FUNC_0 (struct device*) ;
 struct hv_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct hv_device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct hv_driver *VAR_1;
 struct hv_device *VAR_2 = FUNC_0(VAR_0);



 if (!VAR_0->driver)
  return;

 VAR_1 = FUNC_1(VAR_0->driver);

 if (VAR_1->shutdown)
  VAR_1->shutdown(VAR_2);

 return;
}
