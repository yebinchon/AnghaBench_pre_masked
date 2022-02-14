
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct rndis_wlan_private {int connected; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ,int ) ;
 int FUNC_1 (struct usbnet*) ;
 struct rndis_wlan_private* FUNC_2 (struct usbnet*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_2)
{
 struct rndis_wlan_private *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->connected) {
  VAR_3->connected = 0;
  FUNC_3(VAR_3->bssid, 0, VAR_0);

  FUNC_1(VAR_2);

  FUNC_0(VAR_2->net, 0, ((void*)0), 0, VAR_1);
 }

 FUNC_4(VAR_2->net);
}
