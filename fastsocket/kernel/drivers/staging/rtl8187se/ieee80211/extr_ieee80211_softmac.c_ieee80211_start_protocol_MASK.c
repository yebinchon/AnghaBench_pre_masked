
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {short channel; int beacon_interval; } ;
struct ieee80211_device {int proto_started; int* last_rxseq_num; int* last_rxfrag_num; int iw_mode; scalar_t__ init_wmmparam_flag; scalar_t__* last_packet_time; TYPE_1__ current_network; int dev; int (* set_chan ) (int ,short) ;} ;
struct TYPE_4__ {int * channel_map; } ;


 TYPE_2__* FUNC_0 (struct ieee80211_device*) ;





 short VAR_0 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (int ,short) ;

void FUNC_6(struct ieee80211_device *VAR_1)
{
 short VAR_2 = 0;
  int VAR_3 = 0;

 if (VAR_1->proto_started)
  return;

 VAR_1->proto_started = 1;

 if (VAR_1->current_network.channel == 0){
  do{
   VAR_2++;
   if (VAR_2 > VAR_0)
    return;

  }while(!FUNC_0(VAR_1)->channel_map[VAR_2]);

  VAR_1->current_network.channel = VAR_2;
 }

 if (VAR_1->current_network.beacon_interval == 0)
  VAR_1->current_network.beacon_interval = 100;
 VAR_1->set_chan(VAR_1->dev,VAR_1->current_network.channel);

        for(VAR_3 = 0; VAR_3 < 17; VAR_3++) {
   VAR_1->last_rxseq_num[VAR_3] = -1;
   VAR_1->last_rxfrag_num[VAR_3] = -1;
   VAR_1->last_packet_time[VAR_3] = 0;
 }

 VAR_1->init_wmmparam_flag = 0;







 switch (VAR_1->iw_mode) {
  case 131:
   VAR_1->iw_mode = 130;

  case 130:
   FUNC_1(VAR_1);
   break;

  case 132:
   FUNC_2(VAR_1);
   break;

  case 129:
   FUNC_3(VAR_1);
  break;

  case 128:
   FUNC_4(VAR_1);
   break;

  default:
   VAR_1->iw_mode = 130;
   FUNC_1(VAR_1);
   break;
 }
}
