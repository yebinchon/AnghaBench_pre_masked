
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int last_rx_rate; int last_rx_updated; int * rx_count; int last_rx_signal; int last_rx_silence; } ;
struct ieee80211_hdr {int addr2; } ;
struct hostap_80211_rx_status {int rate; int signal; int noise; } ;
struct ap_data {int sta_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sta_info* FUNC_0 (struct ap_data*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ap_data *VAR_2,
      struct ieee80211_hdr *VAR_3,
      struct hostap_80211_rx_status *VAR_4)
{
 struct sta_info *VAR_5;

 if (!VAR_2)
  return -1;

 FUNC_1(&VAR_2->sta_table_lock);
 VAR_5 = FUNC_0(VAR_2, VAR_3->addr2);
 if (VAR_5) {
  VAR_5->last_rx_silence = VAR_4->noise;
  VAR_5->last_rx_signal = VAR_4->signal;
  VAR_5->last_rx_rate = VAR_4->rate;
  VAR_5->last_rx_updated = VAR_0 | VAR_1;
  if (VAR_4->rate == 10)
   VAR_5->rx_count[0]++;
  else if (VAR_4->rate == 20)
   VAR_5->rx_count[1]++;
  else if (VAR_4->rate == 55)
   VAR_5->rx_count[2]++;
  else if (VAR_4->rate == 110)
   VAR_5->rx_count[3]++;
 }
 FUNC_2(&VAR_2->sta_table_lock);

 return VAR_5 ? 0 : -1;
}
