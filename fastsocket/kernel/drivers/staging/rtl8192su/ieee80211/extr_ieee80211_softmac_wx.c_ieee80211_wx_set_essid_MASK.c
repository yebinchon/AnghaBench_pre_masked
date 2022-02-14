
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ flags; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_4__ {char* ssid; int ssid_len; } ;
struct ieee80211_device {int sync_scan_hurryup; short proto_started; scalar_t__ iw_mode; int ssid_set; int wx_sem; int lock; TYPE_2__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ieee80211_device *VAR_3,
         struct iw_request_info *VAR_4,
         union iwreq_data *VAR_5, char *VAR_6)
{

 int VAR_7=0,VAR_8;
 short VAR_9;
 unsigned long VAR_10;

 VAR_3->sync_scan_hurryup = 1;
 FUNC_0(&VAR_3->wx_sem);

 VAR_9 = VAR_3->proto_started;

 if (VAR_5->essid.length > VAR_1){
  VAR_7= -VAR_0;
  goto out;
 }

 if (VAR_3->iw_mode == VAR_2){
  VAR_7= -1;
  goto out;
 }

 if(VAR_9)
  FUNC_2(VAR_3);





 FUNC_3(&VAR_3->lock, VAR_10);

 if (VAR_5->essid.flags && VAR_5->essid.length) {

  VAR_8 = ((VAR_5->essid.length-1) < VAR_1) ? (VAR_5->essid.length-1) : VAR_1;
  FUNC_5(VAR_3->current_network.ssid, VAR_6, VAR_8+1);
  VAR_3->current_network.ssid_len = VAR_8+1;
  VAR_3->ssid_set = 1;
 }
 else{
  VAR_3->ssid_set = 0;
  VAR_3->current_network.ssid[0] = '\0';
  VAR_3->current_network.ssid_len = 0;
 }
 FUNC_4(&VAR_3->lock, VAR_10);

 if (VAR_9)
  FUNC_1(VAR_3);
out:
 FUNC_6(&VAR_3->wx_sem);
 return VAR_7;
}
