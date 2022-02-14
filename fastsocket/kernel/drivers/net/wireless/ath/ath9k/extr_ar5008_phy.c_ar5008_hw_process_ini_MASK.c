
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ analog_shiftreg; } ;
struct TYPE_8__ {int ia_rows; } ;
struct ath_hw {int iniModesFastClock; int iniBB_RfGain; TYPE_2__ config; TYPE_4__ iniCommon; int iniModesTxGain; int iniModesRxGain; scalar_t__ need_an_top2_fixup; TYPE_4__ iniModes; int iniAddac; TYPE_1__* eep_ops; } ;
struct ath_common {TYPE_3__* bus_ops; } ;
struct ath9k_channel {int chanmode; } ;
struct TYPE_7__ {scalar_t__ ath_bus_type; } ;
struct TYPE_5__ {int (* set_addac ) (struct ath_hw*,struct ath9k_channel*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_8 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int) ;
 int FUNC_11 (struct ath_hw*,int ,int ) ;
 int FUNC_12 (struct ath_hw*,int,int) ;
 int FUNC_13 (int *,int,int) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_16 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_17 (struct ath_hw*,struct ath9k_channel*,int) ;
 struct ath_common* FUNC_18 (struct ath_hw*) ;
 int FUNC_19 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_20 (struct ath_hw*) ;
 int FUNC_21 (struct ath_common*,char*) ;
 int FUNC_22 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct ath_hw *VAR_12,
     struct ath9k_channel *VAR_13)
{
 struct ath_common *VAR_14 = FUNC_18(VAR_12);
 int VAR_15, VAR_16 = 0;
 u32 VAR_17, VAR_18;

 switch (VAR_13->chanmode) {
 case 136:
 case 135:
  VAR_17 = 1;
  VAR_18 = 1;
  break;
 case 133:
 case 134:
  VAR_17 = 2;
  VAR_18 = 1;
  break;
 case 131:
 case 130:
 case 132:
  VAR_17 = 4;
  VAR_18 = 2;
  break;
 case 128:
 case 129:
  VAR_17 = 3;
  VAR_18 = 2;
  break;

 default:
  return -VAR_10;
 }





 FUNC_12(VAR_12, FUNC_0(0), 0x00000007);


 FUNC_12(VAR_12, VAR_2, VAR_4);
 if (VAR_12->eep_ops->set_addac)
  VAR_12->eep_ops->set_addac(VAR_12, VAR_13);

 FUNC_13(&VAR_12->iniAddac, 1, VAR_16);
 FUNC_12(VAR_12, VAR_2, VAR_5);

 FUNC_6(VAR_12);

 for (VAR_15 = 0; VAR_15 < VAR_12->iniModes.ia_rows; VAR_15++) {
  u32 VAR_19 = FUNC_7(&VAR_12->iniModes, VAR_15, 0);
  u32 VAR_20 = FUNC_7(&VAR_12->iniModes, VAR_15, VAR_17);

  if (VAR_19 == VAR_0 && VAR_12->need_an_top2_fixup)
   VAR_20 &= ~VAR_1;

  FUNC_12(VAR_12, VAR_19, VAR_20);

  if (VAR_19 >= 0x7800 && VAR_19 < 0x78a0
      && VAR_12->config.analog_shiftreg
      && (VAR_14->bus_ops->ath_bus_type != VAR_9)) {
   FUNC_23(100);
  }

  FUNC_5(VAR_16);
 }

 FUNC_9(VAR_12);

 if (FUNC_2(VAR_12) || FUNC_4(VAR_12))
  FUNC_13(&VAR_12->iniModesRxGain, VAR_17, VAR_16);

 if (FUNC_2(VAR_12) || FUNC_3(VAR_12) ||
     FUNC_4(VAR_12))
  FUNC_13(&VAR_12->iniModesTxGain, VAR_17, VAR_16);

 if (FUNC_1(VAR_12)) {
  FUNC_11(VAR_12, VAR_6, VAR_7);
  FUNC_10(VAR_12, VAR_3, VAR_8, 0xa);
 }

 FUNC_6(VAR_12);


 for (VAR_15 = 0; VAR_15 < VAR_12->iniCommon.ia_rows; VAR_15++) {
  u32 VAR_21 = FUNC_7(&VAR_12->iniCommon, VAR_15, 0);
  u32 VAR_22 = FUNC_7(&VAR_12->iniCommon, VAR_15, 1);

  FUNC_12(VAR_12, VAR_21, VAR_22);

  if (VAR_21 >= 0x7800 && VAR_21 < 0x78a0
      && VAR_12->config.analog_shiftreg
      && (VAR_14->bus_ops->ath_bus_type != VAR_9)) {
   FUNC_23(100);
  }

  FUNC_5(VAR_16);
 }

 FUNC_9(VAR_12);

 FUNC_13(&VAR_12->iniBB_RfGain, VAR_18, VAR_16);

 if (FUNC_8(VAR_12, VAR_13))
  FUNC_13(&VAR_12->iniModesFastClock, VAR_17,
    VAR_16);

 FUNC_15(VAR_12, VAR_13);
 FUNC_16(VAR_12, VAR_13);
 FUNC_14(VAR_12);
 FUNC_20(VAR_12);
 FUNC_17(VAR_12, VAR_13, 0);


 if (!FUNC_19(VAR_12, VAR_13, VAR_18)) {
  FUNC_21(FUNC_18(VAR_12), "ar5416SetRfRegs failed\n");
  return -VAR_11;
 }

 return 0;
}
