
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qt1010_priv {int frequency; int reg1f_init_val; int reg20_init_val; int reg25_init_val; int bandwidth; } ;
struct TYPE_8__ {int bandwidth; } ;
struct TYPE_9__ {TYPE_2__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_10__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ info; } ;
struct dvb_frontend {TYPE_4__ ops; struct qt1010_priv* tuner_priv; } ;
struct TYPE_11__ {scalar_t__ member_0; int member_1; int member_2; int val; scalar_t__ oper; int reg; } ;
typedef TYPE_5__ qt1010_i2c_oper_t ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct qt1010_priv*) ;
 int FUNC_3 (struct qt1010_priv*,int ,int*) ;
 int FUNC_4 (struct qt1010_priv*,int ,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_8,
        struct dvb_frontend_parameters *VAR_9)
{
 struct qt1010_priv *VAR_10;
 int VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17, VAR_18;
 qt1010_i2c_oper_t VAR_19[48] = {
  { VAR_6, 0x01, 0x80 },
  { VAR_6, 0x02, 0x3f },
  { VAR_6, 0x05, 0xff },
  { VAR_6, 0x06, 0x44 },
  { VAR_6, 0x07, 0xff },
  { VAR_6, 0x08, 0x08 },
  { VAR_6, 0x09, 0xff },
  { VAR_6, 0x0a, 0xff },
  { VAR_6, 0x0b, 0xff },
  { VAR_6, 0x0c, 0xe1 },
  { VAR_6, 0x1a, 0xff },
  { VAR_6, 0x1b, 0x00 },
  { VAR_6, 0x1c, 0x89 },
  { VAR_6, 0x11, 0xff },
  { VAR_6, 0x12, 0xff },
  { VAR_6, 0x22, 0xff },
  { VAR_6, 0x1e, 0x00 },
  { VAR_6, 0x1e, 0xd0 },
  { VAR_4, 0x22, 0xff },
  { VAR_6, 0x1e, 0x00 },
  { VAR_4, 0x05, 0xff },
  { VAR_4, 0x22, 0xff },
  { VAR_6, 0x23, 0xd0 },
  { VAR_6, 0x1e, 0x00 },
  { VAR_6, 0x1e, 0xe0 },
  { VAR_4, 0x23, 0xff },
  { VAR_4, 0x23, 0xff },
  { VAR_6, 0x1e, 0x00 },
  { VAR_6, 0x24, 0xd0 },
  { VAR_6, 0x1e, 0x00 },
  { VAR_6, 0x1e, 0xf0 },
  { VAR_4, 0x24, 0xff },
  { VAR_6, 0x1e, 0x00 },
  { VAR_6, 0x14, 0x7f },
  { VAR_6, 0x15, 0x7f },
  { VAR_6, 0x05, 0xff },
  { VAR_6, 0x06, 0x00 },
  { VAR_6, 0x15, 0x1f },
  { VAR_6, 0x16, 0xff },
  { VAR_6, 0x18, 0xff },
  { VAR_6, 0x1f, 0xff },
  { VAR_6, 0x20, 0xff },
  { VAR_6, 0x21, 0x53 },
  { VAR_6, 0x25, 0xff },
  { VAR_6, 0x26, 0x15 },
  { VAR_6, 0x00, 0xff },
  { VAR_6, 0x02, 0x00 },
  { VAR_6, 0x01, 0x00 }
 };




 VAR_10 = VAR_8->tuner_priv;
 VAR_12 = VAR_9->frequency;
 VAR_13 = (VAR_12 + VAR_3) / VAR_5;
 VAR_12 = (VAR_13 * VAR_5) - VAR_3;
 VAR_14 = (VAR_12 + VAR_3) % 32000000;
 VAR_15 = (VAR_12 + VAR_3) % 4000000;
 VAR_10->bandwidth =
  (VAR_8->ops.info.type == VAR_0) ? VAR_9->u.ofdm.bandwidth : 0;
 VAR_10->frequency = VAR_12;

 if (VAR_8->ops.i2c_gate_ctrl)
  VAR_8->ops.i2c_gate_ctrl(VAR_8, 1);


 if (VAR_12 < 290000000) VAR_18 = 0x14;
 else if (VAR_12 < 610000000) VAR_18 = 0x34;
 else if (VAR_12 < 802000000) VAR_18 = 0x54;
 else VAR_18 = 0x74;


