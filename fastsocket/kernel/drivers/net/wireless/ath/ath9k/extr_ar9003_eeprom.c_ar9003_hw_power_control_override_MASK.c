
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tx_chainmask; } ;
struct TYPE_14__ {int tempSlopeLow; int tempSlopeHigh; } ;
struct TYPE_13__ {int miscConfiguration; int featureEnable; } ;
struct TYPE_12__ {int tempSlope; } ;
struct TYPE_11__ {int* tempslopextension; } ;
struct TYPE_10__ {int tempSlope; } ;
struct ar9300_eeprom {TYPE_7__ base_ext2; TYPE_6__ baseEepHeader; TYPE_5__ modalHeader5G; int * calFreqPier5G; TYPE_4__ base_ext1; TYPE_3__ modalHeader2G; } ;
struct TYPE_8__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_2__ caps; TYPE_1__ eeprom; } ;
typedef int s32 ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int) ;
 int FUNC_6 (int,int*,int*,int) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_17,
          int VAR_18,
          int *VAR_19,
          int *VAR_20, int *VAR_21)
{
 int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 struct ar9300_eeprom *VAR_25 = &VAR_17->eeprom.ar9300_eep;
 int VAR_26[8], VAR_27[8], VAR_28[3], VAR_29[3], VAR_30;

 FUNC_4(VAR_17, VAR_0,
  (VAR_19[0] << VAR_16),
  VAR_15);
 if (VAR_17->caps.tx_chainmask & FUNC_2(1))
  FUNC_4(VAR_17, VAR_1,
   (VAR_19[1] << VAR_16),
   VAR_15);
 if (VAR_17->caps.tx_chainmask & FUNC_2(2))
  FUNC_4(VAR_17, VAR_2,
   (VAR_19[2] << VAR_16),
   VAR_15);


 FUNC_4(VAR_17, VAR_10,
  (3 << VAR_14),
  VAR_13);
 if (VAR_17->caps.tx_chainmask & FUNC_2(1))
  FUNC_4(VAR_17, VAR_11,
   (3 << VAR_14),
   VAR_13);
 if (VAR_17->caps.tx_chainmask & FUNC_2(2))
  FUNC_4(VAR_17, VAR_12,
   (3 << VAR_14),
   VAR_13);





 if (VAR_18 < 4000) {
  VAR_22 = VAR_25->modalHeader2G.tempSlope;
 } else {
  if (FUNC_1(VAR_17)) {
   VAR_27[0] = VAR_25->base_ext1.tempslopextension[2];
   VAR_28[0] = VAR_25->base_ext1.tempslopextension[3];
   VAR_29[0] = VAR_25->base_ext1.tempslopextension[4];
   VAR_26[0] = 5180;

   VAR_27[1] = VAR_25->modalHeader5G.tempSlope;
   VAR_28[1] = VAR_25->base_ext1.tempslopextension[0];
   VAR_29[1] = VAR_25->base_ext1.tempslopextension[1];
   VAR_26[1] = 5500;

   VAR_27[2] = VAR_25->base_ext1.tempslopextension[5];
   VAR_28[2] = VAR_25->base_ext1.tempslopextension[6];
   VAR_29[2] = VAR_25->base_ext1.tempslopextension[7];
   VAR_26[2] = 5785;

   VAR_22 = FUNC_6(VAR_18,
         VAR_26, VAR_27, 3);
   VAR_23 = FUNC_6(VAR_18,
           VAR_26, VAR_28, 3);
   VAR_24 = FUNC_6(VAR_18,
           VAR_26, VAR_29, 3);

   goto tempslope;
  }

  if ((VAR_25->baseEepHeader.miscConfiguration & 0x20) != 0) {
   for (VAR_30 = 0; VAR_30 < 8; VAR_30++) {
    VAR_27[VAR_30] = VAR_25->base_ext1.tempslopextension[VAR_30];
    VAR_26[VAR_30] = FUNC_3(VAR_25->calFreqPier5G[VAR_30], 0);
   }
   VAR_22 = FUNC_6((s32) VAR_18,
         VAR_26, VAR_27, 8);
  } else if (VAR_25->base_ext2.tempSlopeLow != 0) {
   VAR_27[0] = VAR_25->base_ext2.tempSlopeLow;
   VAR_26[0] = 5180;
   VAR_27[1] = VAR_25->modalHeader5G.tempSlope;
   VAR_26[1] = 5500;
   VAR_27[2] = VAR_25->base_ext2.tempSlopeHigh;
   VAR_26[2] = 5785;
   VAR_22 = FUNC_6((s32) VAR_18,
         VAR_26, VAR_27, 3);
  } else {
   VAR_22 = VAR_25->modalHeader5G.tempSlope;
  }
 }

tempslope:
 if (FUNC_1(VAR_17)) {




  if (VAR_25->baseEepHeader.featureEnable & 0x1) {
   if (VAR_18 < 4000) {
    FUNC_5(VAR_17, VAR_5,
           VAR_6,
           VAR_25->base_ext2.tempSlopeLow);
    FUNC_5(VAR_17, VAR_7,
           VAR_6,
           VAR_22);
    FUNC_5(VAR_17, VAR_9,
           VAR_6,
           VAR_25->base_ext2.tempSlopeHigh);
   } else {
    FUNC_5(VAR_17, VAR_5,
           VAR_6,
           VAR_22);
    FUNC_5(VAR_17, VAR_7,
           VAR_6,
           VAR_23);
    FUNC_5(VAR_17, VAR_9,
           VAR_6,
           VAR_24);
   }
  } else {




   FUNC_5(VAR_17, VAR_5,
          VAR_6, 0);
   FUNC_5(VAR_17, VAR_7,
          VAR_6, 0);
   FUNC_5(VAR_17, VAR_9,
          VAR_6, 0);
  }
 } else {
  FUNC_5(VAR_17, VAR_5,
         VAR_6, VAR_22);
 }

 if (FUNC_0(VAR_17))
  FUNC_5(VAR_17, VAR_7,
         VAR_8, VAR_22);


 FUNC_5(VAR_17, VAR_3, VAR_4,
        VAR_21[0]);
}
