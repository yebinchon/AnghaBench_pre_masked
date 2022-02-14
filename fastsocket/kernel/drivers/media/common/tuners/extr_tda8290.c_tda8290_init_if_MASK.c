
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct tda8290_priv {int i2c_props; TYPE_1__ cfg; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; } ;


 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda8290_priv *VAR_1 = VAR_0->analog_demod_priv;

 unsigned char VAR_2[] = { 0x30, 0x6F };
 unsigned char VAR_3[] = { 0x20, 0x01 };
 unsigned char VAR_4[] = { 0x20, 0x0B };

 if ((VAR_1->cfg.config == 1) || (VAR_1->cfg.config == 2))
  FUNC_0(&VAR_1->i2c_props, VAR_3, 2);
 else
  FUNC_0(&VAR_1->i2c_props, VAR_4, 2);
 FUNC_0(&VAR_1->i2c_props, VAR_2, 2);
}
