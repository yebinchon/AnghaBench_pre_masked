
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {struct dib3000mc_config* cfg; } ;
struct dib3000mc_config {int dummy; } ;



void FUNC_0(struct dvb_frontend *VAR_0, struct dib3000mc_config *VAR_1)
{
 struct dib3000mc_state *VAR_2 = VAR_0->demodulator_priv;
 VAR_2->cfg = VAR_1;
}
