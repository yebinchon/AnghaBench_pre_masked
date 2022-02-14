
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int dummy; } ;


 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,int,int) ;

int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dib3000mc_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3 = FUNC_0(VAR_2, 206) & ~(1 << 4);
 VAR_3 |= (VAR_1 << 4);
 return FUNC_1(VAR_2, 206, VAR_3);
}
