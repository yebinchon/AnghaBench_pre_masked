
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int* usb_buf; struct usb_device* dev; } ;
struct sd {TYPE_2__* sensor; TYPE_1__ gspca_dev; } ;
typedef int __u8 ;
struct TYPE_4__ {int i2c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int const,...) ;
 int VAR_4 ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int,int ,int*,int ,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct sd *VAR_5, const u8 *VAR_6, u8 VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct usb_device *VAR_11 = VAR_5->gspca_dev.dev;
 __u8 *VAR_12 = VAR_5->gspca_dev.usb_buf;

 FUNC_0(VAR_0, "I2C: Command buffer contains %d entries", VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_7;) {

  FUNC_1(VAR_12, 0, VAR_1);
  for (VAR_10 = 0; VAR_10 < VAR_2 && VAR_9 < VAR_7; VAR_10++, VAR_9++) {
   VAR_12[VAR_10] = VAR_6[2*VAR_9];
   VAR_12[0x10 + VAR_10] = VAR_6[2*VAR_9+1];
   FUNC_0(VAR_0, "I2C: Writing 0x%02x to reg 0x%02x",
   VAR_6[2*VAR_9+1], VAR_6[2*VAR_9]);
  }
  VAR_12[0x20] = VAR_5->sensor->i2c_addr;
  VAR_12[0x21] = VAR_10 - 1;
  VAR_12[0x22] = VAR_3;
  VAR_8 = FUNC_3(VAR_11, FUNC_4(VAR_11, 0),
          0x04, 0x40, 0x0400, 0, VAR_12,
          VAR_1,
          VAR_4);
  if (VAR_8 < 0)
   return VAR_8;
 }
 return FUNC_2(VAR_5);
}
