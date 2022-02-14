
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_adapter {struct cx231xx_i2c* algo_data; } ;
struct cx231xx_i2c_xfer_data {int dev_addr; int saddr_len; int saddr_dat; int buf_size; int* p_buffer; int direction; } ;
struct cx231xx_i2c {int nr; struct cx231xx* dev; } ;
struct cx231xx {scalar_t__ tuner_type; int (* cx231xx_gpio_i2c_write ) (struct cx231xx*,int,int*,int) ;int (* cx231xx_gpio_i2c_read ) (struct cx231xx*,int,int*,int) ;int (* cx231xx_send_usb_command ) (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;scalar_t__ xc_fw_load_done; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct cx231xx*,int,int*,int) ;
 int FUNC_2 (struct cx231xx*,int,int*,int) ;
 int FUNC_3 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;
 int FUNC_4 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1,
      const struct i2c_msg *VAR_2)
{
 struct cx231xx_i2c *VAR_3 = VAR_1->algo_data;
 struct cx231xx *VAR_4 = VAR_3->dev;
 struct cx231xx_i2c_xfer_data VAR_5;
 int VAR_6 = 0;
 u16 VAR_7 = 0;
 u8 VAR_8 = 0;

 if ((VAR_3->nr == 1) && (VAR_2->addr == 0x61)
     && VAR_4->tuner_type == VAR_0) {

  if (VAR_2->len == 2)
   VAR_7 = VAR_2->buf[0] << 8 | VAR_2->buf[1];
  else if (VAR_2->len == 1)
   VAR_7 = VAR_2->buf[0];

  if (VAR_4->xc_fw_load_done) {

   switch (VAR_7) {
   case 0x0009:
    FUNC_0(1,
    "GPIO R E A D: Special case BUSY check \n");

    VAR_2->buf[0] = 0;
    if (VAR_2->len == 2)
     VAR_2->buf[1] = 0;
    return 0;
   case 0x0004:
    VAR_8 = 1;
    break;

   }

   if (VAR_8) {



    FUNC_0(1,
    "GPIO R E A D: addr 0x%x, len %d, saddr 0x%x\n",
    VAR_2->addr, VAR_2->len,
    VAR_2->buf[0] << 8 | VAR_2->buf[1]);

    VAR_6 =
        VAR_4->cx231xx_gpio_i2c_write(VAR_4, VAR_2->addr,
        VAR_2->buf,
        VAR_2->len);
    VAR_6 =
        VAR_4->cx231xx_gpio_i2c_read(VAR_4, VAR_2->addr,
              VAR_2->buf,
              VAR_2->len);
    return VAR_6;
   }
  }


  VAR_5.dev_addr = VAR_2->addr;
  VAR_5.direction = VAR_2->flags;
  VAR_5.saddr_len = VAR_2->len;
  VAR_5.saddr_dat = VAR_2->buf[0] << 8 | VAR_2->buf[1];
  VAR_5.buf_size = VAR_2->len;
  VAR_5.p_buffer = VAR_2->buf;


  VAR_6 = VAR_4->cx231xx_send_usb_command(VAR_3, &VAR_5);

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
