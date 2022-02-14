
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int addr; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2, int VAR_3)
{
 static u8 VAR_4[2] = { 0xff, 0x03 };
 static u8 VAR_5[2] = { 0xff, 0x00 };
 struct i2c_msg VAR_6[] = {
  {.addr = VAR_0,.buf = VAR_3 ? VAR_4 : VAR_5,.len = 2},
 };
 if (VAR_1)
  FUNC_1("streaming %s", VAR_3 ? "on" : "off");
 FUNC_0(&VAR_2->dev->i2c_adap, VAR_6, 1);
 return 0;
}
