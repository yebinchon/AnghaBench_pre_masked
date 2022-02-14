
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct subchannel {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct css_driver {int (* freeze ) (struct subchannel*) ;} ;


 int FUNC_0 (struct subchannel*) ;
 struct css_driver* FUNC_1 (int ) ;
 struct subchannel* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct subchannel *VAR_1 = FUNC_2(VAR_0);
 struct css_driver *VAR_2;

 if (!VAR_1->dev.driver)
  return 0;
 VAR_2 = FUNC_1(VAR_1->dev.driver);
 return VAR_2->freeze ? VAR_2->freeze(VAR_1) : 0;
}
