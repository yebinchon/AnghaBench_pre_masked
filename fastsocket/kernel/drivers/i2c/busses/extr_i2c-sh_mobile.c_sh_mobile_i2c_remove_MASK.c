
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int clk; int reg; int adap; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sh_mobile_i2c_data*) ;
 struct sh_mobile_i2c_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct sh_mobile_i2c_data *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->adap);
 FUNC_2(VAR_1->reg);
 FUNC_6(VAR_0, 0);
 FUNC_0(VAR_1->clk);
 FUNC_5(&VAR_0->dev);
 FUNC_3(VAR_1);
 return 0;
}
