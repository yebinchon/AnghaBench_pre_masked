
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ flags; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {char* ssid; int ssid_len; char* bssid; scalar_t__ capability; } ;
struct ieee80211_device {int sync_scan_hurryup; short proto_started; scalar_t__ iw_mode; int ssid_set; int wx_sem; int lock; TYPE_2__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ieee80211_device *VAR_4,
         struct iw_request_info *VAR_5,
         union iwreq_data *VAR_6, char *VAR_7)
{

 int VAR_8=0,VAR_9;
 short VAR_10;
 unsigned long VAR_11;

 VAR_4->sync_scan_hurryup = 1;

 FUNC_0(&VAR_4->wx_sem);

 VAR_10 = VAR_4->proto_started;

 if (VAR_6->essid.length > VAR_2){
  VAR_8= -VAR_0;
  goto out;
 }

 if (VAR_4->iw_mode == VAR_3){
  VAR_8= -1;
  goto out;
 }

 if(VAR_10)
  FUNC_2(VAR_4);




 FUNC_4(&VAR_4->lock, VAR_11);

 if (VAR_6->essid.flags && VAR_6->essid.length) {

  VAR_9 = (VAR_6->essid.length < VAR_2) ? (VAR_6->essid.length) : VAR_2;
  FUNC_3(VAR_4->current_network.ssid, 0, VAR_4->current_network.ssid_len);
  FUNC_6(VAR_4->current_network.ssid, VAR_7, VAR_9);
  VAR_4->current_network.ssid_len = VAR_9;
  VAR_4->ssid_set = 1;



  if(VAR_9 == 0){
   FUNC_3(VAR_4->current_network.bssid, 0, VAR_1);
   VAR_4->current_network.capability = 0;
  }

 }
 else{
  VAR_4->ssid_set = 0;
  VAR_4->current_network.ssid[0] = '\0';
  VAR_4->current_network.ssid_len = 0;
 }

 FUNC_5(&VAR_4->lock, VAR_11);

 if (VAR_10)
  FUNC_1(VAR_4);
out:
 FUNC_7(&VAR_4->wx_sem);
 return VAR_8;
}
