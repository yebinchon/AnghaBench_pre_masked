
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bandwidth; int transmission_mode; scalar_t__ constellation; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {scalar_t__ sfn_workaround_active; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dib3000mc_state*,int) ;
 int FUNC_2 (struct dib3000mc_state*,int ) ;
 int FUNC_3 (struct dib3000mc_state*,struct dvb_frontend_parameters*,int ) ;
 int FUNC_4 (struct dib3000mc_state*,int ,int ,int) ;
 int FUNC_5 (struct dib3000mc_state*,int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_1, struct dvb_frontend_parameters *VAR_2)
{
 struct dib3000mc_state *VAR_3 = VAR_1->demodulator_priv;


 FUNC_3(VAR_3, VAR_2, 0);


 if (VAR_3->sfn_workaround_active) {
  FUNC_6("SFN workaround is active\n");
  FUNC_5(VAR_3, 29, 0x1273);
  FUNC_5(VAR_3, 108, 0x4000);
 } else {
  FUNC_5(VAR_3, 29, 0x1073);
  FUNC_5(VAR_3, 108, 0x0000);
 }

 FUNC_2(VAR_3, (u8)VAR_2->u.ofdm.constellation);
 if (VAR_2->u.ofdm.transmission_mode == VAR_0) {
  FUNC_5(VAR_3, 26, 38528);
  FUNC_5(VAR_3, 33, 8);
 } else {
  FUNC_5(VAR_3, 26, 30336);
  FUNC_5(VAR_3, 33, 6);
 }

 if (FUNC_1(VAR_3, 509) & 0x80)
  FUNC_4(VAR_3, VAR_2->u.ofdm.transmission_mode, FUNC_0(VAR_2->u.ofdm.bandwidth), 1);

 return 0;
}
