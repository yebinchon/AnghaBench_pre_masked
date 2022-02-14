
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda8290_priv {int i2c_props; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct tda8290_priv *VAR_2 = VAR_0->analog_demod_priv;

 unsigned char VAR_3[2] = { 0x45, 0xc1 };
 unsigned char VAR_4[2] = { 0x46, 0x00 };
 unsigned char VAR_5[3] = { 0x45, 0x01, 0x00 };
 unsigned char *VAR_6;

 if (VAR_1) {
  VAR_6 = VAR_3;
  FUNC_1(&VAR_2->i2c_props, VAR_6, 2);

  FUNC_0(20);
 } else {
  VAR_6 = VAR_4;
  FUNC_2(&VAR_2->i2c_props, VAR_6, 1, &VAR_6[1], 1);

  VAR_5[2] = VAR_6[1];
  VAR_5[2] &= ~0x04;
  FUNC_1(&VAR_2->i2c_props, VAR_5, 3);
  FUNC_0(5);

  VAR_6[1] |= 0x04;
  FUNC_1(&VAR_2->i2c_props, VAR_6, 2);
 }

 return 0;
}
