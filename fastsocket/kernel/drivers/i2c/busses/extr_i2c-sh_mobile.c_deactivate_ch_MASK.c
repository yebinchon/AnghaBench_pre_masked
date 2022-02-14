
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int dev; int clk; } ;


 int FUNC_0 (struct sh_mobile_i2c_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sh_mobile_i2c_data *VAR_1)
{

 FUNC_5(0, FUNC_2(VAR_1));
 FUNC_5(0, FUNC_1(VAR_1));


 FUNC_5(FUNC_4(FUNC_0(VAR_1)) & ~VAR_0, FUNC_0(VAR_1));


 FUNC_3(VAR_1->clk);
 FUNC_6(VAR_1->dev);
}
