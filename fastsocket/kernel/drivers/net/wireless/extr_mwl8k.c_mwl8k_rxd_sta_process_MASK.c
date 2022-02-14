
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwl8k_rxd_sta {int rx_ctrl; int channel; int pkt_len; int qos_control; int noise_level; int rssi; int rate_info; } ;
struct ieee80211_rx_status {int rate_idx; int flag; int band; int freq; int antenna; int signal; } ;
typedef int s8 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void *VAR_14, struct ieee80211_rx_status *VAR_15,
         __le16 *VAR_16, s8 *VAR_17)
{
 struct mwl8k_rxd_sta *VAR_18 = VAR_14;
 u16 VAR_19;

 if (!(VAR_18->rx_ctrl & VAR_8))
  return -1;
 FUNC_5();

 VAR_19 = FUNC_3(VAR_18->rate_info);

 FUNC_4(VAR_15, 0, sizeof(*VAR_15));

 VAR_15->signal = -VAR_18->rssi;
 *VAR_17 = -VAR_18->noise_level;
 VAR_15->antenna = FUNC_0(VAR_19);
 VAR_15->rate_idx = FUNC_1(VAR_19);

 if (VAR_19 & VAR_5)
  VAR_15->flag |= VAR_12;
 if (VAR_19 & VAR_2)
  VAR_15->flag |= VAR_9;
 if (VAR_19 & VAR_4)
  VAR_15->flag |= VAR_13;
 if (VAR_19 & VAR_3)
  VAR_15->flag |= VAR_10;

 if (VAR_18->channel > 14) {
  VAR_15->band = VAR_1;
  if (!(VAR_15->flag & VAR_10))
   VAR_15->rate_idx -= 5;
 } else {
  VAR_15->band = VAR_0;
 }
 VAR_15->freq = FUNC_2(VAR_18->channel,
            VAR_15->band);

 *VAR_16 = VAR_18->qos_control;
 if ((VAR_18->rx_ctrl & VAR_6) &&
     (VAR_18->rx_ctrl & VAR_7))
  VAR_15->flag |= VAR_11;

 return FUNC_3(VAR_18->pkt_len);
}
