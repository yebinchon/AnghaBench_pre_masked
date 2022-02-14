
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_platform_driver {int (* resume ) (struct of_device*) ;} ;
struct of_device {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct of_device*) ;
 struct of_device* FUNC_1 (struct device*) ;
 struct of_platform_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device * VAR_0)
{
 struct of_device *VAR_1 = FUNC_1(VAR_0);
 struct of_platform_driver *VAR_2 = FUNC_2(VAR_0->driver);
 int VAR_3 = 0;

 if (VAR_0->driver && VAR_2->resume)
  VAR_3 = VAR_2->resume(VAR_1);
 return VAR_3;
}
