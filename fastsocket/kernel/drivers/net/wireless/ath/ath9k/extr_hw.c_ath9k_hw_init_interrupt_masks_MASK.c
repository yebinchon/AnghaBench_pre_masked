
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ tx_intr_mitigation; scalar_t__ rx_intr_mitigation; } ;
struct ath_hw {int imrs2_reg; TYPE_1__ config; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


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
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_25,
       enum nl80211_iftype VAR_26)
{
 u32 VAR_27 = VAR_21;
 u32 VAR_28 = VAR_11 |
  VAR_15 |
  VAR_2 |
  VAR_8 |
  VAR_1;

 if (FUNC_2(VAR_25) || FUNC_3(VAR_25))
  VAR_27 &= ~VAR_23;

 if (FUNC_1(VAR_25)) {
  VAR_28 |= VAR_6;
  if (VAR_25->config.rx_intr_mitigation)
   VAR_28 |= VAR_3 | VAR_4;
  else
   VAR_28 |= VAR_7;

 } else {
  if (VAR_25->config.rx_intr_mitigation)
   VAR_28 |= VAR_3 | VAR_4;
  else
   VAR_28 |= VAR_5;
 }

 if (VAR_25->config.tx_intr_mitigation)
  VAR_28 |= VAR_12 | VAR_13;
 else
  VAR_28 |= VAR_14;

 FUNC_4(VAR_25);

 FUNC_6(VAR_25, VAR_0, VAR_28);
 VAR_25->imrs2_reg |= VAR_10;
 FUNC_6(VAR_25, VAR_9, VAR_25->imrs2_reg);

 if (!FUNC_0(VAR_25)) {
  FUNC_6(VAR_25, VAR_20, 0xFFFFFFFF);
  FUNC_6(VAR_25, VAR_22, VAR_27);
  FUNC_6(VAR_25, VAR_24, 0);
 }

 FUNC_5(VAR_25);

 if (FUNC_1(VAR_25)) {
  FUNC_6(VAR_25, VAR_16, 0);
  FUNC_6(VAR_25, VAR_17, 0);
  FUNC_6(VAR_25, VAR_18, 0);
  FUNC_6(VAR_25, VAR_19, 0);
 }
}
