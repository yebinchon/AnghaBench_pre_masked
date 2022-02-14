
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adap; int addr; } ;
struct tda18271_priv {unsigned char* tda18271_regs; int small_i2c; TYPE_1__ i2c_props; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;
typedef int buf ;


 int FUNC_0 (int) ;




 int VAR_0 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (char*,int,int,int) ;

int FUNC_4(struct dvb_frontend *VAR_1, int VAR_2, int VAR_3)
{
 struct tda18271_priv *VAR_4 = VAR_1->tuner_priv;
 unsigned char *VAR_5 = VAR_4->tda18271_regs;
 unsigned char VAR_6[VAR_0 + 1];
 struct i2c_msg VAR_7 = { .addr = VAR_4->i2c_props.addr, .flags = 0,
          .buf = VAR_6 };
 int VAR_8, VAR_9 = 1, VAR_10;

 FUNC_0((VAR_3 == 0) || (VAR_2 + VAR_3 > sizeof(VAR_6)));


 switch (VAR_4->small_i2c) {
 case 131:
  VAR_10 = 3;
  break;
 case 130:
  VAR_10 = 8;
  break;
 case 129:
  VAR_10 = 16;
  break;
 case 128:
 default:
  VAR_10 = 39;
 }

 FUNC_2(VAR_1, 1);
 while (VAR_3) {
  if (VAR_10 > VAR_3)
   VAR_10 = VAR_3;

  VAR_6[0] = VAR_2;
  for (VAR_8 = 1; VAR_8 <= VAR_10; VAR_8++)
   VAR_6[VAR_8] = VAR_5[VAR_2 - 1 + VAR_8];

  VAR_7.len = VAR_10 + 1;


  VAR_9 = FUNC_1(VAR_4->i2c_props.adap, &VAR_7, 1);
  if (VAR_9 != 1)
   break;

  VAR_2 += VAR_10;
  VAR_3 -= VAR_10;
 }
 FUNC_2(VAR_1, 0);

 if (VAR_9 != 1)
  FUNC_3("ERROR: idx = 0x%x, len = %d, "
   "i2c_transfer returned: %d\n", VAR_2, VAR_10, VAR_9);

 return (VAR_9 == 1 ? 0 : VAR_9);
}
