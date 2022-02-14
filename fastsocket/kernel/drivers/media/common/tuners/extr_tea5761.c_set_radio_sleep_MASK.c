
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5761_priv {int standby; int frequency; } ;
struct dvb_frontend {struct tea5761_priv* analog_demod_priv; } ;


 int FUNC_0 (struct dvb_frontend*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct tea5761_priv *VAR_1 = VAR_0->analog_demod_priv;

 VAR_1->standby = 1;

 return FUNC_0(VAR_0, VAR_1->frequency, 0);
}
