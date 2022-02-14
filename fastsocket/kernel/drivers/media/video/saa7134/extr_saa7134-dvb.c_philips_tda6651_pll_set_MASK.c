
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int tuner_buf ;
struct tda1004x_state {TYPE_2__* config; } ;
struct saa7134_dev {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_8__ {int bandwidth; } ;
struct TYPE_9__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_4__ u; } ;
struct TYPE_10__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_5__ ops; struct tda1004x_state* demodulator_priv; TYPE_1__* dvb; } ;
struct TYPE_7__ {int tuner_address; } ;
struct TYPE_6__ {struct saa7134_dev* priv; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2, struct dvb_frontend_parameters *VAR_3)
{
 struct saa7134_dev *VAR_4 = VAR_2->dvb->priv;
 struct tda1004x_state *VAR_5 = VAR_2->demodulator_priv;
 u8 VAR_6 = VAR_5->config->tuner_address;
 u8 VAR_7[4];
 struct i2c_msg VAR_8 = {.addr = VAR_6,.flags = 0,.buf = VAR_7,.len =
   sizeof(VAR_7) };
 int VAR_9 = 0;
 u8 VAR_10, VAR_11, VAR_12;


 VAR_9 = VAR_3->frequency + 36166000;
 if (VAR_9 < 87000000)
  return -VAR_0;
 else if (VAR_9 < 130000000)
  VAR_11 = 3;
 else if (VAR_9 < 160000000)
  VAR_11 = 5;
 else if (VAR_9 < 200000000)
  VAR_11 = 6;
 else if (VAR_9 < 290000000)
  VAR_11 = 3;
 else if (VAR_9 < 420000000)
  VAR_11 = 5;
 else if (VAR_9 < 480000000)
  VAR_11 = 6;
 else if (VAR_9 < 620000000)
  VAR_11 = 3;
 else if (VAR_9 < 830000000)
  VAR_11 = 5;
 else if (VAR_9 < 895000000)
  VAR_11 = 7;
 else
  return -VAR_0;


 if (VAR_3->frequency < 49000000)
  return -VAR_0;
 else if (VAR_3->frequency < 161000000)
  VAR_10 = 1;
 else if (VAR_3->frequency < 444000000)
  VAR_10 = 2;
 else if (VAR_3->frequency < 861000000)
  VAR_10 = 4;
 else
  return -VAR_0;


 switch (VAR_3->u.ofdm.bandwidth) {
 case 130:
  VAR_12 = 0;
  break;

 case 129:
  VAR_12 = 0;
  break;

 case 128:
  VAR_12 = 1;
  break;

 default:
  return -VAR_0;
 }




 VAR_9 = (((VAR_3->frequency / 1000) * 6) + 217496) / 1000;


 VAR_7[0] = (VAR_9 >> 8) & 0x7f;
 VAR_7[1] = VAR_9 & 0xff;
 VAR_7[2] = 0xca;
 VAR_7[3] = (VAR_11 << 5) | (VAR_12 << 3) | VAR_10;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 if (FUNC_0(&VAR_4->i2c_adap, &VAR_8, 1) != 1) {
  FUNC_3("could not write to tuner at addr: 0x%02x\n",
   VAR_6 << 1);
  return -VAR_1;
 }
 FUNC_1(1);
 return 0;
}
