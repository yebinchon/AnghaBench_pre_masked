
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; int flags; int len; int buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (char*,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dvb_usb_device*,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_4, struct i2c_msg VAR_5[],
      int VAR_6)
{
 struct dvb_usb_device *VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = 0, VAR_9 = 0;

 if (!VAR_7)
  return -VAR_1;
 if (FUNC_2(&VAR_7->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if ((VAR_9 = FUNC_4(VAR_7,
     (VAR_5[VAR_8].addr<<1)|(VAR_5[VAR_8].flags&VAR_2?0x01:0),
     VAR_5[VAR_8].buf,
     VAR_5[VAR_8].len
     )) != VAR_5[VAR_8].len) {
   break;
  }
  if (VAR_3 & 0x10)
   FUNC_1("sending i2c mesage %d %d", VAR_9, VAR_5[VAR_8].len);
 }
 FUNC_3(&VAR_7->i2c_mutex);
 return VAR_6;
}
