
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mt2060_priv {int if1_freq; int frequency; int bandwidth; } ;
struct TYPE_6__ {int bandwidth; } ;
struct TYPE_7__ {TYPE_2__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_8__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ info; } ;
struct dvb_frontend {TYPE_4__ ops; struct mt2060_priv* tuner_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mt2060_priv*,int ,int*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct mt2060_priv*,int*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_6, struct dvb_frontend_parameters *VAR_7)
{
 struct mt2060_priv *VAR_8;
 int VAR_9=0;
 int VAR_10=0;
 u32 VAR_11;
 u8 VAR_12;
 u32 VAR_13,VAR_14;
 u32 VAR_15,VAR_16,VAR_17,VAR_18;
 u8 VAR_19[8];
 u32 VAR_20;

 VAR_8 = VAR_6->tuner_priv;

 VAR_20 = VAR_8->if1_freq;
 VAR_19[0] = VAR_3;
 VAR_19[1] = 0xFF;

 if (VAR_6->ops.i2c_gate_ctrl)
  VAR_6->ops.i2c_gate_ctrl(VAR_6, 1);

 FUNC_4(VAR_8,VAR_19,2);

 VAR_11 = VAR_7->frequency / 1000;
 VAR_8->bandwidth = (VAR_6->ops.info.type == VAR_0) ? VAR_7->u.ofdm.bandwidth : 0;

 VAR_13 = VAR_11 + VAR_20 * 1000;
 VAR_13 = (VAR_13 / 250) * 250;
 VAR_14 = VAR_13 - VAR_11 - VAR_2;

 VAR_14 = ((VAR_14 + 25) / 50) * 50;
 VAR_8->frequency = (VAR_13 - VAR_14 - VAR_2) * 1000,
 VAR_16 = VAR_13 / (VAR_1 / 64);
 VAR_15 = VAR_16 / 64;
 VAR_16 &= 0x3f;


 VAR_18 = VAR_14 * 64 / (VAR_1 / 128);
 VAR_17 = VAR_18 / 8192;
 VAR_18 &= 0x1fff;

 if (VAR_11 <= 95000) VAR_12 = 0xB0; else
 if (VAR_11 <= 180000) VAR_12 = 0xA0; else
 if (VAR_11 <= 260000) VAR_12 = 0x90; else
 if (VAR_11 <= 335000) VAR_12 = 0x80; else
 if (VAR_11 <= 425000) VAR_12 = 0x70; else
 if (VAR_11 <= 480000) VAR_12 = 0x60; else
 if (VAR_11 <= 570000) VAR_12 = 0x50; else
 if (VAR_11 <= 645000) VAR_12 = 0x40; else
 if (VAR_11 <= 730000) VAR_12 = 0x30; else
 if (VAR_11 <= 810000) VAR_12 = 0x20; else VAR_12 = 0x10;

 VAR_19[0] = VAR_4;
 VAR_19[1] = VAR_12 | ((VAR_16 >>2) & 0x0F);
 VAR_19[2] = VAR_15;
 VAR_19[3] = (VAR_18 & 0x0F) | ((VAR_16 & 3) << 4);
 VAR_19[4] = VAR_18 >> 4;
 VAR_19[5] = ((VAR_18 >>12) & 1) | (VAR_17 << 1);

 FUNC_0("IF1: %dMHz",(int)VAR_20);
 FUNC_0("PLL freq=%dkHz  f_lo1=%dkHz  f_lo2=%dkHz",(int)VAR_11,(int)VAR_13,(int)VAR_14);
 FUNC_0("PLL div1=%d  num1=%d  div2=%d  num2=%d",(int)VAR_15,(int)VAR_16,(int)VAR_17,(int)VAR_18);
 FUNC_0("PLL [1..5]: %2x %2x %2x %2x %2x",(int)VAR_19[1],(int)VAR_19[2],(int)VAR_19[3],(int)VAR_19[4],(int)VAR_19[5]);

 FUNC_4(VAR_8,VAR_19,6);


 VAR_10 = 0;
 do {
  FUNC_2(VAR_8,VAR_5,VAR_19);
  if ((VAR_19[0] & 0x88)==0x88)
   break;
  FUNC_1(4);
  VAR_10++;
 } while (VAR_10<10);

 if (VAR_6->ops.i2c_gate_ctrl)
  VAR_6->ops.i2c_gate_ctrl(VAR_6, 0);

 return VAR_9;
}
