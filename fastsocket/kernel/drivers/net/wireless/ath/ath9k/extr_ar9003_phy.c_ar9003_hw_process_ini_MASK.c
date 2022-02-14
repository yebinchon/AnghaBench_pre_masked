
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int modes_index; int enabled_cals; int txchainmask; int rxchainmask; int iniCckfirJapan2484; int iniAdditional; int iniModesFastClock; int iniModesTxGain; int ini_modes_rx_gain_bounds; int iniModesRxGain; int ini_radio_post_sys2ant; int * iniRadio; int * iniBB; int * iniMac; int * iniSOC; } ;
struct ath9k_channel {int chanmode; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_6 (struct ath_hw*,int ,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ) ;
 int FUNC_8 (int *,int,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int *,int) ;
 int FUNC_11 (struct ath_hw*,int ,int ) ;
 int FUNC_12 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_13 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_14 (struct ath_hw*,struct ath9k_channel*,int) ;

__attribute__((used)) static int FUNC_15(struct ath_hw *VAR_11,
     struct ath9k_channel *VAR_12)
{
 unsigned int VAR_13 = 0, VAR_14;
 u32 VAR_15;

 switch (VAR_12->chanmode) {
 case 136:
 case 135:
  VAR_15 = 1;
  break;
 case 133:
 case 134:
  VAR_15 = 2;
  break;
 case 131:
 case 130:
 case 132:
  VAR_15 = 4;
  break;
 case 128:
 case 129:
  VAR_15 = 3;
  break;

 default:
  return -VAR_8;
 }

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  FUNC_10(VAR_11, &VAR_11->iniSOC[VAR_14], VAR_15);
  FUNC_10(VAR_11, &VAR_11->iniMac[VAR_14], VAR_15);
  FUNC_10(VAR_11, &VAR_11->iniBB[VAR_14], VAR_15);
  FUNC_10(VAR_11, &VAR_11->iniRadio[VAR_14], VAR_15);
  if (VAR_14 == VAR_7 && FUNC_1(VAR_11))
   FUNC_10(VAR_11,
        &VAR_11->ini_radio_post_sys2ant,
        VAR_15);
 }

 FUNC_8(&VAR_11->iniModesRxGain, 1, VAR_13);
 if (FUNC_2(VAR_11))
  FUNC_8(&VAR_11->ini_modes_rx_gain_bounds, VAR_15,
    VAR_13);

 if (FUNC_2(VAR_11)) {
  int VAR_16;

  VAR_16 = FUNC_13(VAR_11, VAR_12);
  if (VAR_16 < 0)
   return -VAR_8;

  FUNC_8(&VAR_11->iniModesTxGain, VAR_16,
    VAR_13);
 } else {
  FUNC_8(&VAR_11->iniModesTxGain, VAR_15, VAR_13);
 }





 if (FUNC_4(VAR_11, VAR_12))
  FUNC_8(&VAR_11->iniModesFastClock,
    VAR_15, VAR_13);

 FUNC_8(&VAR_11->iniAdditional, 1, VAR_13);

 if (VAR_12->channel == 2484)
  FUNC_10(VAR_11, &VAR_11->iniCckfirJapan2484, 1);

 if (FUNC_0(VAR_11) || FUNC_3(VAR_11))
  FUNC_7(VAR_11, VAR_1,
     VAR_0);

 VAR_11->modes_index = VAR_15;
 FUNC_9(VAR_11);
 FUNC_12(VAR_11, VAR_12);
 FUNC_11(VAR_11, VAR_11->rxchainmask, VAR_11->txchainmask);
 FUNC_14(VAR_11, VAR_12, 0);

 if (FUNC_0(VAR_11) || FUNC_3(VAR_11)) {
  if (FUNC_6(VAR_11, VAR_4,
       VAR_5))
   VAR_11->enabled_cals |= VAR_10;
  else
   VAR_11->enabled_cals &= ~VAR_10;

  if (FUNC_5(VAR_11, VAR_2) & VAR_3)
   VAR_11->enabled_cals |= VAR_9;
  else
   VAR_11->enabled_cals &= ~VAR_9;
 }

 return 0;
}
