
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a20s_state {int dummy; } ;
struct dvb_frontend {struct mb86a20s_state* demodulator_priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct mb86a20s_state*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct mb86a20s_state *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0("\n");

 FUNC_1(VAR_1);
}
