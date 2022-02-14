
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct cx23885_i2c {struct i2c_adapter i2c_adap; } ;
struct cx23885_dev {struct cx23885_i2c* i2c_bus; } ;


 int FUNC_0 (struct i2c_adapter*,int,int,int) ;
 int FUNC_1 (struct i2c_adapter*,int,int) ;

void FUNC_2(struct cx23885_dev *VAR_0)
{
 struct cx23885_i2c *VAR_1 = &VAR_0->i2c_bus[2];
 struct i2c_adapter *VAR_2 = &VAR_1->i2c_adap;


 FUNC_0(VAR_2, 0x803, ~0x10, 0x00);


 FUNC_1(VAR_2, 0x114, 0xea0eb3);


 FUNC_1(VAR_2, 0x110, 0x090319);


 FUNC_0(VAR_2, 0x803, ~0x10, 0x10);
}
