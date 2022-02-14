
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0299_state {scalar_t__ initialised; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0299_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0)
{
 struct stv0299_state* VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(VAR_1, 0x02, 0x80);
 VAR_1->initialised = 0;

 return 0;
}
