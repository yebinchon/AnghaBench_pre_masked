
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_probe_response {int dummy; } ;
struct ieee80211_hdr_4addr {int frame_ctl; } ;
struct ieee80211_device {scalar_t__ ps; scalar_t__ iw_mode; scalar_t__ state; int last_rx_ps_time; int ps_task; scalar_t__ sta_sleep; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_device*,struct ieee80211_probe_response*,struct ieee80211_rx_stats*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ieee80211_device *VAR_4,
        struct ieee80211_hdr_4addr *VAR_5,
        struct ieee80211_rx_stats *VAR_6)
{
 if(VAR_4->sta_sleep || (VAR_4->ps != VAR_1 &&
    VAR_4->iw_mode == VAR_2 &&
    VAR_4->state == VAR_0))
 {
  FUNC_4(&VAR_4->ps_task);
 }

 if(FUNC_2(VAR_5->frame_ctl) != 128 &&
  FUNC_2(VAR_5->frame_ctl) != 129)
  VAR_4->last_rx_ps_time = VAR_3;

 switch (FUNC_2(VAR_5->frame_ctl)) {

 case 129:
  FUNC_0("received BEACON (%d)\n",
         FUNC_2(VAR_5->frame_ctl));
  FUNC_1("Beacon\n");
  FUNC_3(
   VAR_4, (struct ieee80211_probe_response *)VAR_5, VAR_6);
  break;

 case 128:
  FUNC_0("received PROBE RESPONSE (%d)\n",
         FUNC_2(VAR_5->frame_ctl));
  FUNC_1("Probe response\n");
  FUNC_3(
   VAR_4, (struct ieee80211_probe_response *)VAR_5, VAR_6);
  break;

 }
}
