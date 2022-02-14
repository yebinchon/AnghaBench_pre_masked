
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int rev; int channel_type; int channel_freq; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_2__ phy; int wl; } ;
struct b43_phy_n_iq_comp {int dummy; } ;
struct TYPE_3__ {int * txcal_coeffs_5G; int * txcal_radio_regs_5G; struct b43_phy_n_iq_comp rxcal_coeffs_5G; int * txcal_coeffs_2G; int * txcal_radio_regs_2G; struct b43_phy_n_iq_comp rxcal_coeffs_2G; } ;
struct b43_chanspec {int channel_type; int center_freq; } ;
struct b43_phy_n {scalar_t__ hang_avoid; TYPE_1__ cal_cache; struct b43_chanspec iqcal_chanspec_5G; struct b43_chanspec iqcal_chanspec_2G; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int,struct b43_phy_n_iq_comp*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int,int *) ;
 int FUNC_5 (struct b43_wldev*,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_1)
{
 struct b43_phy_n *VAR_2 = VAR_1->phy.n;

 struct b43_phy_n_iq_comp *VAR_3 = ((void*)0);
 u16 *VAR_4 = ((void*)0);
 struct b43_chanspec *VAR_5;
 u16 *VAR_6 = ((void*)0);

 if (VAR_2->hang_avoid)
  FUNC_3(VAR_1, 1);

 if (FUNC_1(VAR_1->wl) == VAR_0) {
  VAR_3 = &VAR_2->cal_cache.rxcal_coeffs_2G;
  VAR_4 = VAR_2->cal_cache.txcal_radio_regs_2G;
  VAR_5 = &VAR_2->iqcal_chanspec_2G;
  VAR_6 = VAR_2->cal_cache.txcal_coeffs_2G;
 } else {
  VAR_3 = &VAR_2->cal_cache.rxcal_coeffs_5G;
  VAR_4 = VAR_2->cal_cache.txcal_radio_regs_5G;
  VAR_5 = &VAR_2->iqcal_chanspec_5G;
  VAR_6 = VAR_2->cal_cache.txcal_coeffs_5G;
 }

 FUNC_2(VAR_1, 0, VAR_3);

 if (VAR_1->phy.rev >= 3) {
  VAR_4[0] = FUNC_5(VAR_1, 0x2021);
  VAR_4[1] = FUNC_5(VAR_1, 0x2022);
  VAR_4[2] = FUNC_5(VAR_1, 0x3021);
  VAR_4[3] = FUNC_5(VAR_1, 0x3022);
  VAR_4[4] = FUNC_5(VAR_1, 0x2023);
  VAR_4[5] = FUNC_5(VAR_1, 0x2024);
  VAR_4[6] = FUNC_5(VAR_1, 0x3023);
  VAR_4[7] = FUNC_5(VAR_1, 0x3024);
 } else {
  VAR_4[0] = FUNC_5(VAR_1, 0x8B);
  VAR_4[1] = FUNC_5(VAR_1, 0xBA);
  VAR_4[2] = FUNC_5(VAR_1, 0x8D);
  VAR_4[3] = FUNC_5(VAR_1, 0xBC);
 }
 VAR_5->center_freq = VAR_1->phy.channel_freq;
 VAR_5->channel_type = VAR_1->phy.channel_type;
 FUNC_4(VAR_1, FUNC_0(15, 80), 8, VAR_6);

 if (VAR_2->hang_avoid)
  FUNC_3(VAR_1, 0);
}
