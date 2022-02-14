
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rx_intr_mitigation; scalar_t__ tx_intr_mitigation; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {int imask; int imrs2_reg; TYPE_1__ config; scalar_t__ txeol_interrupt_mask; scalar_t__ txerr_interrupt_mask; scalar_t__ txdesc_interrupt_mask; scalar_t__ txok_interrupt_mask; struct ath9k_hw_capabilities caps; } ;
struct ath_common {int dummy; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
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
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_common*,int ,char*,int) ;

void FUNC_7(struct ath_hw *VAR_43)
{
 enum ath9k_int VAR_44 = VAR_43->imask;
 u32 VAR_45, VAR_46;
 struct ath9k_hw_capabilities *VAR_47 = &VAR_43->caps;
 struct ath_common *VAR_48 = FUNC_4(VAR_43);

 if (!(VAR_44 & VAR_35))
  FUNC_5(VAR_43);

 FUNC_6(VAR_48, VAR_42, "New interrupt mask 0x%x\n", VAR_44);

 VAR_45 = VAR_44 & VAR_30;
 VAR_46 = 0;

 if (VAR_44 & VAR_41) {
  if (VAR_43->config.tx_intr_mitigation)
   VAR_45 |= VAR_25 | VAR_24;
  else {
   if (VAR_43->txok_interrupt_mask)
    VAR_45 |= VAR_26;
   if (VAR_43->txdesc_interrupt_mask)
    VAR_45 |= VAR_21;
  }
  if (VAR_43->txerr_interrupt_mask)
   VAR_45 |= VAR_23;
  if (VAR_43->txeol_interrupt_mask)
   VAR_45 |= VAR_22;
 }
 if (VAR_44 & VAR_37) {
  if (FUNC_0(VAR_43)) {
   VAR_45 |= VAR_4 | VAR_8;
   if (VAR_43->config.rx_intr_mitigation) {
    VAR_45 &= ~VAR_9;
    VAR_45 |= VAR_6 | VAR_5;
   } else {
    VAR_45 |= VAR_9;
   }
  } else {
   if (VAR_43->config.rx_intr_mitigation)
    VAR_45 |= VAR_6 | VAR_5;
   else
    VAR_45 |= VAR_7 | VAR_3;
  }
  if (!(VAR_47->hw_caps & VAR_27))
   VAR_45 |= VAR_2;
 }

 if (VAR_44 & VAR_34)
  VAR_45 |= VAR_2;

 if (VAR_44 & (VAR_28)) {
  VAR_45 |= VAR_1;
  if (VAR_44 & VAR_38)
   VAR_46 |= VAR_17;
  if (VAR_44 & VAR_32)
   VAR_46 |= VAR_14;
  if (VAR_44 & VAR_33)
   VAR_46 |= VAR_15;
  if (VAR_44 & VAR_29)
   VAR_46 |= VAR_11;
  if (VAR_44 & VAR_40)
   VAR_46 |= VAR_18;
 }

 if (VAR_44 & (VAR_36 | VAR_31)) {
  VAR_45 |= VAR_1;
  if (VAR_44 & VAR_36)
   VAR_46 |= VAR_16;
  if (VAR_44 & VAR_31)
   VAR_46 |= VAR_13;
 }

 FUNC_6(VAR_48, VAR_42, "new IMR 0x%x\n", VAR_45);
 FUNC_3(VAR_43, VAR_0, VAR_45);
 VAR_43->imrs2_reg &= ~(VAR_17 | VAR_14 | VAR_15 |
      VAR_11 | VAR_12 |
      VAR_18 | VAR_16 | VAR_13);
 VAR_43->imrs2_reg |= VAR_46;
 FUNC_3(VAR_43, VAR_10, VAR_43->imrs2_reg);

 if (!(VAR_47->hw_caps & VAR_27)) {
  if (VAR_44 & VAR_39)
   FUNC_2(VAR_43, VAR_19, VAR_20);
  else
   FUNC_1(VAR_43, VAR_19, VAR_20);
 }

 return;
}
