
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int flags; scalar_t__ addr; scalar_t__* buf; scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;
struct ec168_req {scalar_t__ value; scalar_t__ index; scalar_t__* data; scalar_t__ size; int cmd; } ;
struct dvb_usb_device {int i2c_mutex; } ;
struct TYPE_2__ {scalar_t__ demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dvb_usb_device*,struct ec168_req*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (char*) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_8, struct i2c_msg VAR_9[],
 int VAR_10)
{
 struct dvb_usb_device *VAR_11 = FUNC_2(VAR_8);
 struct ec168_req VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 if (VAR_10 > 2)
  return -VAR_1;

 if (FUNC_3(&VAR_11->i2c_mutex) < 0)
  return -VAR_0;

 while (VAR_13 < VAR_10) {
  if (VAR_10 > VAR_13 + 1 && (VAR_9[VAR_13+1].flags & VAR_3)) {
   if (VAR_9[VAR_13].addr == VAR_7.demod_address) {
    VAR_12.cmd = VAR_4;
    VAR_12.value = 0;
    VAR_12.index = 0xff00 + VAR_9[VAR_13].buf[0];
    VAR_12.size = VAR_9[VAR_13+1].len;
    VAR_12.data = &VAR_9[VAR_13+1].buf[0];
    VAR_14 = FUNC_0(VAR_11, &VAR_12);
    VAR_13 += 2;
   } else {
    FUNC_1("I2C read not implemented");
    VAR_14 = -VAR_2;
    VAR_13 += 2;
   }
  } else {
   if (VAR_9[VAR_13].addr == VAR_7.demod_address) {
    VAR_12.cmd = VAR_5;
    VAR_12.value = VAR_9[VAR_13].buf[1];
    VAR_12.index = 0xff00 + VAR_9[VAR_13].buf[0];
    VAR_12.size = 0;
    VAR_12.data = ((void*)0);
    VAR_14 = FUNC_0(VAR_11, &VAR_12);
    VAR_13 += 1;
   } else {
    VAR_12.cmd = VAR_6;
    VAR_12.value = VAR_9[VAR_13].buf[0];
    VAR_12.index = 0x0100 + VAR_9[VAR_13].addr;
    VAR_12.size = VAR_9[VAR_13].len-1;
    VAR_12.data = &VAR_9[VAR_13].buf[1];
    VAR_14 = FUNC_0(VAR_11, &VAR_12);
    VAR_13 += 1;
   }
  }
  if (VAR_14)
   goto error;

 }
 VAR_14 = VAR_13;

error:
 FUNC_4(&VAR_11->i2c_mutex);
 return VAR_13;
}
