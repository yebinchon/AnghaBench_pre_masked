
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct subchannel {TYPE_1__ dev; int reg_mutex; } ;
struct device {int dummy; } ;
struct css_driver {int (* prepare ) (struct subchannel*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct subchannel*) ;
 struct css_driver* FUNC_2 (int ) ;
 struct subchannel* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_3(VAR_1);
 struct css_driver *VAR_3;

 if (FUNC_0(&VAR_2->reg_mutex))
  return -VAR_0;
 if (!VAR_2->dev.driver)
  return 0;
 VAR_3 = FUNC_2(VAR_2->dev.driver);

 return VAR_3->prepare ? VAR_3->prepare(VAR_2) : 0;
}
