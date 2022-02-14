
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int ,int ,int ) ;

int FUNC_1(struct dvb_frontend *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct dib8000_state *VAR_4 = VAR_0->demodulator_priv;
 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