 VAR_19[2].val = VAR_18;


 VAR_19[4].val = (VAR_12 + VAR_3) / 32000000;


 if (VAR_14 < 8000000) VAR_19[6].val = 0x1d;
 else VAR_19[6].val = 0x1c;


 if (VAR_14 < 1*4000000) VAR_19[7].val = 0x09;
 else if (VAR_14 < 2*4000000) VAR_19[7].val = 0x08;
 else if (VAR_14 < 3*4000000) VAR_19[7].val = 0x0f;
 else if (VAR_14 < 4*4000000) VAR_19[7].val = 0x0e;
 else if (VAR_14 < 5*4000000) VAR_19[7].val = 0x0d;
 else if (VAR_14 < 6*4000000) VAR_19[7].val = 0x0c;
 else if (VAR_14 < 7*4000000) VAR_19[7].val = 0x0b;
 else VAR_19[7].val = 0x0a;


 if (VAR_15 < 2000000) VAR_19[8].val = 0x45;
 else VAR_19[8].val = 0x44;


 VAR_17 = 0x78;
 VAR_19[10].val = VAR_17-((VAR_15/VAR_5)*0x08);


 VAR_19[13].val = 0xfd;


 VAR_19[14].val = 0x91;


 if (VAR_12 < 450000000) VAR_19[15].val = 0xd0;
 else if (VAR_12 < 482000000) VAR_19[15].val = 0xd1;
 else if (VAR_12 < 514000000) VAR_19[15].val = 0xd4;
 else if (VAR_12 < 546000000) VAR_19[15].val = 0xd7;
 else if (VAR_12 < 610000000) VAR_19[15].val = 0xda;
 else VAR_19[15].val = 0xd0;


 VAR_19[35].val = (VAR_18 & 0xf0);


 if (VAR_14 < 8000000) VAR_17 = 0x00;
 else if (VAR_14 < 12000000) VAR_17 = 0x01;
 else if (VAR_14 < 16000000) VAR_17 = 0x02;
 else if (VAR_14 < 24000000) VAR_17 = 0x03;
 else if (VAR_14 < 28000000) VAR_17 = 0x04;
 else VAR_17 = 0x05;
 VAR_19[40].val = (VAR_10->reg1f_init_val + 0x0e + VAR_17);


 if (VAR_14 < 8000000) VAR_17 = 0x00;
 else if (VAR_14 < 12000000) VAR_17 = 0x01;
 else if (VAR_14 < 20000000) VAR_17 = 0x02;
 else if (VAR_14 < 24000000) VAR_17 = 0x03;
 else if (VAR_14 < 28000000) VAR_17 = 0x04;
 else VAR_17 = 0x05;
 VAR_19[41].val = (VAR_10->reg20_init_val + 0x0d + VAR_17);


 VAR_19[43].val = VAR_10->reg25_init_val;


 VAR_19[45].val = 0x92;

 FUNC_1("freq:%u 05:%02x 07:%02x 09:%02x 0a:%02x 0b:%02x " "1a:%02x 11:%02x 12:%02x 22:%02x 05:%02x 1f:%02x " "20:%02x 25:%02x 00:%02x", VAR_12, VAR_19[2].val, VAR_19[4].val, VAR_19[6].val, VAR_19[7].val, VAR_19[8].val, VAR_19[10].val, VAR_19[13].val, VAR_19[14].val, VAR_19[15].val, VAR_19[35].val, VAR_19[40].val, VAR_19[41].val, VAR_19[43].val, VAR_19[45].val);






 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_19); VAR_16++) {
  if (VAR_19[VAR_16].oper == VAR_6) {
   VAR_11 = FUNC_4(VAR_10, VAR_19[VAR_16].reg, VAR_19[VAR_16].val);
  } else {
   VAR_11 = FUNC_3(VAR_10, VAR_19[VAR_16].reg, &VAR_17);
  }
  if (VAR_11) return VAR_11;
 }

 if (VAR_7)
  FUNC_2(VAR_10);

 if (VAR_8->ops.i2c_gate_ctrl)
  VAR_8->ops.i2c_gate_ctrl(VAR_8, 0);

 return 0;
}
