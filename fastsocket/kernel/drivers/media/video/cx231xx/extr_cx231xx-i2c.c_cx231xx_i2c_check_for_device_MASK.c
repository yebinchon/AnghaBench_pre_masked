
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int addr; } ;
struct i2c_adapter {struct cx231xx_i2c* algo_data; } ;
struct cx231xx_i2c_xfer_data {int * p_buffer; scalar_t__ buf_size; scalar_t__ saddr_dat; scalar_t__ saddr_len; int direction; int dev_addr; } ;
struct cx231xx_i2c {struct cx231xx* dev; } ;
struct cx231xx {int (* cx231xx_send_usb_command ) (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;} ;


 int FUNC_0 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0,
     const struct i2c_msg *VAR_1)
{
 struct cx231xx_i2c *VAR_2 = VAR_0->algo_data;
 struct cx231xx *VAR_3 = VAR_2->dev;
 struct cx231xx_i2c_xfer_data VAR_4;
 int VAR_5 = 0;


 VAR_4.dev_addr = VAR_1->addr;
 VAR_4.direction = VAR_1->flags;
 VAR_4.saddr_len = 0;
 VAR_4.saddr_dat = 0;
 VAR_4.buf_size = 0;
 VAR_4.p_buffer = ((void*)0);


 VAR_5 = VAR_3->cx231xx_send_usb_command(VAR_2, &VAR_4);

 return VAR_5 < 0 ? VAR_5 : 0;
}
