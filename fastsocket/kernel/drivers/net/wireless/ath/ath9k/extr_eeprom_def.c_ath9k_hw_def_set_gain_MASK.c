
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct modal_eep_header {int * rxTxMarginCh; int * bswAtten; int * bswMargin; int * xatten2Db; int * xatten2Margin; int * txRxAttenCh; } ;
struct ath_hw {int dummy; } ;
struct ar5416_eeprom_def {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,scalar_t__) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_14,
      struct modal_eep_header *VAR_15,
      struct ar5416_eeprom_def *VAR_16,
      u8 VAR_17, int VAR_18, int VAR_19)
{
 if (VAR_1 >= VAR_0) {
  VAR_17 = VAR_15->txRxAttenCh[VAR_19];

  if (FUNC_0(VAR_14)) {
   FUNC_2(VAR_14, VAR_4 + VAR_18,
         VAR_9,
         VAR_15->bswMargin[VAR_19]);
   FUNC_2(VAR_14, VAR_4 + VAR_18,
         VAR_8,
         VAR_15->bswAtten[VAR_19]);
   FUNC_2(VAR_14, VAR_4 + VAR_18,
         VAR_11,
         VAR_15->xatten2Margin[VAR_19]);
   FUNC_2(VAR_14, VAR_4 + VAR_18,
         VAR_10,
         VAR_15->xatten2Db[VAR_19]);
  } else {
   FUNC_3(VAR_14, VAR_4 + VAR_18,
     (FUNC_1(VAR_14, VAR_4 + VAR_18) &
      ~VAR_6)
     | FUNC_4(VAR_15-> bswMargin[VAR_19],
          VAR_6));
   FUNC_3(VAR_14, VAR_4 + VAR_18,
     (FUNC_1(VAR_14, VAR_4 + VAR_18) &
      ~VAR_5)
     | FUNC_4(VAR_15->bswAtten[VAR_19],
          VAR_5));
  }
 }

 if (FUNC_0(VAR_14)) {
  FUNC_2(VAR_14,
        VAR_12 + VAR_18,
        VAR_2, VAR_17);
  FUNC_2(VAR_14,
        VAR_12 + VAR_18,
        VAR_3, VAR_15->rxTxMarginCh[VAR_19]);
 } else {
  FUNC_3(VAR_14,
     VAR_12 + VAR_18,
     (FUNC_1(VAR_14, VAR_12 + VAR_18) &
      ~VAR_13)
     | FUNC_4(VAR_17, VAR_13));
  FUNC_3(VAR_14,
     VAR_4 + VAR_18,
     (FUNC_1(VAR_14, VAR_4 + VAR_18) &
      ~VAR_7) |
     FUNC_4(VAR_15->rxTxMarginCh[VAR_19], VAR_7));
 }
}
