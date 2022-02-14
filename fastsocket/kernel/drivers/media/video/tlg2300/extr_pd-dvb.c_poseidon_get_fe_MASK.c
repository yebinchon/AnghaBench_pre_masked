
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_dvb_adapter {int fe_param; } ;
struct poseidon {struct pd_dvb_adapter dvb_data; } ;
struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct poseidon* demodulator_priv; } ;


 int FUNC_0 (struct dvb_frontend_parameters*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
   struct dvb_frontend_parameters *VAR_1)
{
 struct poseidon *VAR_2 = VAR_0->demodulator_priv;
 struct pd_dvb_adapter *VAR_3 = &VAR_2->dvb_data;

 FUNC_0(VAR_1, &VAR_3->fe_param, sizeof(*VAR_1));
 return 0;
}
