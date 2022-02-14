
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_rx_stats {int dummy; } ;
struct TYPE_4__ {unsigned char signalstrength; int noise; unsigned char signal; scalar_t__ ac_aci_acm_aifsn; } ;
struct ieee80211_network {int rates_len; int rates_ex_len; int ssid_len; int wpa_ie_len; int rsn_ie_len; int QoS_Enable; int CountryIeLen; TYPE_1__* CountryIeBuf; int Turbo_Enable; int SignalStrength; TYPE_1__* wmm_param; int wmm_info; int last_scanned; TYPE_1__* rsn_ie; TYPE_1__* wpa_ie; int * last_dtim_sta_time; int dtim_data; int dtim_period; int atim_window; int listen_interval; int beacon_interval; int * time_stamp; int flags; int mode; int channel; TYPE_1__* ssid; int HighestOperaRate; TYPE_1__* rates_ex; TYPE_1__* rates; int capability; TYPE_1__ stats; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (unsigned char) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

inline void FUNC_3(struct ieee80211_network *VAR_2,
      struct ieee80211_network *VAR_3)
{
 unsigned char VAR_4 = VAR_3->stats.signalstrength;
 unsigned char VAR_5 = 0;
 unsigned char VAR_6 = 0;
        if(VAR_2->stats.signalstrength > 0) {
                VAR_4 = (VAR_2->stats.signalstrength * 5 + VAR_3->stats.signalstrength + 5)/6;
        }
 VAR_5 = FUNC_0(VAR_4);

 if(VAR_2->stats.noise > 0)
  VAR_6 = (VAR_2->stats.noise * 5 + VAR_3->stats.noise)/6;


 FUNC_1(&VAR_2->stats, &VAR_3->stats, sizeof(struct ieee80211_rx_stats));
 VAR_2->stats.signalstrength = VAR_4;
 VAR_2->stats.signal = VAR_5;

 VAR_2->stats.noise = VAR_6;


 VAR_2->capability = VAR_3->capability;
 FUNC_1(VAR_2->rates, VAR_3->rates, VAR_3->rates_len);
 VAR_2->rates_len = VAR_3->rates_len;
 FUNC_1(VAR_2->rates_ex, VAR_3->rates_ex, VAR_3->rates_ex_len);
 VAR_2->rates_ex_len = VAR_3->rates_ex_len;
 VAR_2->HighestOperaRate= VAR_3->HighestOperaRate;



 if(VAR_3->ssid_len > 0)
 {


  FUNC_2(VAR_2->ssid, 0, VAR_2->ssid_len);
  VAR_2->ssid_len = VAR_3->ssid_len;
  FUNC_1(VAR_2->ssid, VAR_3->ssid, VAR_3->ssid_len);
 }


 VAR_2->channel = VAR_3->channel;
 VAR_2->mode = VAR_3->mode;
 VAR_2->flags = VAR_3->flags;
 VAR_2->time_stamp[0] = VAR_3->time_stamp[0];
 VAR_2->time_stamp[1] = VAR_3->time_stamp[1];

 VAR_2->beacon_interval = VAR_3->beacon_interval;
 VAR_2->listen_interval = VAR_3->listen_interval;
 VAR_2->atim_window = VAR_3->atim_window;
 VAR_2->dtim_period = VAR_3->dtim_period;
 VAR_2->dtim_data = VAR_3->dtim_data;
 VAR_2->last_dtim_sta_time[0] = VAR_3->last_dtim_sta_time[0];
 VAR_2->last_dtim_sta_time[1] = VAR_3->last_dtim_sta_time[1];

 FUNC_1(VAR_2->wpa_ie, VAR_3->wpa_ie, VAR_3->wpa_ie_len);
 VAR_2->wpa_ie_len = VAR_3->wpa_ie_len;
 FUNC_1(VAR_2->rsn_ie, VAR_3->rsn_ie, VAR_3->rsn_ie_len);
 VAR_2->rsn_ie_len = VAR_3->rsn_ie_len;

 VAR_2->last_scanned = VAR_1;



 VAR_2->wmm_info = VAR_3->wmm_info;





 if(VAR_3->wmm_param[0].ac_aci_acm_aifsn|| VAR_3->wmm_param[1].ac_aci_acm_aifsn|| VAR_3->wmm_param[2].ac_aci_acm_aifsn|| VAR_3->wmm_param[3].ac_aci_acm_aifsn) {



   FUNC_1(VAR_2->wmm_param, VAR_3->wmm_param, VAR_0);
 }
 VAR_2->QoS_Enable = VAR_3->QoS_Enable;



 VAR_2->SignalStrength = VAR_3->SignalStrength;
 VAR_2->Turbo_Enable = VAR_3->Turbo_Enable;
 VAR_2->CountryIeLen = VAR_3->CountryIeLen;
 FUNC_1(VAR_2->CountryIeBuf, VAR_3->CountryIeBuf, VAR_3->CountryIeLen);
}
