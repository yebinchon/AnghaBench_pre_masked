
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int flags; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; TYPE_2__* udev; } ;
struct TYPE_3__ {scalar_t__ idVendor; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int ,int*,int,int*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 int FUNC_2 (char*) ;
 struct dvb_usb_device* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int*,int*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_6, struct i2c_msg VAR_7[],
     int VAR_8)
{
 struct dvb_usb_device *VAR_9 = FUNC_3(VAR_6);
 int VAR_10;

 if (FUNC_5(&VAR_9->i2c_mutex) < 0)
  return -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {

  if (VAR_9->udev->descriptor.idVendor == VAR_5)
   switch (VAR_7[VAR_10].addr) {
   case 0x63:
    FUNC_1(VAR_9, 0);
    break;
   default:
    FUNC_1(VAR_9, 1);
    break;
   }

  if (VAR_7[VAR_10].flags & VAR_4) {

   u8 VAR_11[3], VAR_12[1+VAR_7[VAR_10].len];
   VAR_11[0] = 0;
   VAR_11[1] = VAR_7[VAR_10].len;
   VAR_11[2] = VAR_7[VAR_10].addr;
   if (FUNC_0(VAR_9, VAR_0,
        VAR_11, 3,
        VAR_12, 1+VAR_7[VAR_10].len) < 0) {
    FUNC_7("i2c read failed");
    break;
   }
   FUNC_4(VAR_7[VAR_10].buf, &VAR_12[1], VAR_7[VAR_10].len);
  } else if (VAR_10+1 < VAR_8 && (VAR_7[VAR_10+1].flags & VAR_4) &&
      VAR_7[VAR_10].addr == VAR_7[VAR_10+1].addr) {

   u8 VAR_13[3+VAR_7[VAR_10].len], VAR_14[1+VAR_7[VAR_10+1].len];
   VAR_13[0] = VAR_7[VAR_10].len;
   VAR_13[1] = VAR_7[VAR_10+1].len;
   VAR_13[2] = VAR_7[VAR_10].addr;
   FUNC_4(&VAR_13[3], VAR_7[VAR_10].buf, VAR_7[VAR_10].len);

   if (FUNC_0(VAR_9, VAR_0,
        VAR_13, 3+VAR_7[VAR_10].len,
        VAR_14, 1+VAR_7[VAR_10+1].len) < 0)
    break;

   if (VAR_14[0] != 0x08)
    FUNC_2("i2c read may have failed\n");

   FUNC_4(VAR_7[VAR_10+1].buf, &VAR_14[1], VAR_7[VAR_10+1].len);

   VAR_10++;
  } else {

   u8 VAR_15[2+VAR_7[VAR_10].len], VAR_16;
   VAR_15[0] = VAR_7[VAR_10].addr;
   VAR_15[1] = VAR_7[VAR_10].len;
   FUNC_4(&VAR_15[2], VAR_7[VAR_10].buf, VAR_7[VAR_10].len);

   if (FUNC_0(VAR_9, VAR_1, VAR_15,
        2+VAR_7[VAR_10].len, &VAR_16,1) < 0)
    break;
   if (VAR_16 != 0x08)
    FUNC_2("i2c write may have failed\n");
  }
 }

 FUNC_6(&VAR_9->i2c_mutex);
 return VAR_10 == VAR_8 ? VAR_8 : -VAR_3;
}
