
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_rx_status {int rate_idx; int flag; int band; int freq; } ;
struct ieee80211_channel {int center_freq; int band; } ;
struct ar9170_rx_macstatus {int error; int status; } ;
struct ar9170_rx_head {int* plcp; } ;
struct ar9170 {int filter_state; TYPE_1__* hw; struct ieee80211_channel* channel; int sniffer_enabled; int tx_fcs_errors; } ;
struct TYPE_2__ {int wiphy; } ;


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
 int FUNC_0 () ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (struct ar9170_rx_macstatus*) ;
 int FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct ar9170 *VAR_24,
 struct ar9170_rx_head *VAR_25, struct ar9170_rx_macstatus *VAR_26,
 struct ieee80211_rx_status *VAR_27)
{
 struct ieee80211_channel *VAR_28;
 u8 VAR_29, VAR_30;

 FUNC_1(sizeof(struct ar9170_rx_head) != 12);
 FUNC_1(sizeof(struct ar9170_rx_macstatus) != 4);

 VAR_29 = VAR_26->error;

 if (VAR_29 & VAR_7) {
  if (!VAR_24->sniffer_enabled)
   return -VAR_10;
 }

 if (VAR_29 & VAR_6) {
  if (!(VAR_24->filter_state & VAR_14))
   return -VAR_10;

  VAR_27->flag |= VAR_19;
 }

 if (VAR_29 & VAR_4) {
  VAR_24->tx_fcs_errors++;

  if (!(VAR_24->filter_state & VAR_13))
   return -VAR_10;

  VAR_27->flag |= VAR_18;
 }

 VAR_30 = FUNC_2(VAR_26);
 if (!(VAR_30 & VAR_2) &&
     VAR_30 != VAR_0) {
  if ((VAR_30 == VAR_1) &&
      (VAR_29 & VAR_5))
   VAR_27->flag |= VAR_21;

  VAR_27->flag |= VAR_17;
 }

 if (VAR_29 & VAR_3 && !VAR_24->sniffer_enabled)
  return -VAR_11;

 VAR_29 &= ~(VAR_5 |
     VAR_4 |
     VAR_7 |
     VAR_3 |
     VAR_6);


 if (FUNC_5(VAR_29)) {


  if (FUNC_4())
   FUNC_6(VAR_24->hw->wiphy, "received frame with "
          "suspicious error code (%#x).\n", VAR_29);

  return -VAR_10;
 }

 VAR_28 = VAR_24->channel;
 if (VAR_28) {
  VAR_27->band = VAR_28->band;
  VAR_27->freq = VAR_28->center_freq;
 }

 switch (VAR_26->status & VAR_8) {
 case 139:
  if (VAR_26->status & VAR_9)
   VAR_27->flag |= VAR_22;
  switch (VAR_25->plcp[0]) {
  case 142:
   VAR_27->rate_idx = 0;
   break;
  case 141:
   VAR_27->rate_idx = 1;
   break;
  case 140:
   VAR_27->rate_idx = 2;
   break;
  case 143:
   VAR_27->rate_idx = 3;
   break;
  default:
   if (FUNC_4()) {
    FUNC_7(VAR_24->hw->wiphy, "invalid plcp cck "
           "rate (%x).\n", VAR_25->plcp[0]);
   }

   return -VAR_10;
  }
  break;

 case 138:
 case 136:
  switch (VAR_25->plcp[0] & 0xf) {
  case 129:
   VAR_27->rate_idx = 0;
   break;
  case 128:
   VAR_27->rate_idx = 1;
   break;
  case 135:
   VAR_27->rate_idx = 2;
   break;
  case 134:
   VAR_27->rate_idx = 3;
   break;
  case 133:
   VAR_27->rate_idx = 4;
   break;
  case 132:
   VAR_27->rate_idx = 5;
   break;
  case 131:
   VAR_27->rate_idx = 6;
   break;
  case 130:
   VAR_27->rate_idx = 7;
   break;
  default:
   if (FUNC_4()) {
    FUNC_7(VAR_24->hw->wiphy, "invalid plcp ofdm "
     "rate (%x).\n", VAR_25->plcp[0]);
   }

   return -VAR_10;
  }
  if (VAR_27->band == VAR_15)
   VAR_27->rate_idx += 4;
  break;

 case 137:
  if (VAR_25->plcp[3] & 0x80)
   VAR_27->flag |= VAR_16;
  if (VAR_25->plcp[6] & 0x80)
   VAR_27->flag |= VAR_23;

  VAR_27->rate_idx = FUNC_3(0, 75, VAR_25->plcp[3] & 0x7f);
  VAR_27->flag |= VAR_20;
  break;

 default:
  FUNC_0();
  return -VAR_12;
 }

 return 0;
}
