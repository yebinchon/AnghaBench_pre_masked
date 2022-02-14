
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;
struct rndis_wlan_private {TYPE_1__ wdev; int workqueue; int work; int scan_work; int dev_poller_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usbnet*,int) ;
 int FUNC_4 (int ) ;
 struct rndis_wlan_private* FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct usbnet*,struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct rndis_wlan_private *VAR_2 = FUNC_5(VAR_0);


 FUNC_3(VAR_0, 0);

 FUNC_0(&VAR_2->dev_poller_work);
 FUNC_0(&VAR_2->scan_work);
 FUNC_1(&VAR_2->work);
 FUNC_4(VAR_2->workqueue);
 FUNC_2(VAR_2->workqueue);

 FUNC_6(VAR_0, VAR_1);

 FUNC_8(VAR_2->wdev.wiphy);
 FUNC_7(VAR_2->wdev.wiphy);
}
