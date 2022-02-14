
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int len; int flags; int buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int ,int) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,int*,int) ;
 struct dvb_usb_device* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (int*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_4,
       struct i2c_msg *VAR_5, int VAR_6)
{
 struct dvb_usb_device *VAR_7 = FUNC_3(VAR_4);
 int VAR_8,VAR_9;
 u8 VAR_10[255];

 if (FUNC_5(&VAR_7->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

  VAR_10[1] = VAR_5[VAR_8].addr << 1;

  FUNC_4(&VAR_10[2], VAR_5[VAR_8].buf, VAR_5[VAR_8].len);


  if (VAR_8+1 < VAR_6 && (VAR_5[VAR_8+1].flags & VAR_1)) {
   VAR_10[0] = VAR_2;
   VAR_10[1] |= 1;


   if ((VAR_9 = FUNC_1(VAR_7, VAR_10, VAR_5[VAR_8].len + 2, VAR_5[VAR_8+1].buf, VAR_5[VAR_8+1].len)) <= 0) {
    FUNC_0("I2C read failed on address 0x%02x\n",
      VAR_5[VAR_8].addr);
    break;
   }

   VAR_5[VAR_8+1].len = VAR_9;

   VAR_8++;
  } else {
   VAR_10[0] = VAR_3;
   if (FUNC_2(VAR_7, VAR_10, VAR_5[VAR_8].len + 2) < 0)
    break;
  }
 }

 FUNC_6(&VAR_7->i2c_mutex);
 return VAR_8;
}
