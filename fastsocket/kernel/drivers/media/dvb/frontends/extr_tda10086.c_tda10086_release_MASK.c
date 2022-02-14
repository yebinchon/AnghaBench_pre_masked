
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10086_state {int dummy; } ;
struct dvb_frontend {struct tda10086_state* demodulator_priv; } ;


 int FUNC_0 (struct tda10086_state*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend* VAR_0)
{
 struct tda10086_state *VAR_1 = VAR_0->demodulator_priv;
 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
