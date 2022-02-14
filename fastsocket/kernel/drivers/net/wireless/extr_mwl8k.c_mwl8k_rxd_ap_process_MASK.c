
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mwl8k_rxd_ap {int rx_ctrl; int rate; int channel; int rx_status; int pkt_len; int qos_control; int noise_floor; int rssi; } ;
struct ieee80211_rx_status {int flag; int rate_idx; int band; int freq; int signal; } ;
typedef int s8 ;
typedef int __le16 ;
struct TYPE_3__ {int hw_value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_rx_status*,int ,int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void *VAR_12, struct ieee80211_rx_status *VAR_13,
       __le16 *VAR_14, s8 *VAR_15)
{
 struct mwl8k_rxd_ap *VAR_16 = VAR_12;

 if (!(VAR_16->rx_ctrl & VAR_7))
  return -1;
 FUNC_5();

 FUNC_4(VAR_13, 0, sizeof(*VAR_13));

 VAR_13->signal = -VAR_16->rssi;
 *VAR_15 = -VAR_16->noise_floor;

 if (VAR_16->rate & VAR_3) {
  VAR_13->flag |= VAR_9;
  if (VAR_16->rate & VAR_2)
   VAR_13->flag |= VAR_8;
  VAR_13->rate_idx = FUNC_1(VAR_16->rate);
 } else {
  int VAR_17;

  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_11); VAR_17++) {
   if (VAR_11[VAR_17].hw_value == VAR_16->rate) {
    VAR_13->rate_idx = VAR_17;
    break;
   }
  }
 }

 if (VAR_16->channel > 14) {
  VAR_13->band = VAR_1;
  if (!(VAR_13->flag & VAR_9))
   VAR_13->rate_idx -= 5;
 } else {
  VAR_13->band = VAR_0;
 }
 VAR_13->freq = FUNC_2(VAR_16->channel,
            VAR_13->band);

 *VAR_14 = VAR_16->qos_control;

 if ((VAR_16->rx_status != VAR_5) &&
     (VAR_16->rx_status & VAR_4) &&
     (VAR_16->rx_status & VAR_6))
  VAR_13->flag |= VAR_10;

 return FUNC_3(VAR_16->pkt_len);
}
