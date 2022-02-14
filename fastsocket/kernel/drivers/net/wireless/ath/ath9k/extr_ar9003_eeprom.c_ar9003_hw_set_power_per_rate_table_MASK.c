
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct chan_centers {size_t synth_center; size_t ext_center; size_t ctl_center; } ;
struct ar9300_eeprom {int* ctlIndex_2G; int* ctlIndex_5G; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {size_t channel; } ;


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
 size_t FUNC_0 (size_t const*) ;
 size_t VAR_10 ;
 size_t const VAR_11 ;
 int FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t FUNC_3 (struct ar9300_eeprom*,size_t,int,int) ;
 size_t FUNC_4 (struct ath_hw*,size_t const) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 size_t FUNC_7 (struct ath_hw*,size_t,int) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_common*,int ,char*,size_t,size_t const,size_t const,size_t const,...) ;
 size_t FUNC_10 (size_t,size_t) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_17,
            struct ath9k_channel *VAR_18,
            u8 *VAR_19, u16 VAR_20,
            u8 VAR_21,
            u16 VAR_22)
{
 struct ath_common *VAR_23 = FUNC_5(VAR_17);
 struct ar9300_eeprom *VAR_24 = &VAR_17->eeprom.ar9300_eep;
 u16 VAR_25;
 int VAR_26;
 u16 VAR_27 = 0, VAR_28;
 static const u16 VAR_29[] = {
  137, 129, 136, 128
 };
 static const u16 VAR_30[] = {
  135, 133, 131, 134,
  132, 130
 };
 u16 VAR_31;
 const u16 *VAR_32;
 u16 VAR_33, VAR_34;
 struct chan_centers VAR_35;
 u8 *VAR_36;
 u8 VAR_37;
 u16 VAR_38;
 bool VAR_39 = FUNC_1(VAR_18);

 FUNC_6(VAR_17, VAR_18, &VAR_35);
 VAR_27 = FUNC_7(VAR_17, VAR_22,
      VAR_21);

 if (VAR_39) {


  VAR_31 =
   FUNC_0(VAR_30) -
       VAR_15;
  VAR_32 = VAR_30;
  if (FUNC_2(VAR_18))

   VAR_31 = FUNC_0(VAR_30);
 } else {


  VAR_31 = FUNC_0(VAR_29) -
      VAR_16;
  VAR_32 = VAR_29;
  if (FUNC_2(VAR_18))

   VAR_31 = FUNC_0(VAR_29);
 }
 for (VAR_33 = 0; VAR_33 < VAR_31; VAR_33++) {
  bool VAR_40 = (VAR_32[VAR_33] == 128) ||
   (VAR_32[VAR_33] == 130);
  if (VAR_40)
   VAR_34 = VAR_35.synth_center;
  else if (VAR_32[VAR_33] & VAR_11)
   VAR_34 = VAR_35.ext_center;
  else
   VAR_34 = VAR_35.ctl_center;

  FUNC_9(VAR_23, VAR_13,
   "LOOP-Mode ctlMode %d < %d, isHt40CtlMode %d, EXT_ADDITIVE %d\n",
   VAR_33, VAR_31, VAR_40,
   (VAR_32[VAR_33] & VAR_11));


  if (VAR_39) {
   VAR_36 = VAR_24->ctlIndex_2G;
   VAR_37 = VAR_8;
  } else {
   VAR_36 = VAR_24->ctlIndex_5G;
   VAR_37 = VAR_9;
  }

  VAR_25 = VAR_12;
  for (VAR_26 = 0; (VAR_26 < VAR_37) && VAR_36[VAR_26]; VAR_26++) {
   FUNC_9(VAR_23, VAR_13,
    "LOOP-Ctlidx %d: cfgCtl 0x%2.2x pCtlMode 0x%2.2x ctlIndex 0x%2.2x chan %d\n",
    VAR_26, VAR_20, VAR_32[VAR_33], VAR_36[VAR_26],
    VAR_18->channel);






   if ((((VAR_20 & ~VAR_10) |
          (VAR_32[VAR_33] & VAR_10)) ==
    VAR_36[VAR_26]) ||
       (((VAR_20 & ~VAR_10) |
          (VAR_32[VAR_33] & VAR_10)) ==
        ((VAR_36[VAR_26] & VAR_10) |
          VAR_14))) {
    VAR_38 =
      FUNC_3(VAR_24,
              VAR_34, VAR_26,
              VAR_39);

    if ((VAR_20 & ~VAR_10) == VAR_14)





     VAR_25 =
      FUNC_10(VAR_25,
          VAR_38);
    else {

     VAR_25 = VAR_38;
     break;
    }
   }
  }

  VAR_28 = (u8)FUNC_10(VAR_25, VAR_27);

  FUNC_9(VAR_23, VAR_13,
   "SEL-Min ctlMode %d pCtlMode %d 2xMaxEdge %d sP %d minCtlPwr %d\n",
   VAR_33, VAR_32[VAR_33], VAR_25,
   VAR_27, VAR_28);


  switch (VAR_32[VAR_33]) {
  case 135:
   for (VAR_26 = VAR_5;
        VAR_26 <= VAR_4; VAR_26++)
    VAR_19[VAR_26] = (u8)FUNC_10((u16)VAR_19[VAR_26],
             VAR_28);
   break;
  case 137:
  case 133:
   for (VAR_26 = VAR_7;
        VAR_26 <= VAR_6; VAR_26++)
    VAR_19[VAR_26] = (u8)FUNC_10((u16)VAR_19[VAR_26],
             VAR_28);
   break;
  case 129:
  case 131:
   for (VAR_26 = VAR_0;
        VAR_26 <= VAR_1; VAR_26++) {
    VAR_19[VAR_26] = (u8)FUNC_10((u16)VAR_19[VAR_26],
             VAR_28);
    if (FUNC_8(VAR_17))
     VAR_19[VAR_26] =
      (u8)FUNC_10((u16)VAR_19[VAR_26],
      FUNC_4(VAR_17,
       VAR_32[VAR_33]));
   }
   break;
  case 128:
  case 130:
   for (VAR_26 = VAR_2;
        VAR_26 <= VAR_3; VAR_26++) {
    VAR_19[VAR_26] = (u8)FUNC_10((u16)VAR_19[VAR_26],
             VAR_28);
    if (FUNC_8(VAR_17))
     VAR_19[VAR_26] =
      (u8)FUNC_10((u16)VAR_19[VAR_26],
      FUNC_4(VAR_17,
       VAR_32[VAR_33]));
   }
   break;
  default:
   break;
  }
 }
}
