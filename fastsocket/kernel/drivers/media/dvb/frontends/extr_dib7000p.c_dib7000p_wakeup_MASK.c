
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib7000p_state*,int ) ;
 int FUNC_1 (struct dib7000p_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2)
{
 struct dib7000p_state *VAR_3 = VAR_2->demodulator_priv;
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_1);
 return 0;
}
