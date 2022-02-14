
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int addr; int flags; } ;
struct dvb_usb_adapter {TYPE_3__* fe; TYPE_1__* dev; struct dibusb_state* priv; } ;
struct dibusb_state {int tuner_addr; } ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (TYPE_3__*,int) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct i2c_msg*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_2)
{
 u8 VAR_3[2] = { 0,0 }, VAR_4[1];
 int VAR_5 = 0;
 struct i2c_msg VAR_6[2] = {
  { .flags = 0, .buf = VAR_3, .len = 2 },
  { .flags = VAR_1, .buf = VAR_4, .len = 1 },
 };
 struct dibusb_state *VAR_7 = VAR_2->priv;


 VAR_6[0].addr = VAR_6[1].addr = VAR_7->tuner_addr = 0x60;

 if (VAR_2->fe->ops.i2c_gate_ctrl)
  VAR_2->fe->ops.i2c_gate_ctrl(VAR_2->fe,1);

 if (FUNC_3(&VAR_2->dev->i2c_adap, VAR_6, 2) != 2) {
  FUNC_2("tuner i2c write failed.");
  VAR_5 = -VAR_0;
 }

 if (VAR_2->fe->ops.i2c_gate_ctrl)
  VAR_2->fe->ops.i2c_gate_ctrl(VAR_2->fe,0);

 if (VAR_4[0] == 0xfe) {
  FUNC_4("This device has the Thomson Cable onboard. Which is default.");
  VAR_5 = FUNC_1(VAR_2);
 } else {
  FUNC_4("This device has the Panasonic ENV77H11D5 onboard.");
  VAR_5 = FUNC_0(VAR_2);
 }

 return VAR_5;
}
