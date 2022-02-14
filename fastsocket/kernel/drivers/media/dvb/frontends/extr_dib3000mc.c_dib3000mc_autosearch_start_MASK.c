
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ hierarchy_information; void* code_rate_LP; void* code_rate_HP; int constellation; int guard_interval; int transmission_mode; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (struct dib3000mc_state*,struct dvb_frontend_parameters*,int) ;
 int FUNC_2 (struct dib3000mc_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4, struct dvb_frontend_parameters *VAR_5)
{
 struct dib3000mc_state *VAR_6 = VAR_4->demodulator_priv;
 u16 VAR_7;

 struct dvb_frontend_parameters VAR_8;

 VAR_8 = *VAR_5;




 VAR_8.u.ofdm.transmission_mode = VAR_3;
 VAR_8.u.ofdm.guard_interval = VAR_1;
 VAR_8.u.ofdm.constellation = VAR_2;
 VAR_8.u.ofdm.code_rate_HP = VAR_0;
 VAR_8.u.ofdm.code_rate_LP = VAR_0;
 VAR_8.u.ofdm.hierarchy_information = 0;

 FUNC_1(VAR_6, &VAR_8, 11);

 VAR_7 = FUNC_0(VAR_6, 0);
 FUNC_2(VAR_6, 0, VAR_7 | (1 << 8));
 FUNC_0(VAR_6, 511);
 FUNC_2(VAR_6, 0, VAR_7);

 return 0;
}
