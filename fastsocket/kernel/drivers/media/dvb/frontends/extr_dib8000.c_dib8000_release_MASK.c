
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int i2c_master; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dib8000_state*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dib8000_state *VAR_1 = VAR_0->demodulator_priv;
 FUNC_0(&VAR_1->i2c_master);
 FUNC_1(VAR_1);
}
