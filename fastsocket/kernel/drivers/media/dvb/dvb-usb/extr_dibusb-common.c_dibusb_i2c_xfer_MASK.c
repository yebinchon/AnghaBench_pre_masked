
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int addr; int len; int * buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int,int *,int ,int *,int ) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_2,struct i2c_msg VAR_3[],int VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (FUNC_2(&VAR_5->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {

  if (VAR_6+1 < VAR_4 && (VAR_3[VAR_6].flags & VAR_1) == 0
       && (VAR_3[VAR_6+1].flags & VAR_1)) {
   if (FUNC_0(VAR_5, VAR_3[VAR_6].addr, VAR_3[VAR_6].buf,VAR_3[VAR_6].len,
      VAR_3[VAR_6+1].buf,VAR_3[VAR_6+1].len) < 0)
    break;
   VAR_6++;
  } else if ((VAR_3[VAR_6].flags & VAR_1) == 0) {
   if (FUNC_0(VAR_5, VAR_3[VAR_6].addr, VAR_3[VAR_6].buf,VAR_3[VAR_6].len,((void*)0),0) < 0)
    break;
  } else if (VAR_3[VAR_6].addr != 0x50) {



   if (FUNC_0(VAR_5, VAR_3[VAR_6].addr, ((void*)0), 0, VAR_3[VAR_6].buf, VAR_3[VAR_6].len) < 0)
    break;
  }
 }

 FUNC_3(&VAR_5->i2c_mutex);
 return VAR_6;
}
