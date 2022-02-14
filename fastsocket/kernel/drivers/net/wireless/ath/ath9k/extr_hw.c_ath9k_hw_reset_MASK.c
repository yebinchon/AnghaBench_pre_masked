
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ tx_intr_mitigation; scalar_t__ rx_intr_mitigation; } ;
struct TYPE_5__ {int hw_caps; } ;
struct ath_hw {int chip_fullsleep; int paprd_table_write_done; int htc_reset_init; scalar_t__ shared_chain_lnadiv; TYPE_3__ config; int rfkill_gpio; TYPE_2__ caps; int opmode; TYPE_1__* eep_ops; int noise; struct ath9k_hw_cal_data* caldata; scalar_t__ curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {scalar_t__ channel; scalar_t__ channelFlags; scalar_t__ chanmode; int paprd_packet_sent; int done_txiqcal_once; int done_txclcal_once; } ;
struct ath9k_channel {scalar_t__ channel; scalar_t__ channelFlags; scalar_t__ chanmode; } ;
struct TYPE_4__ {int (* set_board_values ) (struct ath_hw*,struct ath9k_channel*) ;scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
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
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath9k_channel*) ;
 scalar_t__ FUNC_10 (struct ath9k_channel*) ;
 scalar_t__ FUNC_11 (struct ath9k_channel*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*,int ) ;
 int FUNC_14 (struct ath_hw*,int ,int ,int) ;
 int FUNC_15 (struct ath_hw*,int ,int ) ;
 int FUNC_16 (struct ath_hw*,int ,int) ;
 int FUNC_17 (struct ath_hw*) ;
 int FUNC_18 (struct ath_hw*) ;
 int FUNC_19 (struct ath_hw*) ;
 int FUNC_20 (struct ath_hw*) ;
 scalar_t__ FUNC_21 (struct ath_hw*,struct ath9k_channel*,struct ath9k_hw_cal_data*) ;
 int FUNC_22 (struct ath_hw*,int,int ,int) ;
 int FUNC_23 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_24 (struct ath_hw*,int) ;
 int FUNC_25 (struct ath_hw*) ;
 int FUNC_26 (struct ath_hw*) ;
 int FUNC_27 (struct ath_hw*) ;
 scalar_t__ FUNC_28 (struct ath_hw*) ;
 int FUNC_29 (struct ath_hw*,int ) ;
 int FUNC_30 (struct ath_hw*,struct ath9k_channel*) ;
 struct ath_common* FUNC_31 (struct ath_hw*) ;
 int FUNC_32 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_33 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_34 (struct ath_hw*,scalar_t__) ;
 scalar_t__ FUNC_35 (struct ath_hw*) ;
 int FUNC_36 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_37 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_38 (struct ath_hw*) ;
 int FUNC_39 (struct ath_hw*) ;
 int FUNC_40 (struct ath_hw*,int ) ;
 int FUNC_41 (struct ath_hw*) ;
 int FUNC_42 (struct ath_hw*) ;
 int FUNC_43 (struct ath_hw*) ;
 int FUNC_44 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_45 (struct ath_hw*) ;
 scalar_t__ FUNC_46 (struct ath_hw*) ;
 int FUNC_47 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_48 (struct ath_hw*,int,int) ;
 int FUNC_49 (struct ath_hw*) ;
 int FUNC_50 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_51 (struct ath_hw*) ;
 int FUNC_52 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_53 (struct ath_hw*) ;
 int FUNC_54 (struct ath_hw*,int ) ;
 int FUNC_55 (struct ath_hw*,scalar_t__) ;
 int FUNC_56 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_57 (struct ath_hw*,int) ;
 int FUNC_58 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_59 (struct ath_common*,char*) ;
 int FUNC_60 (struct ath9k_hw_cal_data*,int ,int) ;
 scalar_t__ FUNC_61 (struct ath_hw*,int ) ;
 int FUNC_62 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_63 (int) ;

int FUNC_64(struct ath_hw *VAR_36, struct ath9k_channel *VAR_37,
     struct ath9k_hw_cal_data *VAR_38, bool VAR_39)
{
 struct ath_common *VAR_40 = FUNC_31(VAR_36);
 u32 VAR_41;
 u32 VAR_42;
 u32 VAR_43;
 u64 VAR_44 = 0;
 int VAR_45;
 bool VAR_46 = 0;
 bool VAR_47 = VAR_36->chip_fullsleep;

 if (FUNC_46(VAR_36)) {
  VAR_46 = FUNC_23(VAR_36, VAR_37);
  if (VAR_46)
   return 0;
 }

 if (!FUNC_54(VAR_36, VAR_32))
  return -VAR_35;

 if (VAR_36->curchan && !VAR_36->chip_fullsleep)
  FUNC_34(VAR_36, VAR_36->curchan);

 VAR_36->caldata = VAR_38;
 if (VAR_38 && (VAR_37->channel != VAR_38->channel ||
   VAR_37->channelFlags != VAR_38->channelFlags ||
   VAR_37->chanmode != VAR_38->chanmode)) {

  FUNC_60(VAR_38, 0, sizeof(*VAR_38));
  FUNC_58(VAR_36, VAR_37);
 } else if (VAR_38) {
  VAR_38->paprd_packet_sent = 0;
 }
 VAR_36->noise = FUNC_33(VAR_36, VAR_37);

