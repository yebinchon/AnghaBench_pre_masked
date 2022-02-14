
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
typedef int u32 ;
struct ix2505v_state {int frequency; TYPE_5__* config; } ;
struct TYPE_6__ {int symbol_rate; } ;
struct TYPE_7__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct TYPE_8__ {int frequency_min; int frequency_max; } ;
struct TYPE_9__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_3__ info; } ;
struct dvb_frontend {TYPE_4__ ops; struct ix2505v_state* tuner_priv; } ;
typedef int data ;
struct TYPE_10__ {int tuner_gain; int tuner_chargepump; int min_delay_ms; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (struct ix2505v_state*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1,
  struct dvb_frontend_parameters *VAR_2)
{
 struct ix2505v_state *VAR_3 = VAR_1->tuner_priv;
 u32 VAR_4 = VAR_2->frequency;
 u32 VAR_5 = (VAR_2->u.qpsk.symbol_rate * 27) / 32000;
 u32 VAR_6, VAR_7 , VAR_8, VAR_9;
 int VAR_10 = 0, VAR_11;
 u8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u8 VAR_18[4] = {0};

 if ((VAR_4 < VAR_1->ops.info.frequency_min)
 || (VAR_4 > VAR_1->ops.info.frequency_max))
  return -VAR_0;

 if (VAR_3->config->tuner_gain)
  VAR_12 = (VAR_3->config->tuner_gain < 4)
   ? VAR_3->config->tuner_gain : 0;
 else
  VAR_12 = 0x0;

 if (VAR_3->config->tuner_chargepump)
  VAR_13 = VAR_3->config->tuner_chargepump;
 else
  VAR_13 = 0x3;

 VAR_14 = 8;
 VAR_15 = 32;

 VAR_6 = (VAR_4 * VAR_14) / 40;
 VAR_9 = VAR_6 / VAR_15;
 VAR_7 = VAR_9/100;
 VAR_8 = ((VAR_9 - (VAR_7 * 100)) * VAR_15) / 100;

 VAR_18[0] = ((VAR_12 & 0x3) << 5) | (VAR_7 >> 3);
 VAR_18[1] = (VAR_7 << 5) | (VAR_8 & 0x1f);
 VAR_18[2] = 0x81 | ((VAR_13 & 0x3) << 5) ;

 FUNC_0("Frq=%d x=%d N=%d A=%d\n", VAR_4, VAR_9, VAR_7, VAR_8);

 if (VAR_4 <= 1065000)
  VAR_16 = (6 << 5) | 2;
 else if (VAR_4 <= 1170000)
  VAR_16 = (7 << 5) | 2;
 else if (VAR_4 <= 1300000)
  VAR_16 = (1 << 5);
 else if (VAR_4 <= 1445000)
  VAR_16 = (2 << 5);
 else if (VAR_4 <= 1607000)
  VAR_16 = (3 << 5);
 else if (VAR_4 <= 1778000)
  VAR_16 = (4 << 5);
 else if (VAR_4 <= 1942000)
  VAR_16 = (5 << 5);
 else
  VAR_16 = (6 << 5);

 VAR_18[3] = VAR_16;

 if (VAR_5 <= 10000)
  VAR_17 = 0xc;
 else if (VAR_5 <= 12000)
  VAR_17 = 0x2;
 else if (VAR_5 <= 14000)
  VAR_17 = 0xa;
 else if (VAR_5 <= 16000)
  VAR_17 = 0x6;
 else if (VAR_5 <= 18000)
  VAR_17 = 0xe;
 else if (VAR_5 <= 20000)
  VAR_17 = 0x1;
 else if (VAR_5 <= 22000)
  VAR_17 = 0x9;
 else if (VAR_5 <= 24000)
  VAR_17 = 0x5;
 else if (VAR_5 <= 26000)
  VAR_17 = 0xd;
 else if (VAR_5 <= 28000)
  VAR_17 = 0x3;
  else
  VAR_17 = 0xb;

 FUNC_0("Osc=%x b_w=%x lpf=%x\n", VAR_16, VAR_5, VAR_17);
 FUNC_0("Data 0=[%x%x%x%x]\n", VAR_18[0], VAR_18[1], VAR_18[2], VAR_18[3]);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 VAR_11 = sizeof(VAR_18);

 VAR_10 |= FUNC_1(VAR_3, VAR_18, VAR_11);

 VAR_18[2] |= 0x4;

 VAR_11 = 1;
 VAR_10 |= FUNC_1(VAR_3, &VAR_18[2], VAR_11);

 FUNC_2(10);

 VAR_18[2] |= ((VAR_17 >> 2) & 0x3) << 3;
 VAR_18[3] |= (VAR_17 & 0x3) << 2;

 FUNC_0("Data 2=[%x%x]\n", VAR_18[2], VAR_18[3]);

 VAR_11 = 2;
 VAR_10 |= FUNC_1(VAR_3, &VAR_18[2], VAR_11);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 if (VAR_3->config->min_delay_ms)
  FUNC_2(VAR_3->config->min_delay_ms);

 VAR_3->frequency = VAR_4;

 return VAR_10;
}
