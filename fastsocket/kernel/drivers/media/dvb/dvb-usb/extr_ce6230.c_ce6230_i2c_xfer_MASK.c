
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct req_t {int value; int index; int* data; scalar_t__ data_len; int cmd; } ;
struct i2c_msg {int flags; int addr; int* buf; scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;
typedef int req ;
struct TYPE_2__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (char*) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct req_t*,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_8, struct i2c_msg VAR_9[],
      int VAR_10)
{
 struct dvb_usb_device *VAR_11 = FUNC_2(VAR_8);
 int VAR_12 = 0;
 struct req_t VAR_13;
 int VAR_14 = 0;
 FUNC_3(&VAR_13, 0, sizeof(VAR_13));

 if (VAR_10 > 2)
  return -VAR_3;

 if (FUNC_4(&VAR_11->i2c_mutex) < 0)
  return -VAR_2;

 while (VAR_12 < VAR_10) {
  if (VAR_10 > VAR_12 + 1 && (VAR_9[VAR_12+1].flags & VAR_5)) {
   if (VAR_9[VAR_12].addr ==
    VAR_7.demod_address) {
    VAR_13.cmd = VAR_0;
    VAR_13.value = VAR_9[VAR_12].addr >> 1;
    VAR_13.index = VAR_9[VAR_12].buf[0];
    VAR_13.data_len = VAR_9[VAR_12+1].len;
    VAR_13.data = &VAR_9[VAR_12+1].buf[0];
    VAR_14 = FUNC_0(VAR_11, &VAR_13);
   } else {
    FUNC_1("i2c read not implemented");
    VAR_14 = -VAR_4;
   }
   VAR_12 += 2;
  } else {
   if (VAR_9[VAR_12].addr ==
    VAR_7.demod_address) {
    VAR_13.cmd = VAR_1;
    VAR_13.value = VAR_9[VAR_12].addr >> 1;
    VAR_13.index = VAR_9[VAR_12].buf[0];
    VAR_13.data_len = VAR_9[VAR_12].len-1;
    VAR_13.data = &VAR_9[VAR_12].buf[1];
    VAR_14 = FUNC_0(VAR_11, &VAR_13);
   } else {
    VAR_13.cmd = VAR_6;
    VAR_13.value = 0x2000 + (VAR_9[VAR_12].addr >> 1);
    VAR_13.index = 0x0000;
    VAR_13.data_len = VAR_9[VAR_12].len;
    VAR_13.data = &VAR_9[VAR_12].buf[0];
    VAR_14 = FUNC_0(VAR_11, &VAR_13);
   }
   VAR_12 += 1;
  }
  if (VAR_14)
   break;
 }

 FUNC_5(&VAR_11->i2c_mutex);
 return VAR_14 ? VAR_14 : VAR_12;
}
