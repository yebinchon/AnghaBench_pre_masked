
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct dtt200u_fe_state* demodulator_priv; } ;
struct dtt200u_fe_state {int d; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_1)
{
 struct dtt200u_fe_state *VAR_2 = VAR_1->demodulator_priv;
 u8 VAR_3 = VAR_0;
 return FUNC_0(VAR_2->d,&VAR_3,1);
}
