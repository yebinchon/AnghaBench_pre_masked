
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_platform_driver {int (* suspend ) (struct of_device*,int ) ;} ;
struct of_device {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct of_device*,int ) ;
 struct of_device* FUNC_1 (struct device*) ;
 struct of_platform_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct of_device *VAR_2 = FUNC_1(VAR_0);
 struct of_platform_driver *VAR_3 = FUNC_2(VAR_0->driver);
 int VAR_4 = 0;

 if (VAR_0->driver && VAR_3->suspend)
  VAR_4 = VAR_3->suspend(VAR_2, VAR_1);
 return VAR_4;
}
