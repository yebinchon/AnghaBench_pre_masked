
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int ,int *,int ,int *,int ) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[],
     int VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_5 > 2)
  return -VAR_1;

 if (FUNC_2(&VAR_6->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

  if (VAR_7+1 < VAR_5 && (VAR_4[VAR_7+1].flags & VAR_2)) {
   if (FUNC_0(VAR_6, VAR_4[VAR_7].addr, VAR_4[VAR_7].buf,
    VAR_4[VAR_7].len, VAR_4[VAR_7+1].buf, VAR_4[VAR_7+1].len) < 0)
    break;
   VAR_7++;
  } else
   if (FUNC_0(VAR_6, VAR_4[VAR_7].addr, VAR_4[VAR_7].buf,
       VAR_4[VAR_7].len, ((void*)0), 0) < 0)
    break;
 }

 FUNC_3(&VAR_6->i2c_mutex);
 return VAR_7;
}
