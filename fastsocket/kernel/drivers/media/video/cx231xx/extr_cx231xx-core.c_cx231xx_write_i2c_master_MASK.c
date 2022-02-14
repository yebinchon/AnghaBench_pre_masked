
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx_i2c_xfer_data {int dev_addr; int saddr_len; int saddr_dat; int buf_size; int* p_buffer; scalar_t__ direction; } ;
struct cx231xx {int (* cx231xx_send_usb_command ) (int *,struct cx231xx_i2c_xfer_data*) ;int * i2c_bus; } ;


 int FUNC_0 (int *,struct cx231xx_i2c_xfer_data*) ;
 int FUNC_1 (int *,struct cx231xx_i2c_xfer_data*) ;
 int FUNC_2 (int *,struct cx231xx_i2c_xfer_data*) ;

int FUNC_3(struct cx231xx *VAR_0, u8 VAR_1, u16 VAR_2,
      u8 VAR_3, u32 VAR_4, u8 VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 u8 VAR_8[4] = { 0, 0, 0, 0 };
 struct cx231xx_i2c_xfer_data VAR_9;

 VAR_8[0] = (u8) VAR_4;
 VAR_8[1] = (u8) (VAR_4 >> 8);
 VAR_8[2] = (u8) (VAR_4 >> 16);
 VAR_8[3] = (u8) (VAR_4 >> 24);

 if (VAR_3 == 0)
  VAR_2 = 0;
 else if (VAR_3 == 1)
  VAR_2 &= 0xff;


 VAR_9.dev_addr = VAR_1 >> 1;
 VAR_9.direction = 0;
 VAR_9.saddr_len = VAR_3;
 VAR_9.saddr_dat = VAR_2;
 VAR_9.buf_size = VAR_5;
 VAR_9.p_buffer = VAR_8;


 if (VAR_6 == 0)
  VAR_7 = VAR_0->cx231xx_send_usb_command(&VAR_0->i2c_bus[0],
     &VAR_9);
 else if (VAR_6 == 1)
  VAR_7 = VAR_0->cx231xx_send_usb_command(&VAR_0->i2c_bus[1],
     &VAR_9);
 else if (VAR_6 == 2)
  VAR_7 = VAR_0->cx231xx_send_usb_command(&VAR_0->i2c_bus[2],
     &VAR_9);

 return VAR_7;
}
