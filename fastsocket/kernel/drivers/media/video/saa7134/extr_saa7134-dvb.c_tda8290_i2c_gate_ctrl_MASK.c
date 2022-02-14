
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tda1004x_state {int i2c; TYPE_2__* config; } ;
struct saa7134_dev {int dummy; } ;
struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct dvb_frontend {TYPE_1__* dvb; struct tda1004x_state* demodulator_priv; } ;
struct TYPE_4__ {int i2c_gate; } ;
struct TYPE_3__ {struct saa7134_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3( struct dvb_frontend* VAR_1, int VAR_2)
{
 struct tda1004x_state *VAR_3 = VAR_1->demodulator_priv;

 u8 VAR_4 = VAR_3->config->i2c_gate;
 static u8 VAR_5[] = { 0x21, 0xc0};
 static u8 VAR_6[] = { 0x21, 0x80};
 struct i2c_msg VAR_7 = {.addr = VAR_4,.flags = 0, .len = 2};
 if (VAR_2) {
  VAR_7.buf = VAR_5;
 } else {
  VAR_7.buf = VAR_6;
 }
 if (FUNC_0(VAR_3->i2c, &VAR_7, 1) != 1) {
  struct saa7134_dev *VAR_8 = VAR_1->dvb->priv;
  FUNC_2("could not access tda8290 I2C gate\n");
  return -VAR_0;
 }
 FUNC_1(20);
 return 0;
}
