
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {int standby; int std; int audmode; int mode; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;
struct analog_parameters {int std; int audmode; int mode; } ;


 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0,
          struct analog_parameters *VAR_1)
{
 struct tda9887_priv *VAR_2 = VAR_0->analog_demod_priv;

 VAR_2->standby = 0;
 VAR_2->mode = VAR_1->mode;
 VAR_2->audmode = VAR_1->audmode;
 VAR_2->std = VAR_1->std;
 FUNC_0(VAR_0);
}
