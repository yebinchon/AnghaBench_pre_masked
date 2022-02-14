
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct qt1010_priv {size_t reg20_init_val; size_t reg25_init_val; size_t reg1f_init_val; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct qt1010_priv* tuner_priv; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int oper; int val; int reg; } ;
typedef TYPE_2__ qt1010_i2c_oper_t ;


 size_t FUNC_0 (TYPE_2__*) ;



 int FUNC_1 (struct qt1010_priv*,int ,int ,int,size_t*) ;
 int FUNC_2 (struct qt1010_priv*,size_t,size_t*) ;
 int FUNC_3 (struct qt1010_priv*,int ,size_t*) ;
 int FUNC_4 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_5 (struct qt1010_priv*,int ,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_0)
{
 struct qt1010_priv *VAR_1 = VAR_0->tuner_priv;
 struct dvb_frontend_parameters VAR_2;
 int VAR_3 = 0;
 u8 VAR_4, VAR_5, *VAR_6 = ((void*)0);

 qt1010_i2c_oper_t VAR_7[] = {
  { 128, 0x01, 0x80 },
  { 128, 0x0d, 0x84 },
  { 128, 0x0e, 0xb7 },
  { 128, 0x2a, 0x23 },
  { 128, 0x2c, 0xdc },
  { 130, 0x25, 0x40 },
  { 130, 0x81, 0xff },
  { 128, 0x2b, 0x70 },
  { 128, 0x2a, 0x23 },
  { 130, 0x26, 0x08 },
  { 130, 0x82, 0xff },
  { 128, 0x05, 0x14 },
  { 128, 0x06, 0x44 },
  { 128, 0x07, 0x28 },
  { 128, 0x08, 0x0b },
  { 128, 0x11, 0xfd },
  { 130, 0x22, 0x0d },
  { 130, 0xd0, 0xff },
  { 128, 0x06, 0x40 },
  { 128, 0x16, 0xf0 },
  { 128, 0x02, 0x38 },
  { 128, 0x03, 0x18 },
  { 128, 0x20, 0xe0 },
  { 130, 0x1f, 0x20 },
  { 130, 0x84, 0xff },
  { 129, 0x20, 0x20 },
  { 128, 0x03, 0x19 },
  { 128, 0x02, 0x3f },
  { 128, 0x21, 0x53 },
  { 129, 0x21, 0xff },
  { 128, 0x11, 0xfd },
  { 128, 0x05, 0x34 },
  { 128, 0x06, 0x44 },
  { 128, 0x08, 0x08 }
 };

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_7); VAR_4++) {
  switch (VAR_7[VAR_4].oper) {
  case 128:
   VAR_3 = FUNC_5(VAR_1, VAR_7[VAR_4].reg,
           VAR_7[VAR_4].val);
   break;
  case 129:
   if (VAR_7[VAR_4].val == 0x20)
    VAR_6 = &VAR_1->reg20_init_val;
   else
    VAR_6 = &VAR_5;
   VAR_3 = FUNC_3(VAR_1, VAR_7[VAR_4].reg, VAR_6);
   break;
  case 130:
   if (VAR_7[VAR_4].val == 0x25)
    VAR_6 = &VAR_1->reg25_init_val;
   else if (VAR_7[VAR_4].val == 0x1f)
    VAR_6 = &VAR_1->reg1f_init_val;
   else
    VAR_6 = &VAR_5;
   VAR_3 = FUNC_1(VAR_1, VAR_7[VAR_4+1].reg,
      VAR_7[VAR_4].reg,
      VAR_7[VAR_4].val, VAR_6);
   VAR_4++;
   break;
  }
  if (VAR_3) return VAR_3;
 }

 for (VAR_4 = 0x31; VAR_4 < 0x3a; VAR_4++)
  if ((VAR_3 = FUNC_2(VAR_1, VAR_4, &VAR_5)))
   return VAR_3;

 VAR_2.frequency = 545000000;

 return FUNC_4(VAR_0, &VAR_2);
}
