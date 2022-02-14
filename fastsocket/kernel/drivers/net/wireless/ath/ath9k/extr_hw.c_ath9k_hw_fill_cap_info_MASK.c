
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath_regulatory {int current_rd; } ;
struct TYPE_3__ {scalar_t__ subvendorid; scalar_t__ devid; } ;
struct ath9k_hw_capabilities {int hw_caps; int tx_chainmask; int rx_chainmask; int rts_aggr_limit; int rx_status_len; int tx_desc_len; int txs_len; int max_rxchains; int max_txchains; int rx_lp_qdepth; int rx_hp_qdepth; int num_gpio_pins; } ;
struct ath_hw {scalar_t__ opmode; int txchainmask; int rxchainmask; int rfsilent; int ent_mode; TYPE_2__* eep_ops; void* rfkill_polarity; void* rfkill_gpio; TYPE_1__ hw_version; int misc_mode; struct ath9k_hw_capabilities caps; } ;
struct ath_desc {int dummy; } ;
struct ath_common {int crypt_caps; } ;
struct ar9003_txs {int dummy; } ;
struct ar9003_txc {int dummy; } ;
struct ar9003_rxs {int dummy; } ;
struct TYPE_4__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 scalar_t__ FUNC_8 (struct ath_hw*) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 scalar_t__ FUNC_10 (struct ath_hw*) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 scalar_t__ FUNC_12 (struct ath_hw*) ;
 scalar_t__ FUNC_13 (struct ath_hw*) ;
 scalar_t__ FUNC_14 (struct ath_hw*) ;
 scalar_t__ FUNC_15 (struct ath_hw*) ;
 scalar_t__ FUNC_16 (struct ath_hw*) ;
 scalar_t__ VAR_15 ;
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
 int FUNC_17 (int ) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 void* FUNC_18 (int,int ) ;
 scalar_t__ VAR_53 ;
 int VAR_54 ;
 int FUNC_19 (struct ath_hw*,int ) ;
 struct ath_common* FUNC_20 (struct ath_hw*) ;
 scalar_t__ FUNC_21 (struct ath_hw*) ;
 scalar_t__ FUNC_22 (struct ath_hw*,int ) ;
 struct ath_regulatory* FUNC_23 (struct ath_hw*) ;
 int FUNC_24 (struct ath_common*,int ,char*,int) ;
 int FUNC_25 (struct ath_common*,char*) ;
 void* FUNC_26 (unsigned int,int) ;
 int FUNC_27 (struct ath_hw*,int ) ;
 int FUNC_28 (struct ath_hw*,int ) ;
 int FUNC_29 (struct ath_hw*,int ) ;
 int FUNC_30 (struct ath_hw*,int ) ;
 int FUNC_31 (struct ath_hw*,int ) ;
 int FUNC_32 (struct ath_hw*,int ) ;
 int FUNC_33 (struct ath_hw*,int ) ;
 int FUNC_34 (struct ath_hw*,int ) ;
 int FUNC_35 (struct ath_hw*,int ) ;
 int FUNC_36 (struct ath_hw*,int ) ;

