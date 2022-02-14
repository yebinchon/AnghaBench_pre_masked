
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ar9170_eeprom_modal {int const switchSettling; int const pgaDesiredSize; int const adcDesiredSize; int const txEndToXpaOff; int const txFrameToXpaOn; int const txEndToRxOn; int thresh62; int const* txRxAttenCh; int const* rxTxMarginCh; int const* bswMargin; int const* iqCalICh; int const* iqCalQCh; int xpdGain; int * antCtrlChain; int antCtrlCommon; } ;
struct TYPE_2__ {int rx_mask; struct ar9170_eeprom_modal* modal_header; } ;
struct ar9170 {TYPE_1__ eeprom; } ;


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
 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,int,int const) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_29,
    bool VAR_30, bool VAR_31)
{
 static const u8 VAR_32[16] = {
  0x2, 0x2, 0x2, 0x1, 0x2, 0x2, 0x6, 0x2,
  0x2, 0x3, 0x7, 0x2, 0xb, 0x2, 0x2, 0x2
 };

 struct ar9170_eeprom_modal *VAR_33 = &VAR_29->eeprom.modal_header[VAR_30];
 u32 VAR_34;

 FUNC_4(VAR_29);


 FUNC_3(VAR_16,
  FUNC_7(VAR_33->antCtrlCommon));


 FUNC_3(VAR_14,
  FUNC_7(VAR_33->antCtrlChain[0]));


 FUNC_3(VAR_15,
  FUNC_7(VAR_33->antCtrlChain[1]));


 if (!VAR_31) {
  VAR_34 = FUNC_2(VAR_13,
         VAR_30, VAR_31);
  FUNC_1(VAR_24, VAR_34, VAR_33->switchSettling);
  FUNC_3(VAR_13, VAR_34);
 }


 VAR_34 = FUNC_2(VAR_5, VAR_30, VAR_31);
 FUNC_1(VAR_1, VAR_34, VAR_33->pgaDesiredSize);
 FUNC_1(VAR_0, VAR_34, VAR_33->adcDesiredSize);
 FUNC_3(VAR_5, VAR_34);


 VAR_34 = FUNC_2(VAR_9, VAR_30, VAR_31);
 FUNC_1(VAR_22, VAR_34, VAR_33->txEndToXpaOff);
 FUNC_1(VAR_21, VAR_34, VAR_33->txEndToXpaOff);
 FUNC_1(VAR_20, VAR_34, VAR_33->txFrameToXpaOn);
 FUNC_1(VAR_19, VAR_34, VAR_33->txFrameToXpaOn);
 FUNC_3(VAR_9, VAR_34);


 VAR_34 = FUNC_2(VAR_8, VAR_30, VAR_31);
 FUNC_1(VAR_18, VAR_34, VAR_33->txEndToRxOn);
 FUNC_3(VAR_8, VAR_34);


 VAR_34 = FUNC_2(0x1c8864, VAR_30, VAR_31);
 VAR_34 = (VAR_34 & ~0x7f000) | (VAR_33->thresh62 << 12);
 FUNC_3(0x1c8864, VAR_34);


 VAR_34 = FUNC_2(VAR_10, VAR_30, VAR_31);
 FUNC_1(VAR_23, VAR_34, VAR_33->txRxAttenCh[0]);
 FUNC_3(VAR_10, VAR_34);


 VAR_34 = FUNC_2(VAR_11,
          VAR_30, VAR_31);
 FUNC_1(VAR_23, VAR_34, VAR_33->txRxAttenCh[1]);
 FUNC_3(VAR_11, VAR_34);


 VAR_34 = FUNC_2(VAR_6, VAR_30, VAR_31);
 FUNC_1(VAR_3, VAR_34, VAR_33->rxTxMarginCh[0]);

 if (!VAR_30)
  FUNC_1(VAR_2, VAR_34, VAR_33->bswMargin[0]);
 FUNC_3(VAR_6, VAR_34);


 VAR_34 = FUNC_2(VAR_7,
          VAR_30, VAR_31);
 FUNC_1(VAR_3, VAR_34, VAR_33->rxTxMarginCh[1]);
 FUNC_3(VAR_7, VAR_34);


 VAR_34 = FUNC_2(FUNC_0(0),
          VAR_30, VAR_31);
 FUNC_1(VAR_25, VAR_34, VAR_33->iqCalICh[0]);
 FUNC_1(VAR_26, VAR_34, VAR_33->iqCalQCh[0]);
 FUNC_3(FUNC_0(0), VAR_34);


 VAR_34 = FUNC_2(FUNC_0(2),
          VAR_30, VAR_31);
 FUNC_1(VAR_25, VAR_34, VAR_33->iqCalICh[1]);
 FUNC_1(VAR_26, VAR_34, VAR_33->iqCalQCh[1]);
 FUNC_3(FUNC_0(2), VAR_34);


 VAR_34 = FUNC_2(VAR_17, VAR_30, VAR_31);
 FUNC_1(VAR_27, VAR_34,
  VAR_32[VAR_33->xpdGain & 0xf] & 3);
 FUNC_1(VAR_28, VAR_34,
  VAR_32[VAR_33->xpdGain & 0xf] >> 2);
 FUNC_3(VAR_17, VAR_34);

 FUNC_3(VAR_12, VAR_29->eeprom.rx_mask);
 FUNC_3(VAR_4, VAR_29->eeprom.rx_mask);

 FUNC_5();
 return FUNC_6();
}
