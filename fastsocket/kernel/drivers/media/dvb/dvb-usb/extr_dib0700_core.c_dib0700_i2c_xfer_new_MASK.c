
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u16 ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int,int (*) (char*)) ;
 int FUNC_2 (char*,int) ;
 struct dvb_usb_device* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int*,int*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int,int,int,int,int*,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_9, struct i2c_msg *VAR_10,
    int VAR_11)
{



 struct dvb_usb_device *VAR_12 = FUNC_3(VAR_9);
 uint8_t VAR_13 = 1;
 uint8_t VAR_14 = 0;
 uint8_t VAR_15 = 0;
 uint8_t VAR_16 = 0;
 uint8_t VAR_17[255];
 int VAR_18, VAR_19;



 if (FUNC_5(&VAR_12->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
  if (VAR_19 == 0) {

   VAR_15 = 1;
  } else if (!(VAR_10[VAR_19].flags & VAR_1)) {

   VAR_15 = 1;
  } else {


   VAR_15 = 0;
  }
  if (VAR_19 == (VAR_11 - 1)) {

   VAR_16 = 1;
  }

  if (VAR_10[VAR_19].flags & VAR_2) {

   u16 VAR_20, VAR_21;
   uint8_t VAR_22;

   VAR_22 = (VAR_10[VAR_19].addr << 1);
   VAR_21 = ((VAR_15 << 7) | (VAR_16 << 6) |
     (VAR_10[VAR_19].len & 0x3F)) << 8 | VAR_22;

   VAR_20 = ((VAR_14 << 6) & 0xC0) |
    ((VAR_13 << 4) & 0x30);

   VAR_18 = FUNC_7(VAR_12->udev,
       FUNC_8(VAR_12->udev, 0),
       VAR_3,
       VAR_8 | VAR_6,
       VAR_21, VAR_20, VAR_10[VAR_19].buf,
       VAR_10[VAR_19].len,
       VAR_5);
   if (VAR_18 < 0) {
    FUNC_2("i2c read error (status = %d)\n", VAR_18);
    break;
   }

   FUNC_0("<<< ");
   FUNC_1(VAR_10[VAR_19].buf, VAR_10[VAR_19].len, FUNC_0);

  } else {

   VAR_17[0] = VAR_4;
   VAR_17[1] = VAR_10[VAR_19].addr << 1;
   VAR_17[2] = (VAR_15 << 7) | (VAR_16 << 6) |
    (VAR_10[VAR_19].len & 0x3F);

   VAR_17[3] = ((VAR_14 << 6) & 0xC0) |
     ((VAR_13 << 4) & 0x30);

   FUNC_4(&VAR_17[4], VAR_10[VAR_19].buf, VAR_10[VAR_19].len);

   FUNC_0(">>> ");
   FUNC_1(VAR_17, VAR_10[VAR_19].len + 4, FUNC_0);

   VAR_18 = FUNC_7(VAR_12->udev,
       FUNC_9(VAR_12->udev, 0),
       VAR_4,
       VAR_8 | VAR_7,
       0, 0, VAR_17, VAR_10[VAR_19].len + 4,
       VAR_5);
   if (VAR_18 < 0) {
    FUNC_2("i2c write error (status = %d)\n", VAR_18);
    break;
   }
  }
 }
 FUNC_6(&VAR_12->i2c_mutex);
 return VAR_19;
}
