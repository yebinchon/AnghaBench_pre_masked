
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int* buf; int flags; int len; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,void*,int,int,void**,int) ;
 int FUNC_1 (struct dvb_usb_device*,void*,int,int,void**,int) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (void**) ;
 void** FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_4, struct i2c_msg VAR_5[], int VAR_6)
{
 struct dvb_usb_device *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 int VAR_14;
 u8 VAR_15;
 u8 *VAR_16;

 VAR_16 = FUNC_4(256, VAR_2);
 if (!VAR_16)
  return -VAR_1;

 if (FUNC_5(&VAR_7->i2c_mutex) < 0) {
  FUNC_3(VAR_16);
  return -VAR_0;
 }

 if (VAR_6 > 2)
  FUNC_7("more than 2 i2c messages at a time is not handled yet. TODO.");

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

  if (VAR_5[VAR_8].addr == 0x99) {
   VAR_15 = 0xBE;
   VAR_12 = 0;
   VAR_13 = VAR_5[VAR_8].buf[0] & 0x00ff;
   VAR_14 = 1;
   FUNC_1(VAR_7, VAR_15, VAR_13, VAR_12, VAR_16, VAR_14);
  }

  if (VAR_5[VAR_8].addr == 0xd0) {

   if (VAR_8 + 1 < VAR_6 && (VAR_5[VAR_8 + 1].flags & VAR_3)) {
    VAR_15 = 0xB9;
    VAR_12 = (((VAR_5[VAR_8].buf[0] << 8) & 0xff00) | (VAR_5[VAR_8].buf[1] & 0x00ff));
    VAR_13 = VAR_5[VAR_8].addr + (VAR_5[VAR_8].len << 8);
    VAR_14 = VAR_5[VAR_8 + 1].len + 6;
    VAR_11 = FUNC_0(VAR_7, VAR_15, VAR_13, VAR_12, VAR_16, VAR_14);
    VAR_10 = VAR_5[VAR_8 + 1].len;
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
     VAR_5[VAR_8 + 1].buf[VAR_9] = VAR_16[VAR_9 + 5];

    VAR_8++;
   } else {


    VAR_15 = 0xBD;
    VAR_12 = (((VAR_5[VAR_8].buf[0] << 8) & 0xff00) | (VAR_5[VAR_8].buf[1] & 0x00ff));
    VAR_13 = VAR_5[VAR_8].addr + (2 << 8);
    VAR_14 = VAR_5[VAR_8].len - 2;
    VAR_10 = VAR_5[VAR_8].len - 2;
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
     VAR_16[VAR_9] = VAR_5[VAR_8].buf[VAR_9 + 2];
    FUNC_1(VAR_7, VAR_15, VAR_13, VAR_12, VAR_16, VAR_14);
   }
  }

  if (VAR_5[VAR_8].addr == 0xc0) {
   if (VAR_5[VAR_8].flags & VAR_3) {

    VAR_15 = 0xB9;
    VAR_12 = 0x0;
    VAR_13 = VAR_5[VAR_8].addr;
    VAR_14 = VAR_5[VAR_8].len + 6;
    VAR_11 = FUNC_0(VAR_7, VAR_15, VAR_13, VAR_12, VAR_16, VAR_14);
    VAR_10 = VAR_5[VAR_8].len;
    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
     VAR_5[VAR_8].buf[VAR_9] = VAR_16[VAR_9 + 5];

   } else {

    VAR_15 = 0xBD;
    VAR_12 = VAR_5[VAR_8].buf[0] & 0x00FF;
    VAR_13 = VAR_5[VAR_8].addr + (1 << 8);
    VAR_14 = VAR_5[VAR_8].len - 1;
    VAR_10 = VAR_5[VAR_8].len - 1;

    for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
     VAR_16[VAR_9] = VAR_5[VAR_8].buf[VAR_9 + 1];

    FUNC_1(VAR_7, VAR_15, VAR_13, VAR_12, VAR_16, VAR_14);
   }
  }
 }
 FUNC_6(&VAR_7->i2c_mutex);
 FUNC_3(VAR_16);

 return VAR_8;
}
