
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rx_stats {int dummy; } ;
struct ieee80211_probe_response {int dummy; } ;
struct ieee80211_hdr_4addr {int frame_ctl; } ;
struct ieee80211_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_device*,struct ieee80211_probe_response*,struct ieee80211_rx_stats*) ;

void FUNC_4(struct ieee80211_device *VAR_0,
        struct ieee80211_hdr_4addr *VAR_1,
        struct ieee80211_rx_stats *VAR_2)
{
 switch (FUNC_2(VAR_1->frame_ctl)) {

 case 129:
  FUNC_0("received BEACON (%d)\n",
         FUNC_2(VAR_1->frame_ctl));
  FUNC_1("Beacon\n");
  FUNC_3(
   VAR_0, (struct ieee80211_probe_response *)VAR_1, VAR_2);
  break;

 case 128:
  FUNC_0("received PROBE RESPONSE (%d)\n",
         FUNC_2(VAR_1->frame_ctl));
  FUNC_1("Probe response\n");
  FUNC_3(
   VAR_0, (struct ieee80211_probe_response *)VAR_1, VAR_2);
  break;
 }
}
