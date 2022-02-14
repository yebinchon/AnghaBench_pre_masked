
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_device {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int*,int,int (*) (char*,int)) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_1, u8 VAR_2[6])
{
 int VAR_3, VAR_4;
 u8 VAR_5[] = { 0 }, VAR_6[] = { 0 };
 u8 VAR_7[256], VAR_8[16];
 struct i2c_msg VAR_9[] = {
  {
   .addr = 0xa0 >> 1,
   .flags = 0,
   .buf = VAR_6,
   .len = 1,
  }, {
   .addr = 0xa0 >> 1,
   .flags = VAR_0,
   .buf = VAR_5,
   .len = 1,
  }
 };

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  VAR_6[0] = VAR_3;
  VAR_4 = FUNC_4(&VAR_1->i2c_adap, VAR_9, 2);
  if (VAR_4 != 2) {
   FUNC_2("read eeprom failed.");
   return -1;
  } else {
   VAR_8[VAR_3 % 16] = VAR_5[0];
   VAR_7[VAR_3] = VAR_5[0];
  }

  if ((VAR_3 % 16) == 15) {
   FUNC_0("%02x: ", VAR_3 - 15);
   FUNC_1(VAR_8, 16, FUNC_0);
  }
 }

 FUNC_3(VAR_2, VAR_7 + 16, 6);
 return 0;
}
