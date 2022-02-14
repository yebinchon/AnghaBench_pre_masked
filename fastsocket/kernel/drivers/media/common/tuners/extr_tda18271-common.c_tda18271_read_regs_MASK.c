
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adap; int addr; } ;
struct tda18271_priv {unsigned char* tda18271_regs; TYPE_1__ i2c_props; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct dvb_frontend {struct tda18271_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (char*,int) ;

int FUNC_4(struct dvb_frontend *VAR_3)
{
 struct tda18271_priv *VAR_4 = VAR_3->tuner_priv;
 unsigned char *VAR_5 = VAR_4->tda18271_regs;
 unsigned char VAR_6 = 0x00;
 int VAR_7;
 struct i2c_msg VAR_8[] = {
  { .addr = VAR_4->i2c_props.addr, .flags = 0,
    .buf = &VAR_6, .len = 1 },
  { .addr = VAR_4->i2c_props.addr, .flags = VAR_1,
    .buf = VAR_5, .len = 16 }
 };

 FUNC_2(VAR_3, 1);


 VAR_7 = FUNC_0(VAR_4->i2c_props.adap, VAR_8, 2);

 FUNC_2(VAR_3, 0);

 if (VAR_7 != 2)
  FUNC_3("ERROR: i2c_transfer returned: %d\n", VAR_7);

 if (VAR_2 & VAR_0)
  FUNC_1(VAR_3, 0);

 return (VAR_7 == 2 ? 0 : VAR_7);
}
