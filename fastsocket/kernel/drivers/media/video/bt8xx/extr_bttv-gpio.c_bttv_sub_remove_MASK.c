
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct bttv_sub_driver {int (* remove ) (struct bttv_sub_device*) ;} ;
struct bttv_sub_device {int dummy; } ;


 int FUNC_0 (struct bttv_sub_device*) ;
 struct bttv_sub_device* FUNC_1 (struct device*) ;
 struct bttv_sub_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct bttv_sub_device *VAR_1 = FUNC_1(VAR_0);
 struct bttv_sub_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_2->remove)
  VAR_2->remove(VAR_1);
 return 0;
}
