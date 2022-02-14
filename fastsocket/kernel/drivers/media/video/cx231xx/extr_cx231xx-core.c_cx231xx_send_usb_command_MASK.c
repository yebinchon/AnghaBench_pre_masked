
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx_i2c_xfer_data {int saddr_len; int dev_addr; int direction; int saddr_dat; int p_buffer; int buf_size; } ;
struct cx231xx_i2c {int i2c_period; int i2c_nostop; int i2c_reserve; scalar_t__ nr; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;
struct VENDOR_REQUEST_IN {int wValue; int wIndex; int pBuff; int direction; int wLength; scalar_t__ bData; scalar_t__ bRequest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct cx231xx*,struct VENDOR_REQUEST_IN*) ;
 int FUNC_2 (int ,int,int ) ;

int FUNC_3(struct cx231xx_i2c *VAR_4,
        struct cx231xx_i2c_xfer_data *VAR_5)
{
 int VAR_6 = 0;
 struct cx231xx *VAR_7 = VAR_4->dev;
 struct VENDOR_REQUEST_IN VAR_8;

 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;


 VAR_10 = VAR_4->i2c_period;
 VAR_11 = VAR_4->i2c_nostop;
 VAR_12 = VAR_4->i2c_reserve;

 VAR_9 = VAR_5->saddr_len;


 if (VAR_9 == 1)
  VAR_8.wValue =
      VAR_5->
      dev_addr << 9 | VAR_10 << 4 | VAR_9 << 2 |
      VAR_11 << 1 | VAR_1 | VAR_12 << 6;
 else
  VAR_8.wValue =
      VAR_5->
      dev_addr << 9 | VAR_10 << 4 | VAR_9 << 2 |
      VAR_11 << 1 | VAR_1 | VAR_12 << 6;


 if (VAR_5->direction & VAR_0) {

  VAR_8.bRequest = VAR_4->nr + 4;
 } else
  VAR_8.bRequest = VAR_4->nr;


 switch (VAR_9) {
 case 0:
  VAR_8.wIndex = 0;
  break;
 case 1:
  VAR_8.wIndex = (VAR_5->saddr_dat & 0xff);
  break;
 case 2:
  VAR_8.wIndex = VAR_5->saddr_dat;
  break;
 }


 VAR_8.wLength = VAR_5->buf_size;


 VAR_8.bData = 0;


 if (VAR_5->direction) {
  VAR_8.direction = VAR_2;
  FUNC_2(VAR_5->p_buffer, 0x00, VAR_8.wLength);
 } else
  VAR_8.direction = VAR_3;


 VAR_8.pBuff = VAR_5->p_buffer;



 VAR_6 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_6 < 0) {
  FUNC_0
      ("UsbInterface::sendCommand, failed with status -%d\n",
       VAR_6);
 }

 return VAR_6;
}
