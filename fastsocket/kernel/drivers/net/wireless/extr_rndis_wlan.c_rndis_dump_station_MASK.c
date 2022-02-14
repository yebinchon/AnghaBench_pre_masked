
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
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct usbnet*,struct station_info*) ;
 struct rndis_wlan_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2, struct net_device *VAR_3,
          int VAR_4, u8 *VAR_5, struct station_info *VAR_6)
{
 struct rndis_wlan_private *VAR_7 = FUNC_2(VAR_2);
 struct usbnet *VAR_8 = VAR_7->usbdev;

 if (VAR_4 != 0)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_7->bssid, VAR_1);

 FUNC_1(VAR_8, VAR_6);

 return 0;
}
