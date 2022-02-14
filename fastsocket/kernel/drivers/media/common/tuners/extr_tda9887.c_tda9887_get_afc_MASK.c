
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int i2c_props; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;
typedef int __u8 ;


 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda9887_priv *VAR_1 = VAR_0->analog_demod_priv;
 static int VAR_2[] = {
  -12500, -37500, -62500, -97500,
  -112500, -137500, -162500, -187500,
  187500, 162500, 137500, 112500,
  97500 , 62500, 37500 , 12500
 };
 int VAR_3=0;
 __u8 VAR_4 = 0;

 if (1 == FUNC_0(&VAR_1->i2c_props,&VAR_4,1))
  VAR_3 = VAR_2[(VAR_4>>1)&0x0f];

 return VAR_3;
}
