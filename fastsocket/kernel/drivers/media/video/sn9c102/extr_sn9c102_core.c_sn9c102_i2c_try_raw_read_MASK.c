
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct sn9c102_sensor {scalar_t__ interface; int frequency; int name; } ;
struct sn9c102_device {int* control_buffer; struct usb_device* usbdev; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sn9c102_device*,struct sn9c102_sensor const*) ;
 scalar_t__ FUNC_3 (struct sn9c102_device*,struct sn9c102_sensor const*) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int,int ,int*,int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

int
FUNC_7(struct sn9c102_device* VAR_3,
    const struct sn9c102_sensor* VAR_4, u8 VAR_5,
    u8 VAR_6, u8 VAR_7, u8 VAR_8[])
{
 struct usb_device* VAR_9 = VAR_3->usbdev;
 u8* VAR_10 = VAR_3->control_buffer;
 int VAR_11 = 0, VAR_12 = 0, VAR_13;


 VAR_10[0] = ((VAR_4->interface == VAR_1) ? 0x80 : 0) |
    ((VAR_4->frequency & VAR_2) ? 0x01 : 0) | 0x10;
 VAR_10[1] = VAR_5;
 VAR_10[2] = VAR_6;
 VAR_10[7] = 0x10;
 VAR_13 = FUNC_4(VAR_9, FUNC_6(VAR_9, 0), 0x08, 0x41,
         0x08, 0, VAR_10, 8, VAR_0);
 if (VAR_13 < 0)
  VAR_12 += VAR_13;

 VAR_12 += FUNC_3(VAR_3, VAR_4);


 VAR_10[0] = ((VAR_4->interface == VAR_1) ? 0x80 : 0) |
    ((VAR_4->frequency & VAR_2) ? 0x01 : 0) |
    (VAR_7 << 4) | 0x02;
 VAR_10[1] = VAR_5;
 VAR_10[7] = 0x10;
 VAR_13 = FUNC_4(VAR_9, FUNC_6(VAR_9, 0), 0x08, 0x41,
         0x08, 0, VAR_10, 8, VAR_0);
 if (VAR_13 < 0)
  VAR_12 += VAR_13;

 VAR_12 += FUNC_3(VAR_3, VAR_4);


 VAR_13 = FUNC_4(VAR_9, FUNC_5(VAR_9, 0), 0x00, 0xc1,
         0x0a, 0, VAR_10, 5, VAR_0);
 if (VAR_13 < 0)
  VAR_12 += VAR_13;

 VAR_12 += FUNC_2(VAR_3, VAR_4);

 FUNC_1("I2C read: address 0x%02X, first read byte: 0x%02X", VAR_6,
       VAR_10[4]);

 if (VAR_12) {
  FUNC_0(3, "I2C read failed for %s image sensor", VAR_4->name);
  return -1;
 }

 if (VAR_8)
  for (VAR_11 = 0; VAR_11 < VAR_7 && VAR_11 < 5; VAR_11++)
   VAR_8[VAR_7-VAR_11-1] = VAR_10[4-VAR_11];

 return (int)VAR_10[4];
}
