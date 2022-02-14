
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; scalar_t__ len; int * buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int ,int ,int *,scalar_t__,int *,scalar_t__) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_4,struct i2c_msg VAR_5[],int VAR_6)
{
 struct dvb_usb_device *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 if (FUNC_2(&VAR_7->i2c_mutex) < 0)
  return -VAR_0;

 if (VAR_6 > 2)
  FUNC_4("more than 2 i2c messages at a time is not handled yet. TODO.");

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

  if (VAR_8+1 < VAR_6 && (VAR_5[VAR_8+1].flags & VAR_1)) {
   if (FUNC_0(VAR_7, VAR_2, VAR_5[VAR_8].buf[0], ((void*)0), 0,
      VAR_5[VAR_8+1].buf,VAR_5[VAR_8+1].len) < 0)
    break;
   VAR_8++;
  } else
   if (FUNC_0(VAR_7,VAR_3, VAR_5[VAR_8].buf[0],
      &VAR_5[VAR_8].buf[1],VAR_5[VAR_8].len-1,((void*)0),0) < 0)
    break;
 }

 FUNC_3(&VAR_7->i2c_mutex);
 return VAR_8;
}