int FUNC_37(struct ath_hw *VAR_55)
{
 struct ath9k_hw_capabilities *VAR_56 = &VAR_55->caps;
 struct ath_regulatory *VAR_57 = FUNC_23(VAR_55);
 struct ath_common *VAR_58 = FUNC_20(VAR_55);
 unsigned int VAR_59;

 u16 VAR_60;
 u8 VAR_61, VAR_62, VAR_63;

 VAR_60 = VAR_55->eep_ops->get_eeprom(VAR_55, VAR_45);
 VAR_57->current_rd = VAR_60;

 if (VAR_55->opmode != VAR_53 &&
     VAR_55->hw_version.subvendorid == VAR_15) {
  if (VAR_57->current_rd == 0x64 ||
      VAR_57->current_rd == 0x65)
   VAR_57->current_rd += 5;
  else if (VAR_57->current_rd == 0x41)
   VAR_57->current_rd = 0x43;
  FUNC_24(VAR_58, VAR_54, "regdomain mapped to 0x%x\n",
   VAR_57->current_rd);
 }

 VAR_60 = VAR_55->eep_ops->get_eeprom(VAR_55, VAR_43);
 if ((VAR_60 & (VAR_3 | VAR_2)) == 0) {
  FUNC_25(VAR_58,
   "no band has been marked as supported in EEPROM\n");
  return -VAR_52;
 }

 if (VAR_60 & VAR_2)
  VAR_56->hw_caps |= VAR_18;

 if (VAR_60 & VAR_3)
  VAR_56->hw_caps |= VAR_16;

 if (FUNC_15(VAR_55) ||
     FUNC_7(VAR_55) ||
     FUNC_11(VAR_55) ||
     FUNC_16(VAR_55))
  VAR_59 = 1;
 else if (FUNC_13(VAR_55))
  VAR_59 = 3;
 else if (!FUNC_6(VAR_55))
  VAR_59 = 7;
 else if (!FUNC_10(VAR_55) || FUNC_12(VAR_55))
  VAR_59 = 3;
 else
  VAR_59 = 7;

 VAR_56->tx_chainmask = VAR_55->eep_ops->get_eeprom(VAR_55, VAR_51);




 if ((VAR_55->hw_version.devid == VAR_1) &&
     !(VAR_60 & VAR_2) &&
     !(FUNC_3(VAR_55)))

  VAR_56->rx_chainmask = FUNC_22(VAR_55, 0) ? 0x5 : 0x7;
 else if (FUNC_1(VAR_55))
  VAR_56->rx_chainmask = 0x7;
 else

  VAR_56->rx_chainmask = VAR_55->eep_ops->get_eeprom(VAR_55, VAR_50);

 VAR_56->tx_chainmask = FUNC_26(VAR_59, VAR_56->tx_chainmask);
 VAR_56->rx_chainmask = FUNC_26(VAR_59, VAR_56->rx_chainmask);
 VAR_55->txchainmask = VAR_56->tx_chainmask;
 VAR_55->rxchainmask = VAR_56->rx_chainmask;

 VAR_55->misc_mode |= VAR_14;


 if (FUNC_10(VAR_55))
  VAR_55->misc_mode |= VAR_13;

 VAR_58->crypt_caps |= VAR_39;

 if (VAR_55->hw_version.devid != VAR_0)
  VAR_56->hw_caps |= VAR_25;
 else
  VAR_56->hw_caps &= ~VAR_25;

 if (FUNC_3(VAR_55))
  VAR_56->num_gpio_pins = VAR_5;
 else if (FUNC_0(VAR_55))
  VAR_56->num_gpio_pins = VAR_4;
 else if (FUNC_10(VAR_55))
  VAR_56->num_gpio_pins = VAR_9;
 else if (FUNC_9(VAR_55))
  VAR_56->num_gpio_pins = VAR_7;
 else if (FUNC_8(VAR_55))
  VAR_56->num_gpio_pins = VAR_6;
 else if (FUNC_6(VAR_55))
  VAR_56->num_gpio_pins = VAR_8;
 else
  VAR_56->num_gpio_pins = VAR_12;

 if (FUNC_2(VAR_55) || FUNC_1(VAR_55))
  VAR_56->rts_aggr_limit = VAR_38;
 else
  VAR_56->rts_aggr_limit = (8 * 1024);
 if (FUNC_3(VAR_55) || FUNC_10(VAR_55))
  VAR_56->hw_caps |= VAR_21;
 else
  VAR_56->hw_caps &= ~VAR_21;

 if (FUNC_4(VAR_55) || FUNC_7(VAR_55))
  VAR_56->hw_caps &= ~VAR_17;
 else
  VAR_56->hw_caps |= VAR_17;

 if (FUNC_10(VAR_55)) {
  VAR_56->hw_caps |= VAR_23 | VAR_24;
  if (!FUNC_11(VAR_55) && !FUNC_15(VAR_55) && !FUNC_16(VAR_55))
   VAR_56->hw_caps |= VAR_26;

  VAR_56->rx_hp_qdepth = VAR_33;
  VAR_56->rx_lp_qdepth = VAR_34;
  VAR_56->rx_status_len = sizeof(struct ar9003_rxs);
  VAR_56->tx_desc_len = sizeof(struct ar9003_txc);
  VAR_56->txs_len = sizeof(struct ar9003_txs);
 } else {
  VAR_56->tx_desc_len = sizeof(struct ath_desc);
  if (FUNC_5(VAR_55))
   VAR_56->hw_caps |= VAR_24;
 }

 if (FUNC_10(VAR_55))
  VAR_56->hw_caps |= VAR_29;

 if (FUNC_10(VAR_55))
  VAR_55->ent_mode = FUNC_19(VAR_55, VAR_10);

 if (FUNC_9(VAR_55) || FUNC_3(VAR_55))
  VAR_56->hw_caps |= VAR_32;

 if (FUNC_7(VAR_55))
  if (VAR_55->eep_ops->get_eeprom(VAR_55, VAR_42) >= 3) {
   VAR_61 =
    VAR_55->eep_ops->get_eeprom(VAR_55, VAR_40);
   if ((VAR_61 & 0x1) && ((VAR_61 >> 3) & 0x1))
    VAR_56->hw_caps |= VAR_19;
  }
 if (FUNC_10(VAR_55)) {
  if (VAR_55->eep_ops->get_eeprom(VAR_55, VAR_41))
   VAR_56->hw_caps |= VAR_20;
 }


 if (FUNC_11(VAR_55) || FUNC_15(VAR_55) || FUNC_16(VAR_55)) {
  VAR_61 = VAR_55->eep_ops->get_eeprom(VAR_55, VAR_40);
  if ((VAR_61 >> 0x6) == 0x3)
   VAR_56->hw_caps |= VAR_19;
 }

 if (FUNC_21(VAR_55))
  VAR_56->hw_caps |= VAR_22;

 VAR_62 = VAR_56->tx_chainmask;
 VAR_63 = VAR_56->rx_chainmask;
 while (VAR_62 || VAR_63) {
  if (VAR_62 & FUNC_17(0))
   VAR_56->max_txchains++;
  if (VAR_63 & FUNC_17(0))
   VAR_56->max_rxchains++;

  VAR_62 >>= 1;
  VAR_63 >>= 1;
 }

 if (FUNC_13(VAR_55) || FUNC_16(VAR_55)) {
  if (!(VAR_55->ent_mode & VAR_11))
   VAR_56->hw_caps |= VAR_27;

  if (FUNC_14(VAR_55))
   VAR_56->hw_caps |= VAR_31;
 }

 if (FUNC_6(VAR_55)) {
  VAR_56->hw_caps |= VAR_35 |
     VAR_37;

  if (FUNC_4(VAR_55))
   VAR_56->hw_caps |= VAR_36;
 }

 if (FUNC_10(VAR_55) &&
     VAR_55->eep_ops->get_eeprom(VAR_55, VAR_44))
   VAR_56->hw_caps |= VAR_28;

 return 0;
}
