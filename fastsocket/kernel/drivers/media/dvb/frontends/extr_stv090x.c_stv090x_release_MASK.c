
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv090x_state {scalar_t__ num_used; struct stv090x_state* internal; } ;
struct dvb_frontend {struct stv090x_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct stv090x_state*) ;
 int FUNC_2 (struct stv090x_state*) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct stv090x_state *VAR_2 = VAR_1->demodulator_priv;

 VAR_2->internal->num_used--;
 if (VAR_2->internal->num_used <= 0) {

  FUNC_0(VAR_0, 1, "Actually removing");

  FUNC_2(VAR_2->internal);
  FUNC_1(VAR_2->internal);
 }

 FUNC_1(VAR_2);
}
