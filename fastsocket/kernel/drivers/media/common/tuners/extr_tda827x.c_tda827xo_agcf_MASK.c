
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda827x_priv {int i2c_addr; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct dvb_frontend {struct tda827x_priv* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*,struct i2c_msg*,int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda827x_priv *VAR_1 = VAR_0->tuner_priv;
 unsigned char VAR_2[] = { 0x80, 0x0c };
 struct i2c_msg VAR_3 = { .addr = VAR_1->i2c_addr, .flags = 0,
          .buf = VAR_2, .len = 2};

 FUNC_0(VAR_0, &VAR_3, 1);
}
