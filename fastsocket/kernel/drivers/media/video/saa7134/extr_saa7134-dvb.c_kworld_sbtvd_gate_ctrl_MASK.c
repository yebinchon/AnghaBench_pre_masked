
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {int i2c_adap; } ;
struct i2c_msg {int addr; unsigned char* buf; int len; int flags; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct saa7134_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_1, int VAR_2)
{
 struct saa7134_dev *VAR_3 = VAR_1->dvb->priv;

 unsigned char VAR_4[] = {0x45, 0x97};
 unsigned char VAR_5[] = {0x45, 0xc1};
 unsigned char VAR_6[] = {0x45, 0x81};
 struct i2c_msg VAR_7 = {.addr = 0x4b, .flags = 0, .buf = VAR_4, .len = 2};

 if (FUNC_0(&VAR_3->i2c_adap, &VAR_7, 1) != 1) {
  FUNC_2("could not access the I2C gate\n");
  return -VAR_0;
 }
 if (VAR_2)
  VAR_7.buf = VAR_5;
 else
  VAR_7.buf = VAR_6;
 if (FUNC_0(&VAR_3->i2c_adap, &VAR_7, 1) != 1) {
  FUNC_2("could not access the I2C gate\n");
  return -VAR_0;
 }
 FUNC_1(20);
 return 0;
}
