
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simtec_i2c_data {struct simtec_i2c_data* ioarea; int reg; int adap; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct simtec_i2c_data*) ;
 struct simtec_i2c_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct simtec_i2c_data*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct simtec_i2c_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->adap);

 FUNC_1(VAR_1->reg);
 FUNC_4(VAR_1->ioarea);
 FUNC_2(VAR_1->ioarea);
 FUNC_2(VAR_1);

 return 0;
}
