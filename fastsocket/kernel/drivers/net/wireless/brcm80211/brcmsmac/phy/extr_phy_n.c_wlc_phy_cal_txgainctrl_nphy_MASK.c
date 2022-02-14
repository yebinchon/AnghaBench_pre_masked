
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int extpagain; } ;
struct TYPE_5__ {size_t phy_corenum; int phy_rev; } ;
struct TYPE_4__ {int extpagain; } ;
struct brcms_phy {int phyhang_avoid; int nphy_txcal_bbmult; scalar_t__* nphy_txcal_pwr_idx; scalar_t__ nphy_bb_mult_save; TYPE_3__ srom_fem2g; TYPE_2__ pubpi; TYPE_1__ srom_fem5g; int radio_chanspec; scalar_t__* nphy_cal_orig_pwr_idx; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct brcms_phy*,int,int,int ) ;
 int FUNC_6 (struct brcms_phy*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct brcms_phy*,int*,int ) ;
 int FUNC_9 (struct brcms_phy*,int ,int,int) ;
 int FUNC_10 (struct brcms_phy*,int) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_13 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_14 (struct brcms_phy*,int,int,int ,int ,int) ;
 int FUNC_15 (struct brcms_phy*,int,scalar_t__,int) ;
 int FUNC_16 (struct brcms_phy*,int,int) ;

void
FUNC_17(struct brcms_phy *VAR_6, s32 VAR_7,
       bool VAR_8)
{
 int VAR_9;
 uint VAR_10;
 u16 VAR_11, VAR_12;
 s32 VAR_13;
 s32 VAR_14;
 s32 VAR_15[2];
 u16 VAR_16;
 u16 VAR_17[4];
 u32 VAR_18;
 u16 VAR_19 = 250;
 uint VAR_20;
 bool VAR_21 = 0;

 if (FUNC_2(VAR_6->pubpi.phy_rev, 7))
  VAR_20 = 2;
 else
  VAR_20 = 1;

 if (FUNC_0(VAR_6->radio_chanspec))
  VAR_18 = 5000;
 else
  VAR_18 = 2500;

 FUNC_15(VAR_6, 1, VAR_6->nphy_cal_orig_pwr_idx[0], 1);
 FUNC_15(VAR_6, 2, VAR_6->nphy_cal_orig_pwr_idx[1], 1);

 if (VAR_6->phyhang_avoid)
  FUNC_10(VAR_6, 1);

 VAR_21 = VAR_6->phyhang_avoid;
 VAR_6->phyhang_avoid = 0;

 VAR_17[0] = FUNC_6(VAR_6, 0x91);
 VAR_17[1] = FUNC_6(VAR_6, 0x92);
 VAR_17[2] = FUNC_6(VAR_6, 0xe7);
 VAR_17[3] = FUNC_6(VAR_6, 0xec);
 FUNC_9(VAR_6, VAR_1, 1,
      VAR_4 |
      VAR_5);

 if (!VAR_8) {
  FUNC_9(VAR_6,
       VAR_2,
       0x2, VAR_4);
  FUNC_9(VAR_6,
       VAR_2,
       0x8, VAR_5);
 } else {
  FUNC_9(VAR_6,
       VAR_2,
       0x1, VAR_4);
  FUNC_9(VAR_6,
       VAR_2,
       0x7, VAR_5);
 }

 VAR_16 = FUNC_6(VAR_6, 0x01);
 FUNC_5(VAR_6, 0x01, (0x1 << 15), 0);

 FUNC_12(VAR_6, 15, 1, 87, 16, &VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_6->pubpi.phy_corenum; VAR_10++) {
  VAR_14 = (s32) VAR_6->nphy_cal_orig_pwr_idx[VAR_10];

  for (VAR_9 = 0; VAR_9 < 2;
       VAR_9++) {
   FUNC_14(VAR_6, VAR_18, VAR_19, 0, 0,
          0);

   if (VAR_10 == VAR_3)
    VAR_12 = VAR_11 & 0xff00;
   else
    VAR_12 = VAR_11 & 0x00ff;

   FUNC_13(VAR_6, 15, 1, 87, 16, &VAR_12);
   FUNC_13(VAR_6, 15, 1, 95, 16, &VAR_12);

   FUNC_7(50);

   FUNC_8(VAR_6, VAR_15,
       VAR_0);

   VAR_6->nphy_bb_mult_save = 0;
   FUNC_11(VAR_6);

   VAR_13 = (VAR_7 * 4) - VAR_15[VAR_10];

   VAR_14 -= VAR_20 * VAR_13;
   if (VAR_14 < 0)
    VAR_14 = 0;
   else if (VAR_14 > 127)
    VAR_14 = 127;

   if (FUNC_1(VAR_6->radio_chanspec)) {
    if (FUNC_3(VAR_6->pubpi.phy_rev, 4) &&
        (VAR_6->srom_fem5g.extpagain == 3)) {
     if (VAR_14 < 30)
      VAR_14 = 30;
    }
   } else {
    if (FUNC_2(VAR_6->pubpi.phy_rev, 5) &&
        (VAR_6->srom_fem2g.extpagain == 3)) {
     if (VAR_14 < 50)
      VAR_14 = 50;
    }
   }

   FUNC_15(VAR_6, (1 << VAR_10),
       (u8) VAR_14, 1);
  }

  VAR_6->nphy_txcal_pwr_idx[VAR_10] = (u8) VAR_14;

  if (VAR_8) {
   u16 VAR_22;
   u16 VAR_23;

   FUNC_12(VAR_6, 15, 1, 87, 16, &VAR_23);

   FUNC_14(VAR_6, VAR_18, VAR_19, 0, 0,
          0);

   FUNC_13(VAR_6, 15, 1, 87, 16, &VAR_23);
   FUNC_13(VAR_6, 15, 1, 95, 16, &VAR_23);

   FUNC_7(100);

   FUNC_8(VAR_6, VAR_15,
       VAR_0);

   FUNC_12(VAR_6, 7, 1, (0x110 + VAR_10), 16,
      &VAR_22);

   FUNC_4(4000);
   VAR_6->nphy_bb_mult_save = 0;
   FUNC_11(VAR_6);
  }
 }

 FUNC_15(VAR_6, 1, VAR_6->nphy_txcal_pwr_idx[0], 1);
 FUNC_15(VAR_6, 2, VAR_6->nphy_txcal_pwr_idx[1], 1);

 FUNC_12(VAR_6, 15, 1, 87, 16, &VAR_6->nphy_txcal_bbmult);

 FUNC_16(VAR_6, 0x01, VAR_16);

 FUNC_16(VAR_6, 0x91, VAR_17[0]);
 FUNC_16(VAR_6, 0x92, VAR_17[1]);
 FUNC_16(VAR_6, 0xe7, VAR_17[2]);
 FUNC_16(VAR_6, 0xec, VAR_17[3]);

 VAR_6->phyhang_avoid = VAR_21;

 if (VAR_6->phyhang_avoid)
  FUNC_10(VAR_6, 0);
}
