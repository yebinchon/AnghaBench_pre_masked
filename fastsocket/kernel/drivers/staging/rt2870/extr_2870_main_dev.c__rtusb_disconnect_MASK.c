
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_device {int devpath; TYPE_1__* bus; } ;
struct net_device {int name; } ;
struct TYPE_7__ {struct net_device* net_dev; } ;
struct TYPE_6__ {int bus_name; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct usb_device*) ;

__attribute__((used)) static void FUNC_9(struct usb_device *VAR_2, PRTMP_ADAPTER VAR_3)
{
 struct net_device *VAR_4 = ((void*)0);


 FUNC_0(VAR_0, ("rtusb_disconnect: unregister usbnet usb-%s-%s\n",
    VAR_2->bus->bus_name, VAR_2->devpath));
 if (!VAR_3)
 {
  FUNC_8(VAR_2);

  FUNC_5("rtusb_disconnect: pAd == NULL!\n");
  return;
 }
 FUNC_2(VAR_3, VAR_1);




 FUNC_6(1);




 VAR_4 = VAR_3->net_dev;
 if (VAR_3->net_dev != ((void*)0))
 {
  FUNC_5("rtusb_disconnect: unregister_netdev(), dev->name=%s!\n", VAR_4->name);
  FUNC_7 (VAR_3->net_dev);
 }
 FUNC_6(1);
 FUNC_3();
 FUNC_6(1);


 FUNC_4(VAR_4);


 FUNC_1(VAR_3);


 FUNC_8(VAR_2);
 FUNC_6(1);

 FUNC_0(VAR_0, (" RTUSB disconnect successfully\n"));
}
