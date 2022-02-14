
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo_driver {int (* resume ) (struct locomo_dev*) ;} ;
struct locomo_dev {int dummy; } ;
struct device {int driver; } ;


 struct locomo_dev* FUNC_0 (struct device*) ;
 struct locomo_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct locomo_dev*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct locomo_dev *VAR_1 = FUNC_0(VAR_0);
 struct locomo_driver *VAR_2 = FUNC_1(VAR_0->driver);
 int VAR_3 = 0;

 if (VAR_2 && VAR_2->resume)
  VAR_3 = VAR_2->resume(VAR_1);
 return VAR_3;
}
