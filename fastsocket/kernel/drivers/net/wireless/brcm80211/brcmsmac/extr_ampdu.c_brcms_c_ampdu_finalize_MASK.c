
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_rate {scalar_t__ count; } ;
struct TYPE_8__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_4__ status; } ;
struct ieee80211_rts {void* duration; int frame_control; } ;
struct d11txh {int* RTSPLCPFallback; int* FragPLCPFallback; void* MacTxControlHigh; void* RTSDurFallback; void* TxFesTimeFallback; void* TxFesTimeNormal; void* PreloadSize; void* MModeFbrLen; void* MModeLen; void* XtraFrameTypes; void* MacTxControlLow; int rts_frame; void* TxFrameID; } ;
struct brcms_fifo_info {scalar_t__ dmaxferrate; int ampdu_pld_size; } ;
struct brcms_c_info {TYPE_3__* pub; TYPE_2__* hw; TYPE_1__* band; struct ampdu_info* ampdu; } ;
struct brcms_ampdu_session {int dma_len; int ampdu_len; int skb_list; struct brcms_c_info* wlc; } ;
struct ampdu_info {struct brcms_fifo_info* fifo_tb; } ;
struct TYPE_7__ {int unit; } ;
struct TYPE_6__ {int d11core; } ;
struct TYPE_5__ {int pi; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int*) ;
 size_t FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 struct ieee80211_tx_info* FUNC_5 (struct sk_buff*) ;
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
 int FUNC_6 (struct brcms_c_info*,int,int) ;
 int FUNC_7 (struct brcms_c_info*,int,int,int,int,int,int,int) ;
 int FUNC_8 (struct brcms_c_info*,int,int,int) ;
 int FUNC_9 (int ,char*,int ,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (int,int,int) ;
 int FUNC_17 (int,int ) ;
 scalar_t__ FUNC_18 (int) ;
 size_t FUNC_19 (size_t,int) ;
 struct sk_buff* FUNC_20 (int *) ;
 struct sk_buff* FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;

void FUNC_25(struct brcms_ampdu_session *VAR_23)
{
 struct brcms_c_info *VAR_24 = VAR_23->wlc;
 struct ampdu_info *VAR_25 = VAR_24->ampdu;
 struct sk_buff *VAR_26, *VAR_27;
 struct d11txh *VAR_28;
 struct ieee80211_tx_info *VAR_29;
 struct ieee80211_tx_rate *VAR_30;
 u8 VAR_31;
 u8 *VAR_32;
 uint VAR_33;
 uint VAR_34;
 struct brcms_fifo_info *VAR_35;
 u16 VAR_36;
 bool VAR_37;
 bool VAR_38;
 struct ieee80211_rts *VAR_39;
 bool VAR_40 = 0, VAR_41 = 0;
 u16 VAR_42 = VAR_23->dma_len;
 u16 VAR_43 = VAR_7;
 u32 VAR_44 = 0, VAR_45 = 0;
 u32 VAR_46 = 0, VAR_47 = 0;
 u8 VAR_48, VAR_49, VAR_50, VAR_51, VAR_52;
 u16 VAR_53;
 u8 VAR_54 = VAR_2;
 u8 VAR_55 = VAR_2;
 u8 VAR_56 = VAR_3;
 u8 VAR_57 = VAR_3;

 if (FUNC_22(&VAR_23->skb_list))
  return;

 VAR_26 = FUNC_20(&VAR_23->skb_list);
 VAR_27 = FUNC_21(&VAR_23->skb_list);


 VAR_28 = (struct d11txh *)VAR_27->data;
 VAR_34 = FUNC_15(VAR_28->TxFrameID) & VAR_22;
 VAR_35 = &VAR_25->fifo_tb[VAR_34];

 VAR_36 = FUNC_15(VAR_28->MacTxControlLow);
 VAR_36 &= ~VAR_15;
 VAR_36 |= (VAR_14 << VAR_16);
 VAR_28->MacTxControlLow = FUNC_12(VAR_36);


 VAR_31 = VAR_28->RTSPLCPFallback[VAR_1];
 VAR_28->RTSPLCPFallback[VAR_1] = 0;
 VAR_23->ampdu_len -= VAR_31 * VAR_0;


 VAR_38 = ((FUNC_15(VAR_28->XtraFrameTypes) & 0x3) == 0);
 VAR_33 = VAR_38 ? FUNC_0(VAR_28->FragPLCPFallback) :
     FUNC_1(VAR_28->FragPLCPFallback);
 VAR_23->ampdu_len -= FUNC_19(VAR_33, 4) - VAR_33;


 VAR_29 = FUNC_5(VAR_26);
 VAR_30 = VAR_29->status.rates;
 VAR_28 = (struct d11txh *)VAR_26->data;
 VAR_32 = (u8 *)(VAR_28 + 1);
 VAR_39 = (struct ieee80211_rts *)&VAR_28->rts_frame;

 VAR_36 = FUNC_15(VAR_28->MacTxControlLow);

 if (VAR_26 != VAR_27) {
  VAR_36 &= ~VAR_15;
  VAR_36 |= (VAR_13 << VAR_16);
 }
 VAR_36 |= VAR_21;
 if (FUNC_14(VAR_39->frame_control)) {
  VAR_36 |= VAR_20;
  VAR_40 = 1;
 }
 if (FUNC_13(VAR_39->frame_control)) {
  VAR_36 |= VAR_19;
  VAR_41 = 1;
 }
 VAR_28->MacTxControlLow = FUNC_12(VAR_36);

 VAR_37 = VAR_30[1].count > 0;
 if (!VAR_37) {
  VAR_48 = VAR_32[0];
  VAR_49 = VAR_32[3];
 } else {
  VAR_48 = VAR_28->FragPLCPFallback[0];
  VAR_49 = VAR_28->FragPLCPFallback[3];
 }
 VAR_50 = (VAR_48 & VAR_6) ? 1 : 0;
 VAR_51 = FUNC_18(VAR_49) ? 1 : 0;
 VAR_52 = VAR_48 & ~VAR_6;

 if (VAR_50) {
  if (FUNC_4(FUNC_24(VAR_24->band->pi)))
   VAR_43 = VAR_8;
  else
   VAR_43 = VAR_7;
 }


 VAR_44 = VAR_11;
 VAR_44 |= VAR_32[0] & ~VAR_6;
 if (VAR_32[0] & VAR_6)
  VAR_44 |= (VAR_9 << VAR_10);

 VAR_38 = !(FUNC_15(VAR_28->XtraFrameTypes) & 0x03);
 if (VAR_38) {
  VAR_45 =
   FUNC_11(FUNC_10(VAR_28->FragPLCPFallback[0]));
 } else {
  VAR_45 = VAR_11;
  VAR_45 |= VAR_28->FragPLCPFallback[0] & ~VAR_6;
  if (VAR_28->FragPLCPFallback[0] & VAR_6)
   VAR_45 |= VAR_9 << VAR_10;
 }

 if (VAR_40 || VAR_41) {
  VAR_46 =
   FUNC_8(VAR_24, VAR_44,
         0, VAR_43);
  VAR_47 =
   FUNC_8(VAR_24, VAR_45,
         0, VAR_43);
 }

 FUNC_3(VAR_32, VAR_23->ampdu_len);

 FUNC_2(VAR_32);


 if (VAR_28->MModeLen) {
  u16 VAR_58 = FUNC_6(VAR_24, VAR_44,
           VAR_23->ampdu_len);
  VAR_28->MModeLen = FUNC_12(VAR_58);
  VAR_54 = VAR_4;
 }
 if (VAR_28->MModeFbrLen) {
  u16 VAR_59 = FUNC_6(VAR_24, VAR_45,
           VAR_23->ampdu_len);
  VAR_28->MModeFbrLen = FUNC_12(VAR_59);
  VAR_55 = VAR_4;
 }


 if (FUNC_16(VAR_52, 1, 0) >= VAR_35->dmaxferrate) {
  VAR_42 = FUNC_17(VAR_42, VAR_35->ampdu_pld_size);
  VAR_28->PreloadSize = FUNC_12(VAR_42);
 } else {
  VAR_28->PreloadSize = 0;
 }

 VAR_53 = FUNC_15(VAR_28->MacTxControlHigh);


 if (VAR_40 || VAR_41) {
  u16 VAR_60;
  if ((VAR_53 & VAR_18) ==
      VAR_18)
   VAR_56 = VAR_5;

  if ((VAR_53 & VAR_17) ==
       VAR_17)
   VAR_57 = VAR_5;

  VAR_60 = FUNC_7(VAR_24, VAR_41, VAR_46,
         VAR_44, VAR_56,
         VAR_54,
         VAR_23->ampdu_len, 1);
  VAR_39->duration = FUNC_12(VAR_60);
  VAR_60 = FUNC_7(VAR_24, VAR_41,
         VAR_47,
         VAR_45,
         VAR_57,
         VAR_55,
         VAR_23->ampdu_len, 1);
  VAR_28->RTSDurFallback = FUNC_12(VAR_60);

  VAR_28->TxFesTimeNormal = VAR_39->duration;

  VAR_28->TxFesTimeFallback = VAR_28->RTSDurFallback;
 }


 if (VAR_37) {
  VAR_53 |= VAR_12;
  VAR_28->MacTxControlHigh = FUNC_12(VAR_53);
  FUNC_2(VAR_32);
  FUNC_2(VAR_28->FragPLCPFallback);
 }

 FUNC_9(VAR_24->hw->d11core, "wl%d: count %d ampdu_len %d\n",
       VAR_24->pub->unit, FUNC_23(&VAR_23->skb_list),
       VAR_23->ampdu_len);
}
