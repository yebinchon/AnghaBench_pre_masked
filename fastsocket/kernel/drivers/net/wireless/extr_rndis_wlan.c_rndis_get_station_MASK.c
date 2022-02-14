
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct usbnet {int dummy; } ;
struct station_info {int dummy; } ;
struct rndis_wlan_private {int bssid; struct usbnet* usbdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct usbnet*,struct station_info*) ;
 struct rndis_wlan_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_1, struct net_device *VAR_2,
     u8 *VAR_3, struct station_info *VAR_4)
{
 struct rndis_wlan_private *VAR_5 = FUNC_2(VAR_1);
 struct usbnet *VAR_6 = VAR_5->usbdev;

 if (FUNC_0(VAR_5->bssid, VAR_3))
  return -VAR_0;

 FUNC_1(VAR_6, VAR_4);

 return 0;
}
