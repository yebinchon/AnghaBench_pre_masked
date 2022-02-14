
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; int len; int addr; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int,int,char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2, int VAR_3, u16 VAR_4,
        int VAR_5)
{
 u8 VAR_6[3];
 struct i2c_msg VAR_7[] = {
  {.addr = VAR_0,.buf = VAR_6,.len = 3},
 };
 if (VAR_1)
  FUNC_1("pidfilter index: %d pid: %d %s", VAR_3, VAR_4,
   VAR_5 ? "on" : "off");
 VAR_6[0] = (2 * VAR_3) + 4;
 VAR_6[1] = VAR_5 ? (VAR_4 & 0xff) : (0x00);
 VAR_6[2] = VAR_5 ? ((VAR_4 >> 8) & 0xff) : (0x00);
 FUNC_0(&VAR_2->dev->i2c_adap, VAR_7, 1);
 return 0;
}
