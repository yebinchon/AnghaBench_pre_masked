
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_4__ phy; int wl; } ;
struct b43_phy_n_iq_comp {int dummy; } ;
struct TYPE_7__ {struct b43_phy_n_iq_comp rxcal_coeffs_5G; scalar_t__* txcal_radio_regs_5G; struct b43_phy_n_iq_comp rxcal_coeffs_2G; scalar_t__* txcal_radio_regs_2G; scalar_t__* txcal_coeffs_5G; scalar_t__* txcal_coeffs_2G; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int center_freq; } ;
struct b43_phy_n {TYPE_3__ cal_cache; TYPE_2__ iqcal_chanspec_5G; TYPE_1__ iqcal_chanspec_2G; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int,struct b43_phy_n_iq_comp*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,int,scalar_t__*) ;
 int FUNC_5 (struct b43_wldev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_1)
{
 struct b43_phy_n *VAR_2 = VAR_1->phy.n;

 u16 VAR_3[4];
 u16 *VAR_4 = ((void*)0);
 u16 *VAR_5 = ((void*)0);

 int VAR_6;
 u16 *VAR_7 = ((void*)0);
 struct b43_phy_n_iq_comp *VAR_8 = ((void*)0);

 if (FUNC_1(VAR_1->wl) == VAR_0) {
  if (!VAR_2->iqcal_chanspec_2G.center_freq)
   return;
  VAR_5 = VAR_2->cal_cache.txcal_coeffs_2G;
  VAR_4 = &VAR_2->cal_cache.txcal_coeffs_2G[5];
 } else {
  if (!VAR_2->iqcal_chanspec_5G.center_freq)
   return;
  VAR_5 = VAR_2->cal_cache.txcal_coeffs_5G;
  VAR_4 = &VAR_2->cal_cache.txcal_coeffs_5G[5];
 }

 FUNC_4(VAR_1, FUNC_0(15, 80), 4, VAR_5);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_1->phy.rev >= 3)
   VAR_5[VAR_6] = VAR_3[VAR_6];
  else
   VAR_3[VAR_6] = 0;
 }

 FUNC_4(VAR_1, FUNC_0(15, 88), 4, VAR_3);
 FUNC_4(VAR_1, FUNC_0(15, 85), 2, VAR_4);
 FUNC_4(VAR_1, FUNC_0(15, 93), 2, VAR_4);

 if (VAR_1->phy.rev < 2)
  FUNC_3(VAR_1);

 if (FUNC_1(VAR_1->wl) == VAR_0) {
  VAR_7 = VAR_2->cal_cache.txcal_radio_regs_2G;
  VAR_8 = &VAR_2->cal_cache.rxcal_coeffs_2G;
 } else {
  VAR_7 = VAR_2->cal_cache.txcal_radio_regs_5G;
  VAR_8 = &VAR_2->cal_cache.rxcal_coeffs_5G;
 }


 if (VAR_1->phy.rev >= 3) {
  FUNC_5(VAR_1, 0x2021, VAR_7[0]);
  FUNC_5(VAR_1, 0x2022, VAR_7[1]);
  FUNC_5(VAR_1, 0x3021, VAR_7[2]);
  FUNC_5(VAR_1, 0x3022, VAR_7[3]);
  FUNC_5(VAR_1, 0x2023, VAR_7[4]);
  FUNC_5(VAR_1, 0x2024, VAR_7[5]);
  FUNC_5(VAR_1, 0x3023, VAR_7[6]);
  FUNC_5(VAR_1, 0x3024, VAR_7[7]);
 } else {
  FUNC_5(VAR_1, 0x8B, VAR_7[0]);
  FUNC_5(VAR_1, 0xBA, VAR_7[1]);
  FUNC_5(VAR_1, 0x8D, VAR_7[2]);
  FUNC_5(VAR_1, 0xBC, VAR_7[3]);
 }
 FUNC_2(VAR_1, 1, VAR_8);
}
