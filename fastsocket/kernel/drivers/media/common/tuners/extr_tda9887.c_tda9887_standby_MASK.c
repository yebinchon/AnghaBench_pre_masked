
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int standby; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tda9887_priv *VAR_1 = VAR_0->analog_demod_priv;

 VAR_1->standby = 1;

 FUNC_0(VAR_0);
}