 if (VAR_39) {
  VAR_45 = FUNC_32(VAR_36, VAR_37);
  if (!VAR_45)
   return VAR_45;
 }

 if (FUNC_46(VAR_36))
  FUNC_24(VAR_36, VAR_47);

 VAR_42 = FUNC_13(VAR_36, VAR_14);
 if (VAR_42 == 0)
  VAR_42 = 1;

 VAR_43 = FUNC_13(VAR_36, VAR_25) & VAR_26;


 if (FUNC_0(VAR_36) ||
     (FUNC_2(VAR_36) && VAR_36->eep_ops->get_eeprom(VAR_36, VAR_33)))
  VAR_44 = FUNC_35(VAR_36);

 VAR_41 = FUNC_13(VAR_36, VAR_8) &
  (VAR_9 | VAR_12 |
   VAR_11 | VAR_10);

 FUNC_45(VAR_36);

 VAR_36->paprd_table_write_done = 0;


 if (FUNC_1(VAR_36) && VAR_36->htc_reset_init) {
  FUNC_16(VAR_36,
     VAR_2,
     VAR_1);
  FUNC_63(50);
 }

 if (!FUNC_30(VAR_36, VAR_37)) {
  FUNC_59(VAR_40, "Chip reset failed\n");
  return -VAR_34;
 }


 if (FUNC_1(VAR_36) && VAR_36->htc_reset_init) {
  VAR_36->htc_reset_init = 0;
  FUNC_16(VAR_36,
     VAR_2,
     VAR_0);
  FUNC_63(50);
 }


 if (VAR_44)
  FUNC_55(VAR_36, VAR_44);

 if (FUNC_3(VAR_36))
  FUNC_15(VAR_36, VAR_15, VAR_16);

 if (!FUNC_6(VAR_36))
  FUNC_17(VAR_36);

 VAR_45 = FUNC_47(VAR_36, VAR_37);
 if (VAR_45)
  return VAR_45;

 if (FUNC_46(VAR_36))
  FUNC_22(VAR_36, 0, FUNC_9(VAR_37), VAR_47);







 if (FUNC_0(VAR_36) && (FUNC_35(VAR_36) < VAR_44)) {
  VAR_44 += 1500;
  FUNC_55(VAR_36, VAR_44);
 }

 FUNC_41(VAR_36);

 if (FUNC_11(VAR_37) || FUNC_10(VAR_37))
  FUNC_52(VAR_36, VAR_37);

 FUNC_56(VAR_36, VAR_37);
 VAR_36->eep_ops->set_board_values(VAR_36, VAR_37);

 FUNC_48(VAR_36, VAR_43, VAR_42);

 VAR_45 = FUNC_50(VAR_36, VAR_37);
 if (VAR_45)
  return VAR_45;

 FUNC_51(VAR_36);

 FUNC_43(VAR_36);
 FUNC_40(VAR_36, VAR_36->opmode);
 FUNC_25(VAR_36);
 FUNC_42(VAR_36);

 if (VAR_36->caps.hw_caps & VAR_31)
  FUNC_29(VAR_36, VAR_36->rfkill_gpio);

 FUNC_39(VAR_36);

 if (FUNC_4(VAR_36) && FUNC_5(VAR_36)) {
  FUNC_15(VAR_36, VAR_17,
       VAR_18);
  FUNC_14(VAR_36, VAR_5, VAR_4,
         VAR_3);
  FUNC_15(VAR_36, VAR_20,
       VAR_21);
 }

 FUNC_15(VAR_36, VAR_25, VAR_27);

 FUNC_53(VAR_36);

 if (!FUNC_46(VAR_36))
  FUNC_16(VAR_36, VAR_19, 8);

 if (VAR_36->config.rx_intr_mitigation) {
  FUNC_14(VAR_36, VAR_22, VAR_24, 500);
  FUNC_14(VAR_36, VAR_22, VAR_23, 2000);
 }

 if (VAR_36->config.tx_intr_mitigation) {
  FUNC_14(VAR_36, VAR_28, VAR_30, 300);
  FUNC_14(VAR_36, VAR_28, VAR_29, 750);
 }

 FUNC_36(VAR_36, VAR_37);

 if (VAR_38) {
  VAR_38->done_txiqcal_once = 0;
  VAR_38->done_txclcal_once = 0;
 }
 if (!FUNC_37(VAR_36, VAR_37))
  return -VAR_35;

 if (FUNC_46(VAR_36) && FUNC_21(VAR_36, VAR_37, VAR_38))
  return -VAR_35;

 FUNC_8(VAR_36);

 FUNC_49(VAR_36);
 FUNC_16(VAR_36, VAR_8, VAR_41 | VAR_13);

 FUNC_12(VAR_36);

 FUNC_38(VAR_36);

 if (FUNC_28(VAR_36))
  FUNC_27(VAR_36);

 if (FUNC_46(VAR_36))
  FUNC_20(VAR_36);

 FUNC_44(VAR_36, VAR_37);
 FUNC_57(VAR_36, 1);

 if (FUNC_6(VAR_36)) {
  FUNC_18(VAR_36);
  FUNC_19(VAR_36);
 }

 FUNC_26(VAR_36);

 if (FUNC_7(VAR_36) && VAR_36->shared_chain_lnadiv)
  FUNC_15(VAR_36, VAR_6, VAR_7);

 return 0;
}
