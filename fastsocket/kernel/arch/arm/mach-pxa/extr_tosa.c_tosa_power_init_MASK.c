
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0, "ac in");
 if (VAR_2)
  goto err_gpio_req;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto err_gpio_in;

 return 0;

err_gpio_in:
 FUNC_1(VAR_0);
err_gpio_req:
 return VAR_2;
}
