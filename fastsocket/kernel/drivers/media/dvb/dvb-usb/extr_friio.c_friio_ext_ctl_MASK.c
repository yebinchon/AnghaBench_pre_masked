
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct dvb_usb_adapter {TYPE_1__* dev; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_4,
    u32 VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct i2c_msg VAR_9;
 u8 VAR_10[2];
 u32 VAR_11;
 u8 VAR_12 = (VAR_6) ? VAR_2 : 0;

 VAR_9.addr = 0x00;
 VAR_9.flags = 0;
 VAR_9.len = 2;
 VAR_9.buf = VAR_10;

 VAR_10[0] = 0x00;


 VAR_10[1] = VAR_12 | VAR_1 | VAR_3;
 VAR_8 = FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);
 VAR_10[1] |= VAR_0;
 VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);

 VAR_10[1] = VAR_12 | VAR_3;
 VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);
 VAR_10[1] |= VAR_0;
 VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);


 VAR_11 = 1 << 31;
 for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
  VAR_10[1] = VAR_12 | VAR_3;
  if (VAR_5 & VAR_11)
   VAR_10[1] |= VAR_1;
  VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);
  VAR_10[1] |= VAR_0;
  VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);
  VAR_11 >>= 1;
 }


 VAR_10[1] = VAR_12;
 VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);
 VAR_10[1] |= VAR_0;
 VAR_8 += FUNC_0(&VAR_4->dev->i2c_adap, &VAR_9, 1);

 return (VAR_8 == 70);
}
