
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct sn9c102_sensor {scalar_t__ interface; int frequency; int name; } ;
struct sn9c102_device {int* control_buffer; struct usb_device* usbdev; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sn9c102_device*,struct sn9c102_sensor const*) ;
 scalar_t__ FUNC_3 (struct sn9c102_device*,struct sn9c102_sensor const*) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int,int ,int*,int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

int
FUNC_6(struct sn9c102_device* VAR_3,
     const struct sn9c102_sensor* VAR_4, u8 VAR_5, u8 VAR_6,
     u8 VAR_7, u8 VAR_8, u8 VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct usb_device* VAR_12 = VAR_3->usbdev;
 u8* VAR_13 = VAR_3->control_buffer;
 int VAR_14 = 0, VAR_15;


 VAR_13[0] = ((VAR_4->interface == VAR_1) ? 0x80 : 0) |
    ((VAR_4->frequency & VAR_2) ? 0x01 : 0)
    | ((VAR_5 - 1) << 4);
 VAR_13[1] = VAR_6;
 VAR_13[2] = VAR_7;
 VAR_13[3] = VAR_8;
 VAR_13[4] = VAR_9;
 VAR_13[5] = VAR_10;
 VAR_13[6] = VAR_11;
 VAR_13[7] = 0x17;
 VAR_15 = FUNC_4(VAR_12, FUNC_5(VAR_12, 0), 0x08, 0x41,
         0x08, 0, VAR_13, 8, VAR_0);
 if (VAR_15 < 0)
  VAR_14 += VAR_15;

 VAR_14 += FUNC_3(VAR_3, VAR_4);
 VAR_14 += FUNC_2(VAR_3, VAR_4);

 if (VAR_14)
  FUNC_0(3, "I2C write failed for %s image sensor", VAR_4->name);

 FUNC_1("I2C raw write: %u bytes, data0 = 0x%02X, data1 = 0x%02X, "
       "data2 = 0x%02X, data3 = 0x%02X, data4 = 0x%02X, data5 = 0x%02X",
       VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 return VAR_14 ? -1 : 0;
}
