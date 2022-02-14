
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8290_priv {int i2c_props; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 int FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int ) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_6(struct dvb_frontend *VAR_0)
{
 struct tda8290_priv *VAR_1 = VAR_0->analog_demod_priv;

 static unsigned char VAR_2[] = { 0x33, 0x14 };
 static unsigned char VAR_3[] = { 0x34, 0x00 };
 static unsigned char VAR_4[] = { 0x3e, 0x63 };
 static unsigned char VAR_5[] = { 0x38, 0x23 };
 static unsigned char VAR_6[] = { 0x3f, 0x01 };
 static unsigned char VAR_7[] = { 0x42, 0x61 };
 static unsigned char VAR_8[] = { 0x44, 0x0b };

 FUNC_2(VAR_0, 1);

 FUNC_3(VAR_0, 0);
 FUNC_4(VAR_0);

 FUNC_5(&VAR_1->i2c_props, VAR_2, 2);
 FUNC_5(&VAR_1->i2c_props, VAR_3, 2);
 FUNC_5(&VAR_1->i2c_props, VAR_4, 2);
 FUNC_5(&VAR_1->i2c_props, VAR_5, 2);
 FUNC_5(&VAR_1->i2c_props, VAR_6, 2);
 FUNC_5(&VAR_1->i2c_props, VAR_7, 2);
 FUNC_5(&VAR_1->i2c_props, VAR_8, 2);

 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0, 0);
}
