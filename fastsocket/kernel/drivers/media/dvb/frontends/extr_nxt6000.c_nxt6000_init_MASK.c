
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxt6000_state {int dummy; } ;
struct dvb_frontend {struct nxt6000_state* demodulator_priv; } ;


 int FUNC_0 (struct nxt6000_state*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0)
{
 struct nxt6000_state* VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(VAR_1);
 FUNC_1(VAR_0);

 return 0;
}
