
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ssid_len; int channel; int bssid; int ssid; } ;
struct ieee80211_device {int assoc_id; int ssid_set; TYPE_2__* dev; int (* data_hard_resume ) (TYPE_2__*) ;int (* link_change ) (TYPE_2__*) ;int state; TYPE_1__ current_network; int (* set_chan ) (TYPE_2__*,int ) ;} ;
struct TYPE_7__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(struct ieee80211_device *VAR_4)
{
 VAR_4->assoc_id = 1;

 if (VAR_4->current_network.ssid_len == 0){
  FUNC_4(VAR_4->current_network.ssid,
   VAR_1,
   VAR_3);

  VAR_4->current_network.ssid_len = FUNC_3(VAR_1);
  VAR_4->ssid_set = 1;
 }

 FUNC_0(VAR_4->current_network.bssid, VAR_4->dev->dev_addr, VAR_0);

 VAR_4->set_chan(VAR_4->dev, VAR_4->current_network.channel);
 VAR_4->state = VAR_2;
 VAR_4->link_change(VAR_4->dev);
 FUNC_2(VAR_4);

 if (VAR_4->data_hard_resume)
  VAR_4->data_hard_resume(VAR_4->dev);

 FUNC_1(VAR_4->dev);
}
