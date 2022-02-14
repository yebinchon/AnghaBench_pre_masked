
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_dvb_adapter {int fe_param; } ;
struct poseidon {int pm_resume; int pm_suspend; struct pd_dvb_adapter dvb_data; } ;
struct dvb_frontend_parameters {int dummy; } ;
struct dvb_frontend {struct poseidon* demodulator_priv; } ;
typedef int s32 ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_1(struct dvb_frontend *VAR_2)
{
 struct poseidon *VAR_3 = VAR_2->demodulator_priv;
 struct pd_dvb_adapter *VAR_4 = &VAR_3->dvb_data;





 FUNC_0(&VAR_4->fe_param, 0,
   sizeof(struct dvb_frontend_parameters));
 return 0;
}
