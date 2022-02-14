
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_iop3xx_data {int dummy; } ;
struct i2c_adapter {struct i2c_algo_iop3xx_data* algo_data; } ;


 int FUNC_0 (struct i2c_algo_iop3xx_data*,char const,int) ;

__attribute__((used)) static int
FUNC_1(struct i2c_adapter *VAR_0, const char *VAR_1, int VAR_2)
{
 struct i2c_algo_iop3xx_data *VAR_3 = VAR_0->algo_data;
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_5 == 0 && VAR_4 != VAR_2; ++VAR_4)
  VAR_5 = FUNC_0(VAR_3, VAR_1[VAR_4], VAR_4==VAR_2-1);
 return VAR_5;
}
