
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl1271_rx_descriptor {int flags; scalar_t__ rate; int snr; int status; scalar_t__ channel; scalar_t__ rssi; } ;
struct wl1271 {scalar_t__ hw_min_ht_rate; scalar_t__ noise; } ;
struct ieee80211_rx_status {int flag; int band; int freq; scalar_t__ signal; int rate_idx; } ;


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
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct ieee80211_rx_status*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct wl1271*,scalar_t__,int ) ;
 int FUNC_5 (struct wl1271*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct wl1271 *VAR_12,
        struct wl1271_rx_descriptor *VAR_13,
        struct ieee80211_rx_status *VAR_14,
        u8 VAR_15)
{
 FUNC_1(VAR_14, 0, sizeof(struct ieee80211_rx_status));

 if ((VAR_13->flags & VAR_8) == VAR_7)
  VAR_14->band = VAR_0;
 else
  VAR_14->band = VAR_1;

 VAR_14->rate_idx = FUNC_4(VAR_12, VAR_13->rate, VAR_14->band);


 if (VAR_13->rate <= VAR_12->hw_min_ht_rate)
  VAR_14->flag |= VAR_3;

 VAR_14->signal = VAR_13->rssi;






 VAR_12->noise = VAR_13->rssi - (VAR_13->snr >> 1);

 VAR_14->freq = FUNC_0(VAR_13->channel,
            VAR_14->band);

 if (VAR_13->flags & VAR_9) {
  u8 VAR_16 = VAR_13->status & VAR_11;

  VAR_14->flag |= VAR_4 | VAR_6 |
    VAR_2;

  if (FUNC_2(VAR_16 & VAR_10)) {
   VAR_14->flag |= VAR_5;
   FUNC_3("Michael MIC error. Desc: 0x%x",
           VAR_16);
  }
 }

 if (VAR_15)
  FUNC_5(VAR_12, (u16)VAR_13->channel,
      VAR_14->band);
}
