
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int addr; int* buf; } ;
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
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,int ,int,int,int*,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_9, struct i2c_msg VAR_10[], int VAR_11)
{
 struct dvb_usb_device *VAR_12 = FUNC_0(VAR_9);
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 if (!VAR_11)
  return -VAR_1;

 if (FUNC_3(&VAR_12->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  if (VAR_10[VAR_13].flags & (VAR_5 | VAR_3 | VAR_7) || VAR_10[VAR_13].len == 0) {





   VAR_15 = -VAR_2;
   goto unlock;
  }

  if (!(VAR_10[VAR_13].flags & VAR_4)) {
   if ((VAR_15 = FUNC_2(VAR_12->udev, VAR_8,
     (VAR_10[VAR_13].addr << 1) |
     (VAR_10[VAR_13].flags & VAR_6 ? 0x01 : 0), 0x80)) != 0)
    goto unlock;

  }
  if (VAR_10[VAR_13].flags & VAR_6) {
   for (VAR_14 = 0; VAR_14 < VAR_10[VAR_13].len; VAR_14++) {


    int VAR_16 = (VAR_13+1 == VAR_11 && VAR_14+1 == VAR_10[VAR_13].len) ? 0x40 : 0x01;

    if ((VAR_15 = FUNC_1(VAR_12->udev, VAR_8, 0x0,
            0x20 | VAR_16,
            &VAR_10[VAR_13].buf[VAR_14], 1)) != 0)
     goto unlock;
   }
  } else {
   for (VAR_14 = 0; VAR_14 < VAR_10[VAR_13].len; VAR_14++) {

    int VAR_17 = (VAR_13+1 == VAR_11 && VAR_14+1 == VAR_10[VAR_13].len) ? 0x40 : 0x00;

    if ((VAR_15 = FUNC_2(VAR_12->udev, VAR_8, VAR_10[VAR_13].buf[VAR_14], VAR_17)) != 0)
     goto unlock;

   }
  }
 }
 VAR_15 = VAR_11;

 unlock:
 FUNC_4(&VAR_12->i2c_mutex);

 return VAR_15;
}
