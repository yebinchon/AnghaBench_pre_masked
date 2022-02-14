
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct dvb_frontend {TYPE_2__* dvb; } ;
typedef int fe_sec_voltage_t ;
struct TYPE_4__ {struct dvb_usb_adapter* priv; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;



 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, fe_sec_voltage_t VAR_2)
{

 u8 VAR_3;
 int VAR_4;
 struct dvb_usb_adapter *VAR_5 = VAR_1->dvb->priv;

 struct i2c_msg VAR_6 = {
  .addr = 0x99,
  .flags = 0,
  .buf = &VAR_3,
  .len = 1
 };






 switch (VAR_2) {
 case 130:
  VAR_3 = 1;
  VAR_4 = FUNC_0(&VAR_5->dev->i2c_adap, &VAR_6, 1);
  break;

 case 129:
  VAR_3 = 2;
  VAR_4 = FUNC_0(&VAR_5->dev->i2c_adap, &VAR_6, 1);
  break;

 case 128:
  VAR_3 = 0;
  VAR_4 = FUNC_0(&VAR_5->dev->i2c_adap, &VAR_6, 1);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
