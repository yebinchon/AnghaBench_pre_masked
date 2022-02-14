
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int tuner_buf ;
struct ttusb {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_6__ {int bandwidth; } ;
struct TYPE_7__ {TYPE_2__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct TYPE_8__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_4__ ops; TYPE_1__* dvb; } ;
struct TYPE_5__ {scalar_t__ priv; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend* VAR_2, struct dvb_frontend_parameters* VAR_3)
{
 struct ttusb* VAR_4 = (struct ttusb*) VAR_2->dvb->priv;
 u8 VAR_5[4];
 struct i2c_msg VAR_6 = {.addr=0x60, .flags=0, .buf=VAR_5, .len=sizeof(VAR_5) };
 int VAR_7 = 0;
 u8 VAR_8, VAR_9, VAR_10;


 VAR_7 = VAR_3->frequency + 36130000;
 if (VAR_7 < 87000000) return -VAR_0;
 else if (VAR_7 < 130000000) VAR_9 = 3;
 else if (VAR_7 < 160000000) VAR_9 = 5;
 else if (VAR_7 < 200000000) VAR_9 = 6;
 else if (VAR_7 < 290000000) VAR_9 = 3;
 else if (VAR_7 < 420000000) VAR_9 = 5;
 else if (VAR_7 < 480000000) VAR_9 = 6;
 else if (VAR_7 < 620000000) VAR_9 = 3;
 else if (VAR_7 < 830000000) VAR_9 = 5;
 else if (VAR_7 < 895000000) VAR_9 = 7;
 else return -VAR_0;


 if (VAR_3->frequency < 49000000) return -VAR_0;
 else if (VAR_3->frequency < 159000000) VAR_8 = 1;
 else if (VAR_3->frequency < 444000000) VAR_8 = 2;
 else if (VAR_3->frequency < 861000000) VAR_8 = 4;
 else return -VAR_0;


 switch (VAR_3->u.ofdm.bandwidth) {
 case 130:
  FUNC_3(VAR_2, 0x0C, 0);
  VAR_10 = 0;
  break;

 case 129:
  FUNC_3(VAR_2, 0x0C, 0);
  VAR_10 = 0;
  break;

 case 128:
  FUNC_3(VAR_2, 0x0C, 0xFF);
  VAR_10 = 1;
  break;

 default:
  return -VAR_0;
 }



 VAR_7 = (((VAR_3->frequency / 1000) * 6) + 217280) / 1000;


 VAR_5[0] = VAR_7 >> 8;
 VAR_5[1] = VAR_7 & 0xff;
 VAR_5[2] = 0xca;
 VAR_5[3] = (VAR_9 << 5) | (VAR_10 << 3) | VAR_8;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);
 if (FUNC_0(&VAR_4->i2c_adap, &VAR_6, 1) != 1)
  return -VAR_1;

 FUNC_1(1);
 return 0;
}
