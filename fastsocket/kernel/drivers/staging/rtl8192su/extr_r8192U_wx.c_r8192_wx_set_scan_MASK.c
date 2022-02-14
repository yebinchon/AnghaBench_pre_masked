
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
union iwreq_data {TYPE_2__ data; } ;
struct r8192_priv {int wx_sem; struct ieee80211_device* ieee80211; int up; } ;
struct net_device {int dummy; } ;
struct iw_scan_req {scalar_t__ essid_len; int essid; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int ssid; scalar_t__ ssid_len; } ;
struct TYPE_4__ {int bBusyTraffic; } ;
struct ieee80211_device {scalar_t__ state; scalar_t__ scanning; TYPE_3__ current_network; TYPE_1__ LinkDetectInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (struct ieee80211_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_1(VAR_4);
 struct ieee80211_device* VAR_9 = VAR_8->ieee80211;
 int VAR_10 = 0;

 if(!VAR_8->up) return -VAR_1;

 if (VAR_8->ieee80211->LinkDetectInfo.bBusyTraffic == 1)
  return -VAR_0;

 if (VAR_6->data.flags & VAR_3)
 {
  struct iw_scan_req* VAR_11 = (struct iw_scan_req*)VAR_7;
  if (VAR_11->essid_len)
  {

   VAR_9->current_network.ssid_len = VAR_11->essid_len;
   FUNC_4(VAR_9->current_network.ssid, VAR_11->essid, VAR_11->essid_len);

  }
 }

 FUNC_0(&VAR_8->wx_sem);
 if(VAR_8->ieee80211->state != VAR_2){
                VAR_8->ieee80211->scanning = 0;
                FUNC_2(VAR_8->ieee80211);
                VAR_10 = 0;
        }
 else
 VAR_10 = FUNC_3(VAR_8->ieee80211,VAR_5,VAR_6,VAR_7);
 FUNC_5(&VAR_8->wx_sem);
 return VAR_10;
}
