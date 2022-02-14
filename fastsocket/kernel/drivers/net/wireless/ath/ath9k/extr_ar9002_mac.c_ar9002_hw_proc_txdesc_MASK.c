
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_tx_status {int evm2; int evm1; int evm0; void* ts_rssi_ext2; void* ts_rssi_ext1; void* ts_rssi_ext0; void* ts_rssi; void* ts_virtcol; void* ts_longretry; void* ts_shortretry; int ts_flags; int ts_status; int ba_high; int ba_low; void* ts_rssi_ctl2; void* ts_rssi_ctl1; void* ts_rssi_ctl0; void* ts_seqnum; void* ts_rateindex; void* tid; int ts_tstamp; } ;
struct ath_hw {int dummy; } ;
struct ar5416_desc {int AR_TxEVM2; int AR_TxEVM1; int AR_TxEVM0; int ds_txstatus5; int ds_txstatus1; int AR_BaBitmapHigh; int AR_BaBitmapLow; int ds_txstatus0; int AR_SendTimestamp; int ds_txstatus9; } ;


 int FUNC_0 (int ) ;
 struct ar5416_desc* FUNC_1 (void*) ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath_hw*,int) ;

__attribute__((used)) static int FUNC_4(struct ath_hw *VAR_35, void *VAR_36,
     struct ath_tx_status *VAR_37)
{
 struct ar5416_desc *VAR_38 = FUNC_1(VAR_36);
 u32 VAR_39;

 VAR_39 = FUNC_0(VAR_38->ds_txstatus9);
 if ((VAR_39 & VAR_12) == 0)
  return -VAR_34;

 VAR_37->ts_tstamp = VAR_38->AR_SendTimestamp;
 VAR_37->ts_status = 0;
 VAR_37->ts_flags = 0;

 if (VAR_39 & VAR_13)
  VAR_37->ts_status |= VAR_28;
 VAR_37->tid = FUNC_2(VAR_39, VAR_21);
 VAR_37->ts_rateindex = FUNC_2(VAR_39, VAR_5);
 VAR_37->ts_seqnum = FUNC_2(VAR_39, VAR_8);

 VAR_39 = FUNC_0(VAR_38->ds_txstatus0);
 VAR_37->ts_rssi_ctl0 = FUNC_2(VAR_39, VAR_14);
 VAR_37->ts_rssi_ctl1 = FUNC_2(VAR_39, VAR_15);
 VAR_37->ts_rssi_ctl2 = FUNC_2(VAR_39, VAR_16);
 if (VAR_39 & VAR_9) {
  VAR_37->ts_flags |= VAR_30;
  VAR_37->ba_low = VAR_38->AR_BaBitmapLow;
  VAR_37->ba_high = VAR_38->AR_BaBitmapHigh;
 }

 VAR_39 = FUNC_0(VAR_38->ds_txstatus1);
 if (VAR_39 & VAR_6)
  VAR_37->ts_status |= VAR_29;
 else {
  if (VAR_39 & VAR_2)
   VAR_37->ts_status |= VAR_27;
  if (VAR_39 & VAR_4)
   VAR_37->ts_status |= VAR_25;
  if (VAR_39 & VAR_3) {
   VAR_37->ts_status |= VAR_24;
   FUNC_3(VAR_35, 1);
  }
 }
 if (VAR_39 & VAR_22)
  VAR_37->ts_status |= VAR_26;
 if (VAR_39 & VAR_1)
  VAR_37->ts_flags |= VAR_33;
 if (VAR_39 & VAR_10) {
  VAR_37->ts_flags |= VAR_31;
  FUNC_3(VAR_35, 1);
 }
 if (VAR_39 & VAR_11) {
  VAR_37->ts_flags |= VAR_32;
  FUNC_3(VAR_35, 1);
 }
 VAR_37->ts_shortretry = FUNC_2(VAR_39, VAR_7);
 VAR_37->ts_longretry = FUNC_2(VAR_39, VAR_0);
 VAR_37->ts_virtcol = FUNC_2(VAR_39, VAR_23);

 VAR_39 = FUNC_0(VAR_38->ds_txstatus5);
 VAR_37->ts_rssi = FUNC_2(VAR_39, VAR_20);
 VAR_37->ts_rssi_ext0 = FUNC_2(VAR_39, VAR_17);
 VAR_37->ts_rssi_ext1 = FUNC_2(VAR_39, VAR_18);
 VAR_37->ts_rssi_ext2 = FUNC_2(VAR_39, VAR_19);

 VAR_37->evm0 = VAR_38->AR_TxEVM0;
 VAR_37->evm1 = VAR_38->AR_TxEVM1;
 VAR_37->evm2 = VAR_38->AR_TxEVM2;

 return 0;
}
