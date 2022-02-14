
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int dummy; } ;


 int FUNC_0 (struct dib3000mc_state*,int,int) ;

int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1, int VAR_2,int VAR_3)
{
 struct dib3000mc_state *VAR_4 = VAR_0->demodulator_priv;
 FUNC_0(VAR_4, 212 + VAR_1, VAR_3 ? (1 << 13) | VAR_2 : 0);
 return 0;
}
