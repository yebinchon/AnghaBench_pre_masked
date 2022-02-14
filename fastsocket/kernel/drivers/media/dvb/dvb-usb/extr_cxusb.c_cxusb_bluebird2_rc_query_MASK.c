
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct i2c_msg {int addr; scalar_t__* buf; int len; int flags; } ;
struct dvb_usb_rc_key {int event; } ;
struct TYPE_2__ {int rc_key_map_size; struct dvb_usb_rc_key* rc_key_map; } ;
struct dvb_usb_device {TYPE_1__ props; int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 scalar_t__ FUNC_1 (struct dvb_usb_rc_key*) ;
 scalar_t__ FUNC_2 (struct dvb_usb_rc_key*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_3, u32 *VAR_4,
        int *VAR_5)
{
 struct dvb_usb_rc_key *VAR_6 = VAR_3->props.rc_key_map;
 u8 VAR_7[4];
 int VAR_8;
 struct i2c_msg VAR_9 = { .addr = 0x6b, .flags = VAR_0,
          .buf = VAR_7, .len = 4 };

 *VAR_4 = 0;
 *VAR_5 = VAR_2;

 if (FUNC_0(&VAR_3->i2c_adap, &VAR_9, 1) != 1)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_3->props.rc_key_map_size; VAR_8++) {
  if (FUNC_1(&VAR_6[VAR_8]) == VAR_7[1] &&
      FUNC_2(&VAR_6[VAR_8]) == VAR_7[2]) {
   *VAR_4 = VAR_6[VAR_8].event;
   *VAR_5 = VAR_1;

   return 0;
  }
 }

 return 0;
}
