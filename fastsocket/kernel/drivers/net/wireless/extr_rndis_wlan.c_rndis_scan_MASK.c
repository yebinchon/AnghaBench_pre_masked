
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct usbnet {int net; } ;
struct rndis_wlan_private {scalar_t__ device_type; int scan_work; int workqueue; struct cfg80211_scan_request* scan_request; } ;
struct net_device {int dummy; } ;
struct cfg80211_scan_request {TYPE_1__* wdev; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct rndis_wlan_private* FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int ,char*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct usbnet*,int *,int *) ;
 int FUNC_5 (struct usbnet*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_5,
   struct cfg80211_scan_request *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->wdev->netdev;
 struct usbnet *VAR_8 = FUNC_2(VAR_7);
 struct rndis_wlan_private *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;
 int VAR_11 = VAR_4;

 FUNC_1(VAR_8->net, "cfg80211.scan\n");




 FUNC_4(VAR_8, ((void*)0), ((void*)0));

 if (!VAR_6)
  return -VAR_1;

 if (VAR_9->scan_request && VAR_9->scan_request != VAR_6)
  return -VAR_0;

 VAR_9->scan_request = VAR_6;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 == 0) {
  if (VAR_9->device_type == VAR_3)
   VAR_11 = VAR_2;


  FUNC_3(VAR_9->workqueue, &VAR_9->scan_work, VAR_11);
 }

 return VAR_10;
}
