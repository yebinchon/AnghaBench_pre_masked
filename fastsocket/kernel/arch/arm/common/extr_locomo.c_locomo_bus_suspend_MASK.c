
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo_driver {int (* suspend ) (struct locomo_dev*,int ) ;} ;
struct locomo_dev {int dummy; } ;
struct device {int driver; } ;
typedef int pm_message_t ;


 struct locomo_dev* FUNC_0 (struct device*) ;
 struct locomo_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct locomo_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct locomo_dev *VAR_2 = FUNC_0(VAR_0);
 struct locomo_driver *VAR_3 = FUNC_1(VAR_0->driver);
 int VAR_4 = 0;

 if (VAR_3 && VAR_3->suspend)
  VAR_4 = VAR_3->suspend(VAR_2, VAR_1);
 return VAR_4;
}
