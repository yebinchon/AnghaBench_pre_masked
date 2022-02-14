
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_cmd_arg {unsigned int cmd; void* arg; } ;
struct i2c_adapter {int dev; } ;


 int FUNC_0 (int *,struct i2c_cmd_arg*,int ) ;
 int VAR_0 ;

void FUNC_1(struct i2c_adapter *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct i2c_cmd_arg VAR_4;

 VAR_4.cmd = VAR_2;
 VAR_4.arg = VAR_3;
 FUNC_0(&VAR_1->dev, &VAR_4, VAR_0);
}
