
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_adapter {struct cx231xx_i2c* algo_data; } ;
struct cx231xx_i2c_xfer_data {int dev_addr; int saddr_len; int saddr_dat; int buf_size; int* p_buffer; int direction; } ;
struct cx231xx_i2c {int nr; int i2c_nostop; int i2c_reserve; struct cx231xx* dev; } ;
struct cx231xx {scalar_t__ tuner_type; int xc_fw_load_done; int (* cx231xx_gpio_i2c_write ) (struct cx231xx*,int,int*,int) ;int (* cx231xx_send_usb_command ) (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,int,int) ;
 int FUNC_1 (struct cx231xx*,int,int*,int) ;
 int FUNC_2 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;
 int FUNC_3 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;

int FUNC_4(struct i2c_adapter *VAR_1,
      const struct i2c_msg *VAR_2)
{
 struct cx231xx_i2c *VAR_3 = VAR_1->algo_data;
 struct cx231xx *VAR_4 = VAR_3->dev;
 struct cx231xx_i2c_xfer_data VAR_5;
 int VAR_6 = 0;
 u16 VAR_7 = 0;
 u8 VAR_8 = 0;
 u8 VAR_9 = 1;
 u8 *VAR_10 = ((void*)0);
 u16 VAR_11 = 0;
 u8 VAR_12 = 0;

 if ((VAR_3->nr == 1) && (VAR_2->addr == 0x61)
     && (VAR_4->tuner_type == VAR_0)) {

  VAR_7 = VAR_2->len;

  if (VAR_7 == 2) {


   return 0;
  } else if (VAR_7 == 4) {
   if (VAR_2->len >= 2)
    VAR_11 = VAR_2->buf[0] << 8 | VAR_2->buf[1];
   else if (VAR_2->len == 1)
    VAR_11 = VAR_2->buf[0];

   switch (VAR_11) {
   case 0x0000:
    VAR_12 = 1;

    VAR_4->xc_fw_load_done = 1;
    break;
   case 0x000D:
   case 0x0001:
   case 0x0002:
   case 0x0003:
    VAR_12 = 1;
    break;
   default:
    if (VAR_4->xc_fw_load_done)
     VAR_12 = 1;
    break;
   }

   if (VAR_12) {
    FUNC_0(1,
    "GPIO WRITE: addr 0x%x, len %d, saddr 0x%x\n",
    VAR_2->addr, VAR_2->len, VAR_11);

    return VAR_4->cx231xx_gpio_i2c_write(VAR_4,
           VAR_2->addr,
           VAR_2->buf,
           VAR_2->len);
   }
  }


  VAR_9 = 1;


  VAR_7 -= VAR_9;
  VAR_10 = (u8 *) (VAR_2->buf + 1);

  do {

   VAR_5.dev_addr = VAR_2->addr;
   VAR_5.direction = VAR_2->flags;
   VAR_5.saddr_len = VAR_9;
   VAR_5.saddr_dat = VAR_2->buf[0];
   VAR_5.buf_size = VAR_7 > 16 ? 16 : VAR_7;
   VAR_5.p_buffer = (u8 *) (VAR_10 + VAR_8 * 16);

   VAR_3->i2c_nostop = (VAR_7 > 16) ? 1 : 0;
   VAR_3->i2c_reserve = (VAR_8 == 0) ? 0 : 1;


   VAR_6 = VAR_4->cx231xx_send_usb_command(VAR_3, &VAR_5);
   VAR_8++;

   if (VAR_7 >= 16)
    VAR_7 -= 16;
   else
    VAR_7 = 0;

  } while (VAR_7 > 0);

  VAR_3->i2c_nostop = 0;
  VAR_3->i2c_reserve = 0;

 } else {


  VAR_5.dev_addr = VAR_2->addr;
  VAR_5.direction = VAR_2->flags;
  VAR_5.saddr_len = 0;
  VAR_5.saddr_dat = 0;
  VAR_5.buf_size = VAR_2->len;
  VAR_5.p_buffer = VAR_2->buf;


  VAR_6 = VAR_4->cx231xx_send_usb_command(VAR_3, &VAR_5);
 }

 return VAR_6 < 0 ? VAR_6 : 0;
}
