
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct nphy_txgains {int dummy; } ;
struct nphy_iqcal_params {size_t cal_gain; int* ncorr; } ;
struct TYPE_4__ {int rev; int channel_type; int channel_freq; scalar_t__ is_40mhz; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_2__ phy; int wl; } ;
struct TYPE_3__ {int channel_type; int center_freq; } ;
struct b43_phy_n {int hang_avoid; int mphase_cal_phase_id; size_t* mphase_txcal_bestcoeffs; int txiqlocal_coeffsvalid; size_t* txiqlocal_bestc; size_t mphase_txcal_cmdidx; TYPE_1__ txiqlocal_chanspec; scalar_t__ mphase_txcal_numcmds; scalar_t__ ipa2g_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int,struct nphy_txgains,struct nphy_iqcal_params*) ;
 int FUNC_3 (struct b43_wldev*,int,int,int ,int,int) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*,int,int,int,int) ;
 int FUNC_11 (struct b43_wldev*,size_t) ;
 size_t FUNC_12 (struct b43_wldev*,int ) ;
 int FUNC_13 (struct b43_wldev*,int ,int,size_t*) ;
 int FUNC_14 (struct b43_wldev*,int ,int ) ;
 int FUNC_15 (struct b43_wldev*,int ,int,size_t const*) ;
 size_t FUNC_16 (struct b43_wldev*,int ) ;
 int FUNC_17 (struct b43_wldev*,int ,size_t) ;
 size_t FUNC_18 (size_t,size_t) ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 size_t* VAR_14 ;
 size_t* VAR_15 ;
 size_t* VAR_16 ;
 size_t* VAR_17 ;
 size_t* VAR_18 ;
 size_t* VAR_19 ;
 int FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct b43_wldev *VAR_20,
    struct nphy_txgains VAR_21,
    bool VAR_22, bool VAR_23)
{
 struct b43_phy_n *VAR_24 = VAR_20->phy.n;
 int VAR_25;
 int VAR_26 = 0;
 int VAR_27;
 bool VAR_28 = 0;
 u8 VAR_29;
 u16 VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36 = 0, VAR_37;
 const u16 *VAR_38;
 bool VAR_39;

 u16 VAR_40[11];
 u16 VAR_41 = 0;
 u16 VAR_42[2];
 u16 VAR_43[2];
 struct nphy_iqcal_params VAR_44[2];
 bool VAR_45[2] = { };

 FUNC_4(VAR_20, 1);

 if (VAR_20->phy.rev >= 4) {
  VAR_28 = VAR_24->hang_avoid;
  VAR_24->hang_avoid = 0;
 }

 FUNC_13(VAR_20, FUNC_0(7, 0x110), 2, VAR_42);

 for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
  FUNC_2(VAR_20, VAR_25, VAR_21, &VAR_44[VAR_25]);
  VAR_43[VAR_25] = VAR_44[VAR_25].cal_gain;
 }

 FUNC_15(VAR_20, FUNC_0(7, 0x110), 2, VAR_43);

 FUNC_8(VAR_20);
 FUNC_7(VAR_20);

 VAR_39 = VAR_20->phy.rev >= 6 ||
  (VAR_20->phy.rev == 5 && VAR_24->ipa2g_on &&
  FUNC_1(VAR_20->wl) == VAR_9);
 if (VAR_39) {
  if (VAR_20->phy.is_40mhz) {
   FUNC_15(VAR_20, FUNC_0(15, 0), 18,
     VAR_17);
   FUNC_15(VAR_20, FUNC_0(15, 32), 18,
     VAR_15);
  } else {
   FUNC_15(VAR_20, FUNC_0(15, 0), 18,
     VAR_16);
   FUNC_15(VAR_20, FUNC_0(15, 32), 18,
     VAR_14);
  }
 }

 FUNC_17(VAR_20, VAR_1, 0x8AA9);

 if (!VAR_20->phy.is_40mhz)
  VAR_27 = 2500;
 else
  VAR_27 = 5000;

 if (VAR_24->mphase_cal_phase_id > 2)
  FUNC_3(VAR_20, (VAR_20->phy.is_40mhz ? 40 : 20) * 8,
     0xFFFF, 0, 1, 0);
 else
  VAR_26 = FUNC_10(VAR_20, VAR_27, 250, 1, 0);

 if (VAR_26 == 0) {
  if (VAR_24->mphase_cal_phase_id > 2) {
   VAR_38 = VAR_24->mphase_txcal_bestcoeffs;
   VAR_29 = 11;
   if (VAR_20->phy.rev < 3)
    VAR_29 -= 2;
  } else {
   if (!VAR_22 && VAR_24->txiqlocal_coeffsvalid) {
    VAR_38 = VAR_24->txiqlocal_bestc;
    VAR_29 = 11;
    if (VAR_20->phy.rev < 3)
     VAR_29 -= 2;
   } else {
    VAR_22 = 1;
    if (VAR_20->phy.rev >= 3) {
     VAR_38 = VAR_19;
     VAR_29 = VAR_8;
    } else {
     VAR_38 = VAR_18;
     VAR_29 = VAR_7;
    }
   }
  }

  FUNC_15(VAR_20, FUNC_0(15, 64), VAR_29, VAR_38);

  if (VAR_22) {
   if (VAR_20->phy.rev >= 3)
    VAR_34 = VAR_4;
   else
    VAR_34 = VAR_3;
  } else {
   if (VAR_20->phy.rev >= 3)
    VAR_34 = VAR_6;
   else
    VAR_34 = VAR_5;
  }

  if (VAR_23) {
   VAR_33 = VAR_24->mphase_txcal_cmdidx;
   VAR_35 = FUNC_18(VAR_34,
    (u16)(VAR_33 + VAR_24->mphase_txcal_numcmds));
  } else {
   VAR_33 = 0;
   VAR_35 = VAR_34;
  }

  for (; VAR_33 < VAR_35; VAR_33++) {
   if (VAR_22) {
    if (VAR_20->phy.rev >= 3)
     VAR_37 = VAR_11[VAR_33];
    else
     VAR_37 = VAR_10[VAR_33];
   } else {
    if (VAR_20->phy.rev >= 3)
     VAR_37 = VAR_13[VAR_33];
    else
     VAR_37 = VAR_12[VAR_33];
   }

   VAR_31 = (VAR_37 & 0x3000) >> 12;
   VAR_32 = (VAR_37 & 0x0F00) >> 8;

   if (VAR_39 && VAR_45[VAR_31] == 0) {
    FUNC_11(VAR_20, VAR_31);
    VAR_45[VAR_31] = 1;
   }

   VAR_30 = (VAR_44[VAR_31].ncorr[VAR_32] << 8) | 0x66;
   FUNC_17(VAR_20, VAR_2, VAR_30);

   if (VAR_32 == 1 || VAR_32 == 3 || VAR_32 == 4) {
    VAR_40[0] = FUNC_12(VAR_20,
      FUNC_0(15, 69 + VAR_31));
    VAR_41 = VAR_40[0];
    VAR_40[0] = 0;
    FUNC_14(VAR_20, FUNC_0(15, 69 + VAR_31),
      0);
   }

   FUNC_17(VAR_20, VAR_0, VAR_37);
   for (VAR_25 = 0; VAR_25 < 2000; VAR_25++) {
    VAR_30 = FUNC_16(VAR_20, VAR_0);
    if (VAR_30 & 0xC000)
     break;
    FUNC_19(10);
   }

   FUNC_13(VAR_20, FUNC_0(15, 96), VAR_29,
      VAR_40);
   FUNC_15(VAR_20, FUNC_0(15, 64), VAR_29,
      VAR_40);

   if (VAR_32 == 1 || VAR_32 == 3 || VAR_32 == 4)
    VAR_40[0] = VAR_41;
  }

  if (VAR_23)
   VAR_24->mphase_txcal_cmdidx = (VAR_35 >= VAR_34) ? 0 : VAR_35;

  VAR_36 = (VAR_20->phy.rev < 3) ? 6 : 7;

  if (!VAR_23 || VAR_24->mphase_cal_phase_id == VAR_36) {
   FUNC_15(VAR_20, FUNC_0(15, 96), 4, VAR_40);
   FUNC_13(VAR_20, FUNC_0(15, 80), 4, VAR_40);
   if (VAR_20->phy.rev < 3) {
    VAR_40[0] = 0;
    VAR_40[1] = 0;
    VAR_40[2] = 0;
    VAR_40[3] = 0;
   }
   FUNC_15(VAR_20, FUNC_0(15, 88), 4,
      VAR_40);
   FUNC_13(VAR_20, FUNC_0(15, 101), 2,
      VAR_40);
   FUNC_15(VAR_20, FUNC_0(15, 85), 2,
      VAR_40);
   FUNC_15(VAR_20, FUNC_0(15, 93), 2,
      VAR_40);
   VAR_29 = 11;
   if (VAR_20->phy.rev < 3)
    VAR_29 -= 2;
   FUNC_13(VAR_20, FUNC_0(15, 96), VAR_29,
      VAR_24->txiqlocal_bestc);
   VAR_24->txiqlocal_coeffsvalid = 1;
   VAR_24->txiqlocal_chanspec.center_freq =
       VAR_20->phy.channel_freq;
   VAR_24->txiqlocal_chanspec.channel_type =
       VAR_20->phy.channel_type;
  } else {
   VAR_29 = 11;
   if (VAR_20->phy.rev < 3)
    VAR_29 -= 2;
   FUNC_13(VAR_20, FUNC_0(15, 96), VAR_29,
      VAR_24->mphase_txcal_bestcoeffs);
  }

  FUNC_5(VAR_20);
  FUNC_17(VAR_20, VAR_1, 0);
 }

 FUNC_6(VAR_20);
 FUNC_15(VAR_20, FUNC_0(7, 0x110), 2, VAR_42);

 if (VAR_20->phy.rev < 2 && (!VAR_23 || VAR_24->mphase_cal_phase_id == VAR_36))
  FUNC_9(VAR_20);

 if (VAR_20->phy.rev >= 4)
  VAR_24->hang_avoid = VAR_28;

 FUNC_4(VAR_20, 0);

 return VAR_26;
}
