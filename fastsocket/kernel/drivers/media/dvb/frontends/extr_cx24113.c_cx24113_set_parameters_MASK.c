
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24113_state {int icp_mode; int icp_man; int icp_dig; int prescaler_mode; int icp_auto_low; int icp_auto_mlow; int icp_auto_mhi; int icp_auto_hi; scalar_t__ rev; int lna_gain; int rfvga_bias_ctrl; int acp_on; int bs_delay; int vco_shift; int vco_band; int vco_mode; int bs_freqcnt; int bs_rdiv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24113_state*,int) ;
 int FUNC_1 (struct cx24113_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct cx24113_state *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2, 0x10) & 0x82;
 VAR_3 |= VAR_2->icp_mode;
 VAR_3 |= VAR_2->icp_man << 4;
 VAR_3 |= VAR_2->icp_dig << 2;
 VAR_3 |= VAR_2->prescaler_mode << 5;
 FUNC_1(VAR_2, 0x10, VAR_3);

 VAR_3 = (VAR_2->icp_auto_low << 0) | (VAR_2->icp_auto_mlow << 2)
  | (VAR_2->icp_auto_mhi << 4) | (VAR_2->icp_auto_hi << 6);
 FUNC_1(VAR_2, 0x11, VAR_3);

 if (VAR_2->rev == VAR_0) {
  VAR_3 = FUNC_0(VAR_2, 0x20) & 0xec;
  VAR_3 |= VAR_2->lna_gain;
  VAR_3 |= VAR_2->rfvga_bias_ctrl << 4;
  FUNC_1(VAR_2, 0x20, VAR_3);
 }

 VAR_3 = FUNC_0(VAR_2, 0x12) & 0x03;
 VAR_3 |= VAR_2->acp_on << 2;
 VAR_3 |= VAR_2->bs_delay << 4;
 FUNC_1(VAR_2, 0x12, VAR_3);

 VAR_3 = FUNC_0(VAR_2, 0x18) & 0x40;
 VAR_3 |= VAR_2->vco_shift;
 if (VAR_2->vco_band == VAR_1)
  VAR_3 |= (1 << 7);
 else
  VAR_3 |= (VAR_2->vco_band << 1);
 FUNC_1(VAR_2, 0x18, VAR_3);

 VAR_3 = FUNC_0(VAR_2, 0x14) & 0x20;
 VAR_3 |= (VAR_2->vco_mode << 6) | ((VAR_2->bs_freqcnt >> 8) & 0x1f);
 FUNC_1(VAR_2, 0x14, VAR_3);
 FUNC_1(VAR_2, 0x15, (VAR_2->bs_freqcnt & 0xff));

 FUNC_1(VAR_2, 0x16, (VAR_2->bs_rdiv >> 4) & 0xff);
 VAR_3 = (FUNC_0(VAR_2, 0x17) & 0x0f) |
  ((VAR_2->bs_rdiv & 0x0f) << 4);
 FUNC_1(VAR_2, 0x17, VAR_3);
}
