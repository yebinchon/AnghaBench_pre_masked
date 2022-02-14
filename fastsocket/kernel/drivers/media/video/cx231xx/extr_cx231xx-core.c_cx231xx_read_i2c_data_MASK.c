
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx_i2c_xfer_data {int dev_addr; int saddr_len; int saddr_dat; int buf_size; int* p_buffer; int direction; } ;
struct cx231xx {int (* cx231xx_send_usb_command ) (int *,struct cx231xx_i2c_xfer_data*) ;int * i2c_bus; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cx231xx_i2c_xfer_data*) ;

int FUNC_1(struct cx231xx *VAR_1, u8 VAR_2, u16 VAR_3,
     u8 VAR_4, u32 *VAR_5, u8 VAR_6)
{
 int VAR_7 = 0;
 struct cx231xx_i2c_xfer_data VAR_8;
 u8 VAR_9[4] = { 0, 0, 0, 0 };

 if (VAR_4 == 0)
  VAR_3 = 0;
 else if (VAR_4 == 1)
  VAR_3 &= 0xff;


 VAR_8.dev_addr = VAR_2 >> 1;
 VAR_8.direction = VAR_0;
 VAR_8.saddr_len = VAR_4;
 VAR_8.saddr_dat = VAR_3;
 VAR_8.buf_size = VAR_6;
 VAR_8.p_buffer = (u8 *) VAR_9;


 VAR_7 = VAR_1->cx231xx_send_usb_command(&VAR_1->i2c_bus[0], &VAR_8);

 if (VAR_7 >= 0) {

  if (VAR_6 == 1)
   *VAR_5 = VAR_9[0];
  else
   *VAR_5 =
       VAR_9[0] | VAR_9[1] << 8 | VAR_9[2] << 16 | VAR_9[3]
       << 24;
 }

 return VAR_7;
}
