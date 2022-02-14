
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int fep; } ;


 int FUNC_0 (struct dvb_frontend_parameters*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0,
      struct dvb_frontend_parameters *VAR_1)
{
 struct dtt200u_fe_state *VAR_2 = VAR_0->demodulator_priv;
 FUNC_0(VAR_1,&VAR_2->fep,sizeof(struct dvb_frontend_parameters));
 return 0;
}
