
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s921_state {int currentfreq; } ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {struct s921_state* demodulator_priv; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0,
 struct dvb_frontend_parameters *VAR_1)
{
 struct s921_state *VAR_2 = VAR_0->demodulator_priv;


 VAR_1->frequency = VAR_2->currentfreq;

 return 0;
}
