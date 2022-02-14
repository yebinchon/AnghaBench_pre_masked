
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int i2c_slave_id; int rsta; int name; } ;
struct et61x251_device {int* control_buffer; TYPE_1__ sensor; struct usb_device* usbdev; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (struct et61x251_device*,TYPE_1__*) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int ,int,int*,int,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

int
FUNC_5(struct et61x251_device* VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
         u8 VAR_5, u8 VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9,
         u8 VAR_10, u8 VAR_11)
{
 struct usb_device* VAR_12 = VAR_1->usbdev;
 u8* VAR_13 = VAR_1->control_buffer;
 int VAR_14 = 0, VAR_15;

 VAR_13[0] = VAR_4;
 VAR_13[1] = VAR_5;
 VAR_13[2] = VAR_6;
 VAR_13[3] = VAR_7;
 VAR_13[4] = VAR_8;
 VAR_13[5] = VAR_9;
 VAR_13[6] = VAR_10;
 VAR_15 = FUNC_3(VAR_12, FUNC_4(VAR_12, 0), 0x00, 0x41,
         0, 0x81, VAR_13, VAR_2-1, VAR_0);
 if (VAR_15 < 0)
  VAR_14 += VAR_15;

 VAR_13[0] = VAR_11;
 VAR_13[1] = VAR_1->sensor.i2c_slave_id;
 VAR_13[2] = VAR_1->sensor.rsta | 0x02 | (VAR_2 << 4);
 VAR_15 = FUNC_3(VAR_12, FUNC_4(VAR_12, 0), 0x00, 0x41,
         0, 0x88, VAR_13, 3, VAR_0);
 if (VAR_15 < 0)
  VAR_14 += VAR_15;


 VAR_13[0] = VAR_3;
 VAR_15 = FUNC_3(VAR_12, FUNC_4(VAR_12, 0), 0x00, 0x41,
         0, 0x80, VAR_13, 1, VAR_0);
 if (VAR_15 < 0)
  VAR_14 += VAR_15;

 VAR_14 += FUNC_2(VAR_1, &VAR_1->sensor);

 if (VAR_14)
  FUNC_0(3, "I2C raw write failed for %s image sensor",
      VAR_1->sensor.name);

 FUNC_1("I2C raw write: %u bytes, address = 0x%02X, data1 = 0x%02X, "
       "data2 = 0x%02X, data3 = 0x%02X, data4 = 0x%02X, data5 = 0x%02X,"
       " data6 = 0x%02X, data7 = 0x%02X, data8 = 0x%02X", VAR_2, VAR_11,
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 return VAR_14 ? -1 : 0;

}
