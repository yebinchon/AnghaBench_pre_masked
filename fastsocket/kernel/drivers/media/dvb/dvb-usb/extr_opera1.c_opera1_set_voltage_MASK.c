
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int addr; int flags; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct dvb_frontend {TYPE_2__* dvb; } ;
typedef scalar_t__ fe_sec_voltage_t ;
struct TYPE_4__ {scalar_t__ priv; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3, fe_sec_voltage_t VAR_4)
{
 static u8 VAR_5[1]={0x00};
 static u8 VAR_6[1]={0x01};
 struct i2c_msg VAR_7[] = {
  {.addr = VAR_0,.flags = 0,.buf = VAR_5,.len = 1},
 };
 struct dvb_usb_adapter *VAR_8 =
     (struct dvb_usb_adapter *)(VAR_3->dvb->priv);
 if (VAR_4 == VAR_2) {
  VAR_7[0].addr = VAR_1;
  VAR_7[0].buf = VAR_6;
 }
 FUNC_0(&VAR_8->dev->i2c_adap, VAR_7, 1);
 return 0;
}
