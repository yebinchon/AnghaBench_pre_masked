
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
union iwreq_data {TYPE_1__ data; } ;
struct TYPE_6__ {scalar_t__ bBusyTraffic; } ;
struct r8180_priv {int wx_sem; struct ieee80211_device* ieee80211; TYPE_3__ link_detect; scalar_t__ bInactivePs; scalar_t__ up; } ;
struct net_device {int dummy; } ;
struct iw_scan_req {scalar_t__ essid_len; int essid; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {int ssid; scalar_t__ ssid_len; } ;
struct ieee80211_device {int actscanning; scalar_t__ state; TYPE_2__ current_network; scalar_t__ bHwRadioOff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 struct r8180_priv *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;
 struct ieee80211_device* VAR_8 = VAR_6->ieee80211;


 if(VAR_6->ieee80211->bHwRadioOff)
  return 0;




 if (VAR_4->data.flags & VAR_1)
 {
  struct iw_scan_req* VAR_9 = (struct iw_scan_req*)VAR_5;
  if (VAR_9->essid_len)
  {

   VAR_8->current_network.ssid_len = VAR_9->essid_len;
   FUNC_5(VAR_8->current_network.ssid, VAR_9->essid, VAR_9->essid_len);

  }
 }


 FUNC_1(&VAR_6->wx_sem);
 if(VAR_6->up){

  VAR_6->ieee80211->actscanning = 1;
  if(VAR_6->bInactivePs && (VAR_6->ieee80211->state != VAR_0)){
   FUNC_0(VAR_2);
  FUNC_3(VAR_6->ieee80211);



   VAR_7 = 0;
  }
  else
  {


   if ((VAR_6->link_detect.bBusyTraffic) && (1))
   {
    VAR_7 = 0;
    FUNC_6("Now traffic is busy, please try later!\n");
   }
   else

    VAR_7 = FUNC_4(VAR_6->ieee80211,VAR_3,VAR_4,VAR_5);
  }
 }
 else
  VAR_7 = -1;

 FUNC_7(&VAR_6->wx_sem);

 return VAR_7;
}
