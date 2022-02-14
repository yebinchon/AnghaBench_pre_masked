
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short channel; int beacon_interval; } ;
struct ieee80211_device {int proto_started; int* last_rxseq_num; int* last_rxfrag_num; scalar_t__ iw_mode; scalar_t__ init_wmmparam_flag; scalar_t__* last_packet_time; TYPE_1__ current_network; } ;
struct TYPE_4__ {int * channel_map; } ;


 TYPE_2__* FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 short VAR_4 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*) ;

void FUNC_5(struct ieee80211_device *VAR_5)
{
 short VAR_6 = 0;
  int VAR_7 = 0;
 if (VAR_5->proto_started)
  return;

 VAR_5->proto_started = 1;

 if (VAR_5->current_network.channel == 0){
  do{
   VAR_6++;
   if (VAR_6 > VAR_4)
    return;
  }while(!FUNC_0(VAR_5)->channel_map[VAR_6]);
  VAR_5->current_network.channel = VAR_6;
 }

 if (VAR_5->current_network.beacon_interval == 0)
  VAR_5->current_network.beacon_interval = 100;



        for(VAR_7 = 0; VAR_7 < 17; VAR_7++) {
   VAR_5->last_rxseq_num[VAR_7] = -1;
   VAR_5->last_rxfrag_num[VAR_7] = -1;
   VAR_5->last_packet_time[VAR_7] = 0;
 }

 VAR_5->init_wmmparam_flag = 0;







 if (VAR_5->iw_mode == VAR_1)
  FUNC_1(VAR_5);

 else if (VAR_5->iw_mode == VAR_0)
  FUNC_2(VAR_5);

 else if (VAR_5->iw_mode == VAR_2)
  FUNC_3(VAR_5);

 else if(VAR_5->iw_mode == VAR_3)
  FUNC_4(VAR_5);
}
