
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int addr; int* buf; int len; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_4, struct i2c_msg *VAR_5,
 int VAR_6)
{
 struct dvb_usb_device *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = 0, VAR_9, VAR_10 = 0;

 if (FUNC_3(&VAR_7->i2c_mutex) < 0)
  return -VAR_2;

 while (VAR_10 < VAR_6) {
  if (VAR_6 > VAR_10 + 1 && (VAR_5[VAR_10+1].flags & VAR_3)) {
   u8 VAR_11[6];
   VAR_11[0] = VAR_0;
   VAR_11[1] = VAR_5[VAR_10].addr + 1;
   VAR_11[2] = VAR_5[VAR_10].buf[0];
   VAR_11[3] = 0x00;
   VAR_11[4] = 0x00;
   VAR_11[5] = 0x01;
   VAR_8 = FUNC_0(VAR_7, VAR_11, sizeof(VAR_11), VAR_5[VAR_10+1].buf,
    VAR_5[VAR_10+1].len);
   VAR_9 = 2;
  } else {
   u8 VAR_12[4+VAR_5[VAR_10].len];
   VAR_12[0] = VAR_1;
   VAR_12[1] = VAR_5[VAR_10].addr;
   VAR_12[2] = VAR_5[VAR_10].len;
   VAR_12[3] = 0x01;
   FUNC_2(&VAR_12[4], VAR_5[VAR_10].buf, VAR_5[VAR_10].len);
   VAR_8 = FUNC_0(VAR_7, VAR_12, sizeof(VAR_12), ((void*)0), 0);
   VAR_9 = 1;
  }
  if (VAR_8)
   break;

  VAR_10 += VAR_9;
 }

 FUNC_4(&VAR_7->i2c_mutex);

 return VAR_8 ? VAR_8 : VAR_10;
}
