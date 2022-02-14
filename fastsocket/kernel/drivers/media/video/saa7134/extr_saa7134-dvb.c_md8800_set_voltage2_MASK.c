
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct saa7134_dev {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
typedef scalar_t__ fe_sec_voltage_t ;
struct TYPE_2__ {struct saa7134_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_3, fe_sec_voltage_t VAR_4)
{
 struct saa7134_dev *VAR_5 = VAR_3->dvb->priv;
 u8 VAR_6[2] = { 0x1f, 00 };
 u8 VAR_7;
 struct i2c_msg VAR_8[] = { { .addr = 0x08, .flags = 0, .buf = VAR_6, .len = 1 },
     { .addr = 0x08, .flags = VAR_1, .buf = &VAR_7, .len = 1 } };

 if (FUNC_0(&VAR_5->i2c_adap, VAR_8, 2) != 2)
  return -VAR_0;

 if (VAR_4 == VAR_2)
  VAR_6[1] = VAR_7 | 0x10;
 else
  VAR_6[1] = VAR_7 & 0xef;
 VAR_8[0].len = 2;
 FUNC_0(&VAR_5->i2c_adap, VAR_8, 1);
 return 0;
}
