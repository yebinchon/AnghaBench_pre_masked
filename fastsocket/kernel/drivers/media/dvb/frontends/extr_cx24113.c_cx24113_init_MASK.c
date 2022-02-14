
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24113_state* tuner_priv; } ;
struct cx24113_state {int tuner_gain_thres; int gain_level; int acp_on; int bs_delay; int bs_freqcnt; int bs_rdiv; int rfvga_bias_ctrl; int Fwindow_enabled; TYPE_1__* config; int lna_gain; scalar_t__ prescaler_mode; int vco_band; scalar_t__ vco_shift; scalar_t__ vco_mode; int icp_man; void* icp_dig; void* icp_auto_low; void* icp_auto_mlow; void* icp_auto_mhi; void* icp_auto_hi; scalar_t__ icp_mode; } ;
struct TYPE_2__ {int xtal_khz; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int) ;
 int FUNC_2 (struct cx24113_state*,int ) ;
 int FUNC_3 (struct cx24113_state*,int) ;
 int FUNC_4 (struct cx24113_state*,int) ;
 int FUNC_5 (struct cx24113_state*,int) ;
 int FUNC_6 (struct cx24113_state*) ;
 int FUNC_7 (struct cx24113_state*,int,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_6)
{
 struct cx24113_state *VAR_7 = VAR_6->tuner_priv;
 int VAR_8;

 VAR_7->tuner_gain_thres = -50;
 VAR_7->gain_level = 255;
 VAR_7->icp_mode = 0;

 if (VAR_7->config->xtal_khz < 11000) {
  VAR_7->icp_auto_hi = VAR_3;
  VAR_7->icp_auto_mhi = VAR_3;
  VAR_7->icp_auto_mlow = VAR_2;
  VAR_7->icp_auto_low = VAR_2;
 } else {
  VAR_7->icp_auto_hi = VAR_3;
  VAR_7->icp_auto_mhi = VAR_3;
  VAR_7->icp_auto_mlow = VAR_2;
  VAR_7->icp_auto_low = VAR_1;
 }

 VAR_7->icp_dig = VAR_2;
 VAR_7->icp_man = VAR_0;
 VAR_7->acp_on = 1;
 VAR_7->vco_mode = 0;
 VAR_7->vco_shift = 0;
 VAR_7->vco_band = VAR_5;
 VAR_7->bs_delay = 8;
 VAR_7->bs_freqcnt = 0x0fff;
 VAR_7->bs_rdiv = 0x0fff;
 VAR_7->prescaler_mode = 0;
 VAR_7->lna_gain = VAR_4;
 VAR_7->rfvga_bias_ctrl = 1;
 VAR_7->Fwindow_enabled = 1;

 FUNC_2(VAR_7, 0);
 FUNC_0(VAR_7, 0x3d);
 FUNC_6(VAR_7);

 FUNC_5(VAR_7, -30);

 FUNC_3(VAR_7, 18025);
 FUNC_4(VAR_7, 1);

 if (VAR_7->config->xtal_khz >= 40000)
  VAR_8 = FUNC_7(VAR_7, 0x02,
   (FUNC_1(VAR_7, 0x02) & 0xfb) | (1 << 2));
 else
  VAR_8 = FUNC_7(VAR_7, 0x02,
   (FUNC_1(VAR_7, 0x02) & 0xfb) | (0 << 2));

 return VAR_8;
}
