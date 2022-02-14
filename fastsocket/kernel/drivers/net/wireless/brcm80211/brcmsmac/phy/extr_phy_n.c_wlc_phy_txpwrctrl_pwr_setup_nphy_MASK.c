
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int phy_rev; } ;
struct TYPE_6__ {scalar_t__ tssipos; } ;
struct brcms_phy {int* adj_pwr_tbl_nphy; scalar_t__ phyhang_avoid; TYPE_4__ pubpi; TYPE_3__* sh; int d11core; int radio_chanspec; TYPE_2__ srom_fem2g; scalar_t__ tx_power_max; TYPE_1__* nphy_pwrctrl_info; } ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_7__ {int sromrev; int physhim; int corerev; } ;
struct TYPE_5__ {int idle_tssi_2g; int pwrdet_2g_a1; int pwrdet_2g_b0; int pwrdet_2g_b1; int idle_tssi_5g; int pwrdet_5gl_a1; int pwrdet_5gl_b0; int pwrdet_5gl_b1; int pwrdet_5gm_a1; int pwrdet_5gm_b0; int pwrdet_5gm_b1; int pwrdet_5gh_a1; int pwrdet_5gh_b0; int pwrdet_5gh_b1; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (struct brcms_phy*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int FUNC_8 (struct brcms_phy*,int ,int ,int,int ,int) ;
 int FUNC_9 (struct brcms_phy*,int,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_11 ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct brcms_phy*,int,int,int) ;
 int FUNC_13 (struct brcms_phy*,int,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (struct brcms_phy*,int ) ;
 int FUNC_17 (struct brcms_phy*,int) ;
 int FUNC_18 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_19 (struct brcms_phy*) ;
 int FUNC_20 (struct brcms_phy*,int,int) ;
 int FUNC_21 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_22(struct brcms_phy *VAR_12)
{
 u32 VAR_13;
 s16 VAR_14[2], VAR_15[2], VAR_16[2];
 s8 VAR_17[2];
 s32 VAR_18, VAR_19, VAR_20;
 u8 VAR_21;
 u8 VAR_22[2];
 u32 VAR_23, VAR_24, VAR_25;
 u32 VAR_26[64];
 u8 VAR_27;

 if (FUNC_3(VAR_12->sh->corerev, 11) || FUNC_3(VAR_12->sh->corerev, 12)) {
  FUNC_15(VAR_12->sh->physhim, VAR_0, VAR_0);
  (void)FUNC_10(VAR_12->d11core, FUNC_2(VAR_11));
  FUNC_14(1);
 }

 if (VAR_12->phyhang_avoid)
  FUNC_17(VAR_12, 1);

 FUNC_13(VAR_12, 0x122, (0x1 << 0));

 if (FUNC_4(VAR_12->pubpi.phy_rev, 3))
  FUNC_9(VAR_12, 0x1e7, (u16) (~(0x1 << 15)));
 else
  FUNC_13(VAR_12, 0x1e7, (0x1 << 15));

 if (FUNC_3(VAR_12->sh->corerev, 11) || FUNC_3(VAR_12->sh->corerev, 12))
  FUNC_15(VAR_12->sh->physhim, VAR_0, 0);

 if (VAR_12->sh->sromrev < 4) {
  VAR_22[0] = VAR_12->nphy_pwrctrl_info[0].idle_tssi_2g;
  VAR_22[1] = VAR_12->nphy_pwrctrl_info[1].idle_tssi_2g;
  VAR_14[0] = -424;
  VAR_14[1] = -424;
  VAR_15[0] = 5612;
  VAR_15[1] = 5612;
  VAR_16[1] = -1393;
  VAR_16[0] = -1393;
 } else {

  VAR_21 = FUNC_16(VAR_12, 0);
  switch (VAR_21) {
  case 131:
   VAR_22[0] = VAR_12->nphy_pwrctrl_info[0].idle_tssi_2g;
   VAR_22[1] = VAR_12->nphy_pwrctrl_info[1].idle_tssi_2g;
   VAR_14[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_2g_a1;
   VAR_14[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_2g_a1;
   VAR_15[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_2g_b0;
   VAR_15[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_2g_b0;
   VAR_16[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_2g_b1;
   VAR_16[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_2g_b1;
   break;
  case 129:
   VAR_22[0] = VAR_12->nphy_pwrctrl_info[0].idle_tssi_5g;
   VAR_22[1] = VAR_12->nphy_pwrctrl_info[1].idle_tssi_5g;
   VAR_14[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gl_a1;
   VAR_14[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gl_a1;
   VAR_15[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gl_b0;
   VAR_15[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gl_b0;
   VAR_16[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gl_b1;
   VAR_16[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gl_b1;
   break;
  case 128:
   VAR_22[0] = VAR_12->nphy_pwrctrl_info[0].idle_tssi_5g;
   VAR_22[1] = VAR_12->nphy_pwrctrl_info[1].idle_tssi_5g;
   VAR_14[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gm_a1;
   VAR_14[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gm_a1;
   VAR_15[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gm_b0;
   VAR_15[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gm_b0;
   VAR_16[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gm_b1;
   VAR_16[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gm_b1;
   break;
  case 130:
   VAR_22[0] = VAR_12->nphy_pwrctrl_info[0].idle_tssi_5g;
   VAR_22[1] = VAR_12->nphy_pwrctrl_info[1].idle_tssi_5g;
   VAR_14[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gh_a1;
   VAR_14[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gh_a1;
   VAR_15[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gh_b0;
   VAR_15[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gh_b0;
   VAR_16[0] = VAR_12->nphy_pwrctrl_info[0].pwrdet_5gh_b1;
   VAR_16[1] = VAR_12->nphy_pwrctrl_info[1].pwrdet_5gh_b1;
   break;
  default:
   VAR_22[0] = VAR_12->nphy_pwrctrl_info[0].idle_tssi_2g;
   VAR_22[1] = VAR_12->nphy_pwrctrl_info[1].idle_tssi_2g;
   VAR_14[0] = -424;
   VAR_14[1] = -424;
   VAR_15[0] = 5612;
   VAR_15[1] = 5612;
   VAR_16[1] = -1393;
   VAR_16[0] = -1393;
   break;
  }
 }


 VAR_17[0] = (s8) VAR_12->tx_power_max;
 VAR_17[1] = (s8) VAR_12->tx_power_max;

 if (FUNC_4(VAR_12->pubpi.phy_rev, 3)) {
  if (VAR_12->srom_fem2g.tssipos)
   FUNC_13(VAR_12, 0x1e9, (0x1 << 14));

  if (FUNC_4(VAR_12->pubpi.phy_rev, 7)) {
   for (VAR_27 = 0; VAR_27 <= 1; VAR_27++) {
    if (FUNC_7(VAR_12)) {
     if (FUNC_0(VAR_12->radio_chanspec))
      FUNC_8(VAR_12, VAR_8,
         VAR_9, VAR_27,
         VAR_10,
         0xe);
     else
      FUNC_8(VAR_12, VAR_8,
         VAR_9, VAR_27,
         VAR_10,
         0xc);
    }
   }
  } else {
   if (FUNC_7(VAR_12)) {

    FUNC_21(VAR_12, VAR_7 |
      VAR_5,
      (FUNC_1
       (VAR_12->radio_chanspec)) ?
       0xc : 0xe);
    FUNC_21(VAR_12,
      VAR_7 |
      VAR_6,
      (FUNC_1
       (VAR_12->radio_chanspec)) ?
       0xc : 0xe);
   } else {

    FUNC_21(VAR_12, VAR_7 |
      VAR_5, 0x11);
    FUNC_21(VAR_12, VAR_7 |
      VAR_6, 0x11);
   }
  }
 }

 if (FUNC_3(VAR_12->sh->corerev, 11) || FUNC_3(VAR_12->sh->corerev, 12)) {
  FUNC_15(VAR_12->sh->physhim, VAR_0, VAR_0);
  (void)FUNC_10(VAR_12->d11core, FUNC_2(VAR_11));
  FUNC_14(1);
 }

 if (FUNC_4(VAR_12->pubpi.phy_rev, 7))
  FUNC_12(VAR_12, 0x1e7, (0x7f << 0),
       (VAR_4 << 0));
 else
  FUNC_12(VAR_12, 0x1e7, (0x7f << 0),
       (VAR_3 << 0));

 if (FUNC_4(VAR_12->pubpi.phy_rev, 7))
  FUNC_12(VAR_12, 0x222, (0xff << 0),
       (VAR_4 << 0));
 else if (FUNC_5(VAR_12->pubpi.phy_rev, 1))
  FUNC_12(VAR_12, 0x222, (0xff << 0),
       (VAR_3 << 0));

 if (FUNC_3(VAR_12->sh->corerev, 11) || FUNC_3(VAR_12->sh->corerev, 12))
  FUNC_15(VAR_12->sh->physhim, VAR_0, 0);

 FUNC_20(VAR_12, 0x1e8, (0x3 << 8) | (240 << 0));

 FUNC_20(VAR_12, 0x1e9,
        (1 << 15) | (VAR_22[0] << 0) | (VAR_22[1] << 8));

 FUNC_20(VAR_12, 0x1ea,
        (VAR_17[0] << 0) |
        (VAR_17[1] << 8));

 VAR_24 = 64;
 VAR_25 = 0;
 for (VAR_23 = VAR_1;
      VAR_23 <= VAR_2; VAR_23++) {

  for (VAR_13 = 0; VAR_13 < VAR_24; VAR_13++) {
   VAR_18 = 8 *
         (16 * VAR_15[VAR_23 - 26] + VAR_16[VAR_23 - 26] * VAR_13);
   VAR_19 = 32768 + VAR_14[VAR_23 - 26] * VAR_13;
   VAR_20 = FUNC_11(((4 * VAR_18 + VAR_19 / 2) / VAR_19), -8);
   if (FUNC_6(VAR_12->pubpi.phy_rev, 3)) {
    if (VAR_13 <=
        (uint) (31 - VAR_22[VAR_23 - 26] + 1))
     VAR_20 =
      FUNC_11(VAR_20,
          VAR_17
          [VAR_23 - 26] + 1);
   }
   VAR_26[VAR_13] = (u32) VAR_20;
  }
  FUNC_18(VAR_12, VAR_23, VAR_24, VAR_25, 32,
      VAR_26);
 }

 FUNC_19(VAR_12);
 FUNC_18(VAR_12, VAR_1, 84, 64, 8,
     VAR_12->adj_pwr_tbl_nphy);
 FUNC_18(VAR_12, VAR_2, 84, 64, 8,
     VAR_12->adj_pwr_tbl_nphy);

 if (VAR_12->phyhang_avoid)
  FUNC_17(VAR_12, 0);
}
