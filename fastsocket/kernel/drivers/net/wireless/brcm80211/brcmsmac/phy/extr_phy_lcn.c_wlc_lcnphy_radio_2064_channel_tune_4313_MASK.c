
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct chan_info_2064_lcnphy {int chan; int logen_buftune; int logen_rccr_tx; int txrf_mix_tune_ctrl; int pa_input_tune_g; int logen_rccr_rx; int pa_rxrf_lna1_freq_tune; int pa_rxrf_lna2_freq_tune; int rxrf_rxrf_spare1; int freq; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int xtalfreq; TYPE_1__ pubpi; int radio_chanspec; } ;
typedef int s32 ;


 size_t FUNC_0 (struct chan_info_2064_lcnphy*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct chan_info_2064_lcnphy* VAR_41 ;
 int FUNC_3 (struct brcms_phy*,int ,int,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int) ;
 scalar_t__ FUNC_5 (struct brcms_phy*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct brcms_phy*) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_10(struct brcms_phy *VAR_42, u8 VAR_43)
{
 uint VAR_44;
 const struct chan_info_2064_lcnphy *VAR_45;
 u8 VAR_46 = 0;
 u8 VAR_47, VAR_48;
 s32 VAR_49, VAR_50, VAR_51, VAR_52;
 u8 VAR_53, VAR_54, VAR_55, VAR_56, VAR_57;
 u32 VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;
 u16 VAR_64, VAR_65, VAR_66;

 u8 VAR_67, VAR_68, VAR_69, VAR_70, VAR_71;
 u16 VAR_72, VAR_73;

 VAR_45 = &VAR_41[0];
 VAR_46 = 1;

 FUNC_3(VAR_42, VAR_38, 0x4, 0x1 << 2);

 FUNC_9(VAR_42, VAR_39, 0xf);
 if (!VAR_46) {
  VAR_64 = VAR_11;
  VAR_65 = VAR_7;
 } else {
  VAR_64 = VAR_12;
  VAR_65 = VAR_8;
 }

 if (FUNC_1(VAR_42->radio_chanspec)) {
  for (VAR_44 = 0; VAR_44 < FUNC_0(VAR_41); VAR_44++)
   if (VAR_41[VAR_44].chan == VAR_43)
    break;

  if (VAR_44 >= FUNC_0(VAR_41))
   return;

  VAR_45 = &VAR_41[VAR_44];
 }

 FUNC_9(VAR_42, VAR_16, VAR_45->logen_buftune);

 FUNC_3(VAR_42, VAR_17, 0x3, VAR_45->logen_rccr_tx);

 FUNC_3(VAR_42, VAR_37, 0x3, VAR_45->txrf_mix_tune_ctrl);

 FUNC_3(VAR_42, VAR_18, 0xf, VAR_45->pa_input_tune_g);

 FUNC_3(VAR_42, VAR_17, 0x3 << 2,
        (VAR_45->logen_rccr_rx) << 2);

 FUNC_3(VAR_42, VAR_35, 0xf, VAR_45->pa_rxrf_lna1_freq_tune);

 FUNC_3(VAR_42, VAR_35, (0xf) << 4,
        (VAR_45->pa_rxrf_lna2_freq_tune) << 4);

 FUNC_9(VAR_42, VAR_36, VAR_45->rxrf_rxrf_spare1);

 VAR_47 = (u8) FUNC_5(VAR_42, VAR_25);
 VAR_48 = (u8) FUNC_5(VAR_42, VAR_40);

 FUNC_4(VAR_42, VAR_25, 0x07);

 FUNC_4(VAR_42, VAR_40, (0x07) << 1);
 VAR_56 = 0;
 VAR_57 = 0;

 VAR_61 = VAR_46 ? (VAR_42->xtalfreq << 1) : (VAR_42->xtalfreq);
 if (VAR_42->xtalfreq > 26000000)
  VAR_56 = 1;
 if (VAR_42->xtalfreq > 52000000)
  VAR_57 = 1;
 if (VAR_56 == 0)
  VAR_63 = 1;
 else if (VAR_57 == 0)
  VAR_63 = 2;
 else
  VAR_63 = 4;
 VAR_60 = (VAR_45->freq * 3);
 VAR_62 = 2 * VAR_61;

 VAR_49 = FUNC_8(VAR_42->xtalfreq, VAR_15, 16);
 VAR_50 = FUNC_8(VAR_61, VAR_15, 16);
 VAR_52 = VAR_42->xtalfreq * VAR_63 / VAR_15;
 VAR_51 = FUNC_8(VAR_60, 2, 16);

 FUNC_9(VAR_42, VAR_30, 0x02);

 VAR_53 = (VAR_42->xtalfreq * VAR_63 * 4 / 5) / VAR_15 - 1;
 FUNC_9(VAR_42, VAR_32, (0x07 & (VAR_53 >> 2)));
 FUNC_9(VAR_42, VAR_33, (VAR_53 & 0x3) << 5);

 VAR_54 = (VAR_52 * 8 / (VAR_53 + 1)) - 1;
 FUNC_9(VAR_42, VAR_31, VAR_54);

 VAR_55 = ((VAR_54 + 1) * (VAR_53 + 1)) / VAR_52;
 VAR_66 = VAR_55 * 3 * (VAR_45->freq) / 32 - 1;
 FUNC_3(VAR_42, VAR_33, (0x0f << 0),
        (u8) (VAR_66 >> 8));

 FUNC_4(VAR_42, VAR_33, 0x10);
 FUNC_9(VAR_42, VAR_34, (u8) (VAR_66 & 0xff));

 VAR_58 = ((VAR_60 * (VAR_15 >> 4)) / VAR_62) << 4;

 VAR_59 = ((VAR_60 * (VAR_15 >> 4)) % VAR_62) << 4;
 while (VAR_59 >= VAR_62) {
  VAR_58++;
  VAR_59 -= VAR_62;
 }
 VAR_59 = FUNC_8(VAR_59, VAR_62, 20);

 FUNC_3(VAR_42, VAR_26, (0x1f << 0),
        (u8) (VAR_58 >> 4));
 FUNC_3(VAR_42, VAR_27, (0x1f << 4),
        (u8) (VAR_58 << 4));
 FUNC_3(VAR_42, VAR_27, (0x0f << 0),
        (u8) (VAR_59 >> 16));
 FUNC_9(VAR_42, VAR_28, (u8) (VAR_59 >> 8) & 0xff);
 FUNC_9(VAR_42, VAR_29, (u8) VAR_59 & 0xff);

 FUNC_9(VAR_42, VAR_21, 0xfb);

 FUNC_9(VAR_42, VAR_22, 0x9A);
 FUNC_9(VAR_42, VAR_23, 0xA3);
 FUNC_9(VAR_42, VAR_24, 0x0C);

 VAR_67 = VAR_0 / VAR_64;
 VAR_73 = (((VAR_9 - VAR_13) *
  (VAR_60 / 2 - VAR_14)) /
        (VAR_10 - VAR_14))
       + VAR_13;
 VAR_68 = (VAR_73 * 10) / VAR_6;
 VAR_69 = (VAR_65 - VAR_5) / VAR_3;
 VAR_72 = VAR_5 + (VAR_69 * VAR_3);
 VAR_70 = (VAR_72 * 10) / VAR_1;
 VAR_71 = ((VAR_2 * VAR_67 * VAR_4 * 100) / VAR_68) / VAR_70;
 FUNC_3(VAR_42, VAR_19, 0x3f, VAR_71);

 if (VAR_43 >= 1 && VAR_43 <= 5)
  FUNC_9(VAR_42, VAR_19, 0x8);
 else
  FUNC_9(VAR_42, VAR_19, 0x7);
 FUNC_9(VAR_42, VAR_20, 0x3);

 FUNC_3(VAR_42, VAR_25, 0x0c, 0x0c);
 FUNC_6(1);

 FUNC_7(VAR_42);

 FUNC_9(VAR_42, VAR_25, VAR_47);
 FUNC_9(VAR_42, VAR_40, VAR_48);
 if (FUNC_2(VAR_42->pubpi.phy_rev, 1)) {
  FUNC_9(VAR_42, VAR_18, 3);
  FUNC_9(VAR_42, VAR_37, 7);
 }
}
